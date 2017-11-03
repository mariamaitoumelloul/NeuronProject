#include <iostream>
#include "Neuron.h"
#include <fstream>
using namespace std;


/*
int main()
{
	
	Neuron neuron(0,1000,1.01,1.0);
	Neuron post_neuron(0,1000,0,1);
	double J (0.1);
	double t_start;
	double t_stop;
	cout << " Enter t_star" <<endl;
	cin>> t_start;
	cout << " Enter t_stop"<< endl;
	cin>> t_stop;
	double simtime(t_start);
	ofstream out;
	out.open("membranepot.txt");
	while ( simtime<t_stop)
	{
		
		double I=neuron.I_time(simtime, neuron.borne_inf, neuron.borne_sup);
		neuron.Update(simtime,I);
		cout <<neuron.get_membrane_potentiel()<< endl;
		cout << neuron.get_spiketime()<<endl;
		out << neuron.get_membrane_potentiel()<< endl;
		if ( neuron.get_spikeState())
		{
			cout << " receive"<< endl;
			
			post_neuron.receive(simtime , J);
			
			
		}
		//cout << " temps de sim:" << simtime << endl;
	    cout  <<"neuron2: " <<post_neuron.get_membrane_potentiel() << endl;
		
	
		simtime+=neuron.h;	
	}
	
	
	
	
	out.close();
	
	
}*/
