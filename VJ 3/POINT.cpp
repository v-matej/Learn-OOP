#include "POINT.hpp"
#include <math.h>


void POINT::set_point(double X, double Y, double Z) {
	x = X;
	y = Y;
	z = Z;
}

void POINT::random_point(double min,double max) {
	x = ((float(rand()) / float(RAND_MAX)) * (max - min)) + min;
	y = ((float(rand()) / float(RAND_MAX)) * (max - min)) + min;
	z = ((float(rand()) / float(RAND_MAX)) * (max - min)) + min;
}

double POINT::get_POINT_x() {
	return x;
}

double POINT::get_POINT_y() {
	return y;
}

double POINT::get_POINT_z() {
	return z;
}

double POINT::distance_2D_point(POINT p) {
	return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}

double POINT::distance_3D_point(POINT p) {
	return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2)+ pow(p.z - z, 2));
}