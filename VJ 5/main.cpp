#include <iostream>
#include "Vec3.h"

using namespace OOP;

int main()
{
	Vec3 v_1(5, 3, -4), v_2(1,2,1),v;
	bool B = v_1 == v_2;
	Vec3 vi_1, vi_2,vi,vi_norm;
	cin >> vi_1;
	cin >> vi_2;
	v = v_1 + v_2;
	vi_1 += vi_2;
	vi = vi_1 * vi_2;
	vi_norm=vi.norm();
	cout << vi_norm['k'];
}