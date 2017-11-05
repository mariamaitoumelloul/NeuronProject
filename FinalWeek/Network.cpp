#include <iostream>
#include "Network.h"



using namespace std;

Network::Network() 
{

	N=12500;
	Ne=10000;
	Ni=2500;
	g=5.0;
	D=1.5;
	Ce=1000;
	Ci=250;
	J=0.1;
	h=0.1;
	generate();
	Update_connection();
		
}


void Network::Add_neuron()
{
	Neuron Ne( 0,0,0,2);
	
	network.push_back(Ne);
	
}


void Network::generate()
{
	for ( size_t i(0) ; i<12500 ; ++i)
	{	
		Add_neuron();
	}	
	
	if (network.size()!=N)	
	{ 
		cerr <<"Problem with network size" << endl;
	}
}


void Network::connect( size_t t )
{
   target.push_back(t);
}


void Network::Update_connection()
{
  random_device rd;
  mt19937 gen(rd());  
  uniform_int_distribution<int> excit (0,9999);
  uniform_int_distribution<int> inhib (10000,12499);
	for ( size_t source=0 ; source<N ; ++source )
	{
		for ( size_t y=0;y<Ce ; ++y )
		{
			size_t target = excit(gen);
			connect( target); 
		}
	
		for ( size_t y=0 ; y<Ci ; ++y)
		{ 
			size_t target = inhib(gen);
			connect ( target );  
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
  
	while ( simtime<t_stop)
	{
		for ( size_t n=0 ; n< network.size() ; ++n)
		{
			network[n].Update(simtime, 0);
			
			if ( network[n].get_spikeState())
			{  
				size_t id;
				for ( size_t i(0) ; i<target.size() ; ++i)
				{
					id=target[i];
					if ( n<10000 )
					{
						network[id].receive( simtime , J);
					}else {
						network[id].receive( simtime , -g*J);
					}	   
				}
				
				if(exit.fail())
				{
						cerr <<"Error: impossible to open the file" << file_name << endl;
				}else{
						exit  << n << '\t'  << network[n].get_spiketime() << '\n' ;				   
				}
			}
		}
		simtime+=h ;		
	}
	
  exit.close();
  cout << " END OF THE SIMULATION " << endl;
  
}


