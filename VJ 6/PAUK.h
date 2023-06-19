#ifndef PAUK_H
#define PAUK_H

#include "ZIVOTINJA.H"

class Pauk : public Zivotinja
{
protected:
	int leg_n=8;
	std::string name;
public:
	Pauk() = default;
	Pauk(std::string s);
	virtual int legs();
	virtual std::string spec();
};
#endif