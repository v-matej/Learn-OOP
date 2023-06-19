#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class POINT {
	double x, y, z;
public:
	POINT(){ x = 0; y = 0; z = 0;}
	void set_point(double X, double Y, double Z);
	void random_point(double min,double max);
	double get_POINT_x();
	double get_POINT_y();
	double get_POINT_z();
	double distance_2D_point(POINT p);
	double distance_3D_point(POINT p);
};
#endif
