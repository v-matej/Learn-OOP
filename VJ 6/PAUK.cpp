#include <iostream>
#include "PAUK.h"

Pauk::Pauk(std::string s)
{
	name = s;
}

int Pauk::legs()
{
	return leg_n;
}

std::string Pauk::spec()
{
	return name;
}