#ifndef Neuron_h
#define Neuron_h

/*!
 * \file Neuron.h
 * \brief Program that implement the recurrent spiking network described in "Brunel , NJ.Comp Neuroscience 2000"
 * \author Mariam_AitOumelloul
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <random>


/*! \namespace std
 * 
 * espace de nommage
 */

using namespace std;

/*!
 * \class Neuron
 * \brief class represanting a neuron
 * 
 *  The class handles the behaviour of one neuron
 *  When the potentiel of the neuronne membrane exceeds a certain value,
 *  The neuron spikes and enters a refractory period.
 * 
 */
 
class Neuron
{
	
	private:
	
	double v_reset; /*!< resting and reset value of the membrane potentiel*/
	double V_thr; /*!< spike threshold*/
	double tau; /*!< membrane time constant*/
	double C; /*!< */
	double R; /*!< membrane resistance*/
	double Iext; /*!< */
	double r_time; /*!< lapse of time where the neuron is refractory*/
    double C1; /*!< constante C=(exp(-h/tau))*/
	double C2; /*!< constance C=((1-exp(-h/tau))*R)*/
    int spike_number;  /*!< number of spikes performed by the neuron*/
	double spiketime;   /*!< time when the spike occurs*/                        
	double membrane_potentiel;   /*!< value of the membrane potentiel*/
    double D; /*!< synaptic delay*/
	bool spike_state; /*!< indicates if the neuron spikes or not*/
	vector<double> buffer; /*!< tab that allows the post-synaptic neuron to receive the weight J after a certain delay*/
	double J; /*!<weight of the neuron*/
	
	/*!
	 * \brief function that simulate poisson distribution.
	 * 
	 * \return an integer randomly following poison distribution.
	 */
	 
	int poisson();
	
	public:
	
	
	double borne_inf;  /*!< lower bound of time from which I is different from zero*/
	double borne_sup; /*!< superior bound of time from which I is different from zero*/
	double h; /*!< time step*/
	
	/*!
	 * \brief Constructor
	 * 
	 * Constructor of the class Neuron
	 * 
	 * \param a: lower bound of time from which I is different from zero
	 * \param b : superior bound of time from which I is different from zero
	 * \param I : external current
	 * \param r : the refractory time 
	 */
	 
	Neuron(double a, double b , double I,double r);  
	
	/*!
	 * \brief gives the current value during the simulation
	 * 
	 * \param time : simulation time
	 * \param a :lower bound of time from which I is different from zero
	 * \param b :superior bound of time from which I is different from zero
	 * 
	 * \return Iext if the simulation time is upper than a and lower than b 
	 *         0 otherwise
	 */
	 
	double I_time( double time, double a, double b);
	
	/*!
	 * \brief Update of the neuron state from time t to t+T
	 * 
	 * This function allows to calculate the membrane potentiel of the neuronne and thus know if it spikes or not.
	 * 
	 * \param simtime : simulation time
	 * \param I : external current
	 */
	 
	void Update (double simtime, double I);
	
	/*!
	 * \brief Allows the access to a private attribute
	 * 
	 * \return the time of a spike
	 */
	 
	double get_spiketime();
	
	/*!
	 * \brief Allows the access to a private attribute
	 * 
	 * \return potentiel membrane
	 */
	 
	double get_membrane_potentiel();
	
	/*!
	 * \brief Allows the access to a private attribute
	 * 
	 * \return the number of spikes
	 */
	 
	int get_spike_number();
	
	/*!
	 * \brief Allows the access to a private attribute
	 * 
	 * \return yes if the neuron spikes and no if it don't
	 */
	 
	bool get_spikeState();
	
	 
	 
	/*!
	 * \brief fonction that sends signal to the post-synaptic neuron.
	 * 
	 * If a neuron spikes , it sends J to the post-synaptic neuron , that respond after a certain delay.
	 * 
	 * \param time : simulation time
	 * \param J : weight of the connexion
	 */
	 
	void receive ( double time , double J);
	
	
   

	
	
	
};



#endif





