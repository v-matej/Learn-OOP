#ifndef WEAPONH
#define WEAPON_H

#include "POINT.hpp"
#include <iostream>
using namespace std;

class WEAPON {
	POINT position;
	int mag_size;
	int mag_capacitiy;
public:
	//WEAPON() { position.set_point(0, 0, 0); mag_size = 0; mag_capacitiy = 0; }
	void set_weapon_pos(int min, int max);
	void set_mag_capacity(int n);
	void shoot();
	void reload();
	int get_mag_size();
	POINT get_weapon_position();
};

#endif