#include <iostream>
#include "PTICA.h"

Ptica::Ptica(std::string s)
{
	name = s;
}

int Ptica::legs()
{
	return leg_n;
}

std::string Ptica::spec()
{
	return name;
}