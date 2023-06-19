#include "VRABAC.h"

Vrabac::Vrabac(std::string s)
{
	name = s;
}

int Vrabac::legs()
{
	return leg_n;
}

std::string Vrabac::spec()
{
	return name;
}

