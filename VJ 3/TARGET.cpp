#include "TARGET.hpp"

void TARGET::target_hit()
{
	hit = true;
}
int TARGET::check_hit()
{
	if (hit)
		return 1;
	else
		return 0;
}
void TARGET::set_target_B_L(int min, int max)
{
	B_L.random_point(min,max);
}
void TARGET::set_target_T_R(int min, int max)
{
	T_R.random_point(min,max);
}
POINT TARGET::get_target_B_L()
{
	return B_L;
}
POINT TARGET::get_target_T_R()
{
	return T_R;
}
