#include "POINT.hpp"
#include "WEAPON.hpp"
#include "TARGET.hpp"
#include <iomanip>

using namespace std;

int main()
{
	srand(time(NULL));
	cout << setprecision(4);

	/*
	POINT p1, p2;
	double D21, D31;
	p1.set_point(4.5, 3.5, 1.3);
	p2.random_point(1, 5);
	cout << p1.get_POINT_x()<<" " << p1.get_POINT_y() << " " << p1.get_POINT_z() << endl;
	cout << p2.get_POINT_x() << " " << p2.get_POINT_y() << " " << p2.get_POINT_z() << endl;
	D21 = p1.distance_2D_point(p2);
	D31 = p1.distance_3D_point(p2);
	cout << D21 << endl;
	cout << D31 << endl;
	cout << endl;
	*/

	const int target_num=10;
	int min = -20;
	int max = 20;
	int i;
	int targets_hit = 0;
	WEAPON w1;
	w1.set_mag_capacity(10);
	w1.reload();
	w1.set_weapon_pos(min, max);
	POINT W_P;
	W_P = w1.get_weapon_position();
	cout << "Weapon position is: " << endl;
	cout <<"x: "<< W_P.get_POINT_x() << "\ty: " << W_P.get_POINT_y() << "\tz: " << W_P.get_POINT_z() << endl;
	cout << endl;
	TARGET target_arr[target_num];
	
	for (i = 0; i < target_num; i++)
	{
		target_arr[i].set_target_B_L(min, max);
		target_arr[i].set_target_T_R(min, max);
	}

	for (i = 0; i < target_num; i++)
	{
		POINT temp_B_L = target_arr[i].get_target_B_L();
		cout << "Target "<<i<<" position is: "<<endl;
		cout <<"B_L x:"<< temp_B_L.get_POINT_x() << "\tB_L y: " << temp_B_L.get_POINT_y() << "\tB_L z: " << temp_B_L.get_POINT_z() << endl;
		POINT temp_T_R = target_arr[i].get_target_T_R();
		cout <<"T_R x: "<< temp_T_R.get_POINT_x() << "\tT_R y: " << temp_T_R.get_POINT_y() << "\tT_R z: " << temp_T_R.get_POINT_z() << endl;
		cout << endl;
	}

	i = 0;
	while (w1.get_mag_size() > 0 || i<target_num)
	{
		w1.shoot();
		POINT B_L, T_R;
		B_L = target_arr[i].get_target_B_L();
		T_R = target_arr[i].get_target_T_R();
		if (B_L.get_POINT_z()<W_P.get_POINT_z()&& W_P.get_POINT_z()<T_R.get_POINT_z() ||
			B_L.get_POINT_z() > W_P.get_POINT_z() && W_P.get_POINT_z() > T_R.get_POINT_z())
		{
			target_arr[i].target_hit();
			targets_hit++;
		}
		i++;
	}
	cout <<"Targets hit: "<< targets_hit << endl;

	for (i = 0; i < target_num; i++)
	{
		if (target_arr[i].check_hit())
		{
			cout << "Target " << i << " hit." << endl;
		}
	}

	return 0;
}