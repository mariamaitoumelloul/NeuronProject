#include <iostream>
#include "Network.h"



using namespace std;

Network::Network() 
{

	N=12500;
	Ne=10000;
	Ni=2500;
	Ce=1000;
	Ci=250;
	J=0.1;
	generate();
	Update_connection();
	
		
}


void Network::Add_neuron() 
{
	//Creation of a neuron.
	Neuron neuron( 0,0,0,J);
	//add the neuron the the network
	network.push_back(neuron);
	
}


void Network::generate() 
{
	//Add 12500 neurons to the network
	for ( size_t i(0) ; i<12500 ; ++i)
	{	
		Add_neuron();
	//Associate the right weight to the excitatory and inhibitory neuron
		if ( i>=Ne )
		{
			weight=-g*J;
		}else{
			weight=J;
		}
				
	}	
	
	//Check if the netwirk contain 12500 neurons.
	if (network.size()!=N)	
	{ 
		cerr <<"Problem with network size" << endl;
	}
}


void Network::Update_connection()
{
  
  //Creation of the uniform distribution
  random_device rd;
  mt19937 gen(rd());  
  uniform_int_distribution<int> excit (0,Ne-1);
  uniform_int_distribution<int> inhib (Ne,N-1);
  
  //For each neuron (=source ) , add the his target vector Ce+Ci conection.
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
  
  //Creation of the file that will we will use to make the plots   
  string file_name ("graph.gdf");
  ofstream exit;
  exit.open("graph.gdf");
  double simtime;
  simtime=t_start;
  //Creation of poisson distribution
  static random_device rd;
  static mt19937 gen(rd());
  static poisson_distribution<> d(2);
  
  //Check if the file is opened
  if(exit.fail())
  {
    cerr <<"Error: impossible to open the file" << file_name << endl;
  }
  
  //Begining of the simulation
	while ( simtime<t_stop)
	{
		for ( size_t n=0 ; n< network.size() ; ++n)
		{
			//Update all neurons in the network
			network[n].Update(simtime, 0 , d(gen) , weight );
		    
		    //If a neuron spike, add the time and the Id of the neuron in the file
			if ( network[n].get_spikeState())
			{  
			   exit  << network[n].get_spiketime() << '\t'  << n << '\n' ;	
		    }			   
				
	    }
	    simtime+=h ;

	}
		
	
	
	
  exit.close();
  cout << " END OF THE SIMULATION " << endl;
  
}


