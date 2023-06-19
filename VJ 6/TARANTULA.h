#ifndef TARANTULA_H
#define TARANTULA_H

#include "PAUK.h"

class Tarantula:public Pauk
{

	protected:
		int leg_n =8;
		std::string name;
	public:
		Tarantula(std::string s);
		virtual int legs();
		virtual std::string spec();
	};

#endif

