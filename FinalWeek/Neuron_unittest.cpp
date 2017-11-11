#include <iostream>
#include "Neuron.h"
#include "gtest/googletest/include/gtest/gtest.h"

using namespace std;

TEST (NeuronTest,MembranePotentiel)
{
	Neuron neuron(0,1000,1.0,0);
	double I=neuron.I_time(0, neuron.borne_inf, neuron.borne_sup);
	

	neuron.Update(0,I,0,0);
	EXPECT_EQ(20.0*((1.0-std::exp(-0.1/20.0))), neuron.get_membrane_potentiel())	;
	
}

/*
TEST (NeuronTest,Spiketime )
{
	Neuron neuron(0,1000,1.01,1);
	double t_start(0);
	double t_stop(400);
	double simtime(t_start);
	while ( simtime<t_stop)
	{
	  double I=neuron.I_time(0, neuron.borne_inf, neuron.borne_sup);
	  neuron.Update(simtime,I);
	  simtime+=neuron.h;
	  EXPECT_EQ(375.5, neuron.get_spiketime())	;
}	
}*/

int main ( int argc , char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
	
	
		
	
