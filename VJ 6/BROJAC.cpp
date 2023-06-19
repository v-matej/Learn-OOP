#include <iostream>
#include "BROJAC.h"

void Brojac::add(Zivotinja* z)
{
	v_z.push_back(z);
	leg_sum += z->legs();
	std::cout << "dodan: " << z->spec()<<std::endl;
}

void Brojac::leg_count()
{
	std::cout <<"ukupno nogu: " << leg_sum;
}
