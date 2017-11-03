#include "Neuron.h"
#include <iostream>

using namespace std;


Neuron::Neuron(double a, double b , double I,double r) : buffer(16,0.0)
{
	v_reset=0.0;
	borne_inf=a;
	borne_sup=b;
	V_thr=20.0;
	tau=20.0;
	C=1;
	R=20.0;
	Iext=0;
	r_time=r;
	h=0.1;
	D=1.5;
	C1=(exp(-h/tau));
	C2=((1-exp(-h/tau))*R);
	spike_number=0;
	J=0.1;
	membrane_potentiel=0;
	
	
	
}

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
		int n ;
		n=int (floor(simtime/h));
		spike_state=false;
		
		if ( membrane_potentiel>=V_thr)
		{
			
			spiketime=simtime;
			spike_number++;
			spike_state=true;
			//membrane_potentiel=v_reset;
			cout <<"spike"<< endl;
		}
			
		
		
			if ((spike_number!=0 ) and(simtime>=spiketime) and (simtime<=spiketime+r_time))
			{ 
				membrane_potentiel=v_reset;
				cout <<"refractory"<< endl;
				spike_state=false;
				
				
			}else{
				random_device rd;
				mt19937 gen(rd());
				poisson_distribution<> d(2);
				membrane_potentiel=((C1*membrane_potentiel)+(Iext*C2)+ buffer[n%16])+d(gen)*J;
				cout <<"normal"<< endl;
				spike_state=false;
				
			}
		
	    cout <<"The number of spike is " << spike_number << endl;
	    buffer[n%16]=0.0;
	    
	    
	    if ( spike_state)
	    { cout <<"true"<<endl; }
	   

	  
				
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



bool Neuron::get_spikeState()
{
	return spike_state;
}

void Neuron::receive (  double time, double J) 
{
	if (buffer.empty())	
	{ cout <<"stop" << endl;}
	int n;
	n= int (floor((time+D)/h));
    buffer[n%16]=+J;  
   
}
