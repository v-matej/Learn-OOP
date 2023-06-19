#ifndef BROJAC_H
#define BROJAC_H

#include<iostream>
#include <vector>
#include <string>
#include "ZIVOTINJA.H"

class Brojac {
	std::vector<Zivotinja*> v_z;
	int leg_sum=0;
public:
	void add(Zivotinja* z);
	void leg_count();
};

#endif
