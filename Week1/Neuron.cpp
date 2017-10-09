#include "Neuron.h"
#include <iostream>

using namespace std;




double Neuron::I_time( double time, double a, double b)
{
  	if (time<=b and time>=a)
  	{
		return Iext;
	}else{
		return 0;
	}
}
void Neuron::Update (double simtime , double I)
{
		
		
		if ( membrane_potentiel>V_thr)
		{
			spiketime=simtime;
			spike_number++;
			membrane_potentiel=v_reset;
			cout <<"spike"<< endl;
		}else{
			if ((simtime>spiketime) and (simtime<spiketime+r_time))
			{ 
				membrane_potentiel=v_reset;
				cout <<"refractory"<< endl;
			}else{
				membrane_potentiel=(exp(-h/tau)*membrane_potentiel)+(I*R*(1-exp(-h/tau)));
				cout <<"normal"<< endl;
			}
		}
	    cout <<"The number of spike is " << spike_number << endl;
	  
				
}

double Neuron::get_spiketime()
{
	return spiketime;
}

double Neuron::get_membrane_potentiel()
{
	return membrane_potentiel;
}

int Neuron::get_spike_number()
{
	return spike_number;
}



