
#ifndef ZOHAR_H
#define ZOHAR_H

#include "KUKAC.h"

class Zohar : public Kukac
{
protected:
	int leg_n = 10;
	std::string name;
public:
	Zohar(std::string s);	
	virtual int legs();
	virtual std::string spec();
};

#endif