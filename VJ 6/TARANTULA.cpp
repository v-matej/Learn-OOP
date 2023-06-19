#include <iostream>
#include "TARANTULA.h"

Tarantula::Tarantula(std::string s)
{
	name = s;
}

int Tarantula::legs()
{
	return leg_n;
}

std::string Tarantula::spec()
{
	return name;
}