#include <iostream>
#include "Neuron.cpp"
#include <fstream>
using namespace std;



int main()
{
	
	Neuron neuron(0.0,5,7,0.1,20,20,1,500,1,1);
	double t_start;
	double t_stop;
	cout << " Enter t_star" <<endl;
	cin>> t_start;
	cout << " Enter t_stop"<< endl;
	cin>> t_stop;
	double simtime(t_start);
	neuron.spike_number=0;
	while ( simtime<t_stop)
	{
		double I=neuron.I_time(simtime, neuron.a, neuron.b);
		neuron.Update(simtime,I);
		cout <<neuron.get_membrane_potentiel()<< endl;
		cout << neuron.get_spiketime()<<endl;
		simtime+=neuron.h;	
	}
	
	
	
	
}
