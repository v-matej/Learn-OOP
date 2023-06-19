#ifndef PTICA_H
#define PTICA_H

#include "ZIVOTINJA.H"

class Ptica : public Zivotinja
{
protected:
	int leg_n = 2;
	std::string name;
public:
	Ptica() = default;
	Ptica(std::string s);
	virtual int legs();
	virtual std::string spec();
};
#endif
