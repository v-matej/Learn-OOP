
#include <iostream>
#include "ZOHAR.h"

Zohar::Zohar(std::string s)
{
	name = s;
}

int Zohar::legs()
{
	return leg_n;
}

std::string Zohar::spec()
{
	return name;
}
