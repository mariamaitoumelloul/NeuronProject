#ifndef Neuron_
#define Neuron_

#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

class Neuron
{
	public:
	int spike_number;
	double spiketime;
	double membrane_potentiel;
	double v_reset;
	Neuron( double v,  double a, double b,  double h1 ,double v1,double T, double C1,double I,int n1,double r)
	: v_reset(v),  a(a), b(b), h(h1) ,V_thr(v1), tau(T), C(C1), R(tau/C),Iext(I),n(n1) , r_time(r) {}
	void Update (double simtime, double I); //Donne le temps du pic ainsi que les valeurs du potentiel.
	double get_spiketime();
	double get_membrane_potentiel();
	int get_spike_number();
	double a; //borne du temps (min).
	double b; // borne du temps (max).
	double I_time( double time, int a, int b); //done l'intensite du courant a un temps t .
	double h; //le pas.
	
	private:
	double V_thr; //potentiel atteind lors du pic .
	double tau;
	double C;
	double R;
	double Iext; //valeur max. 
	int n; //compteur de pas.
	double r_time; //intervalle ou le neuronne est refractaire
   
    

	
};



#endif





