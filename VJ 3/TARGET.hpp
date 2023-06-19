#ifndef TARGET_H
#define TARGET_H

#include "POINT.hpp"
#include <iostream>
using namespace std;

class TARGET {
	POINT B_L, T_R;
	bool hit=false;
public:
	void target_hit();
	int check_hit();
	void set_target_B_L(int min,int max);
	void set_target_T_R(int min, int max);
	POINT get_target_B_L();
	POINT get_target_T_R();
};
#endif
