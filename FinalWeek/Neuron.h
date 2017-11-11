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
	
	static constexpr double v_reset = 0.0;   /*!< resting and reset value of the membrane potentiel*/
	static constexpr double V_thr = 20;      /*!< spike threshold*/
	static constexpr double tau = 20;        /*!< membrane time constant*/
	static constexpr double C = 1;           /*!< constant that is equal to: C=R/tau*/
	static constexpr double R = tau/C;       /*!< membrane resistance*/
	double Iext;                             /*!<Value of the external current */
	static constexpr double r_time = 2;      /*!< lapse of time where the neuron is refractory*/
    double C1;                               /*!< constante C=(exp(-h/tau))*/
	double C2;                               /*!< constance C=((1-exp(-h/tau))*R)*/
    int spike_number;                        /*!< number of spikes performed by the neuron*/
	double spiketime;                        /*!< time when the spike occurs*/                        
	double membrane_potentiel;               /*!< value of the membrane potentiel*/
    static constexpr double D = 1.5;         /*!< synaptic delay*/
	bool spike_state;                        /*!< indicates if the neuron spikes or not*/
	vector<double> buffer;                   /*!< tab that allows the post-synaptic neuron to receive the weight J after a certain delay*/
	double J;                                /*!<weight of the neuron connexion*/
	vector<int>target;                       /*!<table that contains all the target neurons for a source neuron. (= all the neurons that are connected to one fixed neuron)*/
	
	/*!
	 * \brief function that simulate poisson distribution.
	 * 
	 * \return an integer randomly following poison distribution.
	 */
	
	
	
	public:
	
	double borne_inf;          /*!< lower bound of time from which I is different from zero*/
	double borne_sup;          /*!< superior bound of time from which I is different from zero*/
	double h;                  /*!< time step*/
	
	/*!
	 * \brief Constructor
	 * 
	 * Constructor of the class Neuron
	 * 
	 * \param a: lower bound of time from which I is different from zero
	 * \param b : superior bound of time from which I is different from zero
	 * \param I : external current
	 * \param j : weight of the neuron conection
	 */
	Neuron(double a, double b , double I, double j);  
	
	
	/*!
	 * \brief gives the current value during the simulation
	 * 
	 * This function was only used in the begining of the project , when we created one neuron.
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
	 * \param poisson : double that shows random spikes from the rest of the brain
	 * \param w : the weight of the connection
	 */
	void Update (double simtime, double I , double poisson , double w);
	
	
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
	 * \return true if the neuron spikes and false if it don't
	 */
	bool get_spikeState();
	 
	 
	/*!
	 * \brief function that sends signal to the post-synaptic neuron.
	 * 
	 * If a neuron spikes , it sends J to the post-synaptic neuron , that respond after a certain delay.
	 * 
	 * \param time : simulation time
	 * \param J : weight of the connexion
	 */
	void receive ( double time , double J);
	
	
	/*!
	 * \brief function that calculate the time step.
	 * 
	 * In my program ,I use time in ms for the implementation of the clock. But as we work with steps in the functions "update" and "receive", this function allows to convert time(ms) in steps.
	 * 
	 * \param time : simulation time
	 * 
	 * \return : the time step.
	 */
	int get_steptime ( double time);
	
	
	/*!
	 * \brief function that add a target neuron in the table of the source neuron.
	 * 
	 * At the end , this function generate a table of 1250 boxes that contain the id of the neurons connected to the source neuron.
	 * 
	 * \param target: the neuron that is connected with the source neuron.
	 * 
	 */
	void connect ( size_t target );
	
	
};



#endif





