#include "Neuron.h"
#include <iostream>

using namespace std;


Neuron::Neuron(double a, double b , double I, double j) : buffer(16,0.0)
{
	//v_reset=0.0;
	borne_inf=a;
	borne_sup=b;
	//V_thr=20.0;
	//tau=20.0;
	//C=1;
	//R=20.0;
	Iext=0;
	//r_time=r;
	h=0.1;
	//D=1.5;
	C1=(exp(-h/tau));
	C2=((1-exp(-h/tau))*R);
	spike_number=0;
	//J=0.1;
	membrane_potentiel=0.0;
	J = j;
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


void Neuron::Update (double simtime , double I , double poisson , double w) 
{
  
  spike_state=false;
		
	if ( membrane_potentiel>=V_thr)
	{
		spike_state=true;
		spiketime=simtime;
		spike_number++;
		//cout << " spike " << endl;
		
		for ( size_t i(0) ; i<target.size() ; ++i)
		{
			receive( simtime , w);   
		}
	
	}
					
	if ((spike_number!=0 ) and(simtime>=spiketime) and (simtime<=spiketime+r_time))
	{ 
		membrane_potentiel=v_reset;
						
	}else{		
		membrane_potentiel=((C1*membrane_potentiel)+(Iext*C2)+ buffer[get_steptime(simtime)%16])+poisson*J;
				
	}
		
   buffer[get_steptime(simtime)%16]=0.0;
  
	    				
}


/*int Neuron::poisson()
{
	static random_device rd;
    static mt19937 gen(rd());
    static poisson_distribution<> d(2);
    
    return d(gen);
}*/


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

	/*if (buffer.empty())	
	{ 
		cerr <<"The buffer is empty" << endl;
	}*/
    buffer[get_steptime(time+D)%16]=+J;  
       
}


int Neuron::get_steptime( double time)
{
	int n;
	n= int (floor((time)/h));
	return n;
}

void Neuron::connect( size_t t )
{
   target.push_back(t);
}


