#include <iostream>
#include "Network.h"



using namespace std;

Network::Network() 
{

	N=12500;
	Ne=10000;
	Ni=2500;
	//g=5.0;
	//D=1.5;
	Ce=1000;
	Ci=250;
	J=0.1;
	//h=0.1;
	generate();
	Update_connection();
	
		
}


void Network::Add_neuron() 
{
	Neuron neuron( 0,0,0,J);
	
	network.push_back(neuron);
	
}


void Network::generate() 
{
	for ( size_t i(0) ; i<12500 ; ++i)
	{	
		Add_neuron();
		
		if ( i>=Ne )
		{
			weight=-g*J;
		}else{
			weight=J;
		}
				
	}	
	
	
	if (network.size()!=N)	
	{ 
		cerr <<"Problem with network size" << endl;
	}
}


void Network::Update_connection()
{
  random_device rd;
  mt19937 gen(rd());  
  uniform_int_distribution<int> excit (0,Ne-1);
  uniform_int_distribution<int> inhib (Ne,N-1);
  
	for ( size_t source=0 ; source<N ; ++source )
	{
		
		for ( size_t y=0;y<Ce ; ++y )
		{
			size_t target = excit(gen);
			network[source].connect(target); 
		}
	
		for ( size_t y=0 ; y<Ci ; ++y)
		{ 
			size_t target = inhib(gen);
			network[source].connect(target);  
		} 
	}
	 
}


void Network::update ( double t_start , double t_stop )
{
     
  string file_name ("graph.gdf");
  ofstream exit;
  exit.open("graph.gdf");
  double simtime;
  simtime=t_start;
  static random_device rd;
  static mt19937 gen(rd());
  static poisson_distribution<> d(2);
  
  if(exit.fail())
  {
    cerr <<"Error: impossible to open the file" << file_name << endl;
  }
  
	while ( simtime<t_stop)
	{
		for ( size_t n=0 ; n< network.size() ; ++n)
		{
			network[n].Update(simtime, 0 , d(gen) , weight );
		    //cout << " potentiel" << network[1].get_membrane_potentiel() << endl;
			if ( network[n].get_spikeState())
			{  
			   exit  << n << '\t'  << network[n].get_spiketime() << '\n' ;	
		    }			   
				
	    }
	    simtime+=h ;

	}
		
	
	
	
  exit.close();
  cout << " END OF THE SIMULATION " << endl;
  
}


