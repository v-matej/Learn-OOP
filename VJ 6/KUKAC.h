#ifndef KUKAC_H
#define KUKAC_H

#include "ZIVOTINJA.H"

class Kukac : public Zivotinja
{
protected:
	int leg_n=6;
	std::string name;
public:
	Kukac() = default;
	Kukac(std::string s);
	virtual int legs();
	virtual std::string spec();
};
#endif