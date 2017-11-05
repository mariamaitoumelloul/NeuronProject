#include <iostream>
#include "Network.h"
using namespace std;


int main()
{
	Network n;
	double t_start;
	double t_stop;
	cout << " Enter t_star" <<endl;
	cin>> t_start;
	cout << " Enter t_stop"<< endl;
	cin>> t_stop;
	n.update(  t_start , t_stop );
	
}
