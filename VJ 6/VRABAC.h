#ifndef VRABAC_H
#define VRABAC_H
#include "PTICA.h"
class Vrabac :public Ptica
{
protected:
	int leg_n = 2;
	std::string name;
public:
	Vrabac(std::string s);
	virtual int legs();
	virtual std::string spec();
};
#endif