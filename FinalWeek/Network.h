#ifndef Network_h
#define Network_h

/*!
 * \file Network.h
 * \brief Program that implement conexions beetween N neurons.
 * \author Mariam_AitOumelloul
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <random>
#include "Neuron.h"
#include <fstream>


/*! \namespace std
 * 
 * espace de nommage
 */
using namespace std;


/*!
 * \class Network
 * \brief class represanting neurons conexions
 * 
 * 
 */
class Network 

{
	private:
	
	unsigned int N;                    /*!< Number of neurons in the network*/
	unsigned int Ne;                   /*!<Number of excitatory neurons*/
	unsigned int Ni;                   /*!<Number of inhibitory neurons*/
	unsigned int Ci;                   /*!<Number of inhibitory conexions*/
	unsigned int Ce;                   /*!<Number of excitatory conexions*/
	static constexpr double g = 5.0;   /*!<ratio of Ji and Je*/
	static constexpr double D = 1.5;   /*!<Delay*/
	vector<Neuron> network;            /*!<table containning all the N neurons of the network*/
	double J;                          /*!<weight of the connection beetween an excitatory neuron and another one*/
	static constexpr double h = 0.1;   /*!< time step*/
	double weight;                     /*!<weight of a specific conection between two neurons. Depends on the type of neurons.*/


	/*!
	 * \brief function that creates a neuron and add it to the network.
	 */
	void Add_neuron(); 
	
	
	/*!
	 * \brief fonction that add N neurons in the network thanks to the function add_neuron().
	 * Overmore, this function gives each neuron his connexion weight. 
	 * 
	 */
    void generate();
    
    
    /*!
	 * \brief function that add a target neuron in the table of the source neuron.
	 * 
	 * We generate uniformly distributed random numbers to generate connections between neurons.
	 * For each neuron of the network , we genereate Ci+Ce connections.
	 * We send the ID or the target neuron ( neuron that is connected with the source neuron) to a vector thanks to another function from the class Neuron : connect()
	 * 
	 */
    void Update_connection();
    
	
	

	public :
	
	/*!
	 * \brief Constructor
	 * 
	 * Constructor of the class Network
	 * Gives the right values to the atributs and generates a network.
	 *
	 */
	Network(); 
	
    
    /*!
	 * \brief Update the network state from time t to t+T
	 * 
	 * This function allows create the final graph ( figure 8).
	 * step1: it creates the file where we will stock the spike time the neurons.
	 * step2: create to loop for the simulation time.
	 * step3 : iterate on all the neurons in the network.
	 * step4 : for each neuron we have to call the update function ( from the class neuron ) to know the state.
	 * step5 : if the neuron spikes , we need the target all the connections to send them a signal
	 * step6 : all the targets receive a weight.
	 * 
	 * \param t_star : the initial time of the simulation
	 * \param t_stop : the final time of the simulation
	 */
    void update ( double t_start , double t_stop );
    
};


#endif
