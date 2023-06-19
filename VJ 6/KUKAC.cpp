#include <iostream>
#include "KUKAC.h"

Kukac::Kukac(std::string s)
{
	name = s;
}

int Kukac::legs()
{
	return leg_n;
}

std::string Kukac::spec()
{
	return name;
}

