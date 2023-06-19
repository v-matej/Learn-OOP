
#include "WEAPON.hpp"

void WEAPON::set_weapon_pos(int min, int max)
{
	position.random_point(min, max);
}
void WEAPON::set_mag_capacity(int n)
{
	mag_capacitiy = n;
}
void WEAPON::shoot()
{
	mag_size--;
}

void WEAPON::reload()
{
	mag_size = mag_capacitiy;
}

int WEAPON::get_mag_size()
{
	return mag_size;
}

POINT WEAPON::get_weapon_position()
{
	return position;
}
//get_weapon_position ...

