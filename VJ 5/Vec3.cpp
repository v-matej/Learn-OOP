#include "Vec3.h"
using namespace OOP;

Vec3::Vec3(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

Vec3::Vec3(const Vec3& other)
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}

Vec3::Vec3(Vec3&& other)
{
	x = other.x;
	y = other.y;
	z = other.z;
	other.x = 0;
	other.y = 0;
	other.z = 0;
}

ostream& OOP::operator<<(ostream& os, const Vec3& v)
{
	os << "i=" << v.x << " j=" << v.y << " k=" << v.z << endl;
	return os;
}

istream& OOP::operator>>(istream& is, Vec3& v)
{
	is >> v.x >> v.y >> v.z;
	return is;
}

void Vec3::operator=(const Vec3& other)
{
	x = other.x;
	y = other.y;
	z = other.z;
}

void Vec3::operator=(Vec3&& other)
{
	x = other.x;
	y = other.y;
	z = other.z;
	other.x = 0;
	other.y = 0;
	other.z = 0;
}

Vec3 OOP::operator+(const Vec3& v1, const Vec3& v2)
{
	Vec3 rez;
	rez.x = v1.x + v2.x;
	rez.y = v1.y + v2.y;
	rez.z = v1.z + v2.z;
	return rez;
}

Vec3 OOP::operator-(const Vec3& v1, const Vec3& v2)
{
	Vec3 rez;
	rez.x = v1.x - v2.x;
	rez.y = v1.y - v2.y;
	rez.z = v1.z - v2.z;
	return rez;
}

Vec3 OOP::operator*(const Vec3& v1, const float b)
{
	Vec3 rez;
	rez.x = v1.x * b;
	rez.y = v1.y * b;
	rez.z = v1.z * b;
	return rez;
}

Vec3 OOP::operator/(const Vec3& v1, const float b)
{
	Vec3 rez;
	rez.x = v1.x / b;
	rez.y = v1.y / b;
	rez.z = v1.z / b;
	return rez;
}

void Vec3::operator+=(const Vec3& v1)
{
	this->x = this->x + v1.x;
	this->y = this->y + v1.y;
	this->z = this->z + v1.z;
}

void Vec3::operator-=(const Vec3& v1)
{

	this->x = this->x - v1.x;
	this->y = this->y - v1.y;
	this->z = this->z - v1.z;
}

void Vec3::operator*=(const Vec3& v1)
{

	this->x = this->x * v1.x;
	this->y = this->y * v1.y;
	this->z = this->z * v1.z;
}

void Vec3::operator/=(const Vec3& v1)
{

	this->x = this->x / v1.x;
	this->y = this->y / v1.y;
	this->z = this->z / v1.z;
}

bool OOP::operator==(const Vec3& v1, const Vec3& v2)
{
	if (v1.x == v2.x && v1.y == v2.y && v1.z == v2.z) return true;
	return false;
}

Vec3 OOP::operator*(const Vec3& v1, const Vec3& v2)
{
	Vec3 rez;
	rez.x = v1.x * v2.x;
	rez.y = v1.y * v2.y;
	rez.z = v1.z * v2.z;
	return rez;
}

float Vec3::operator[](const char& ch)
{
	if (ch == 'i') return x;
	else if (ch == 'j') return y;
	else if (ch == 'k')return z;
	else cout << "Pogrešan odabir." << endl;
}

Vec3 Vec3::norm()
{
	Vec3 rez;
	float s;
	s = sqrt(x * x + y * y + z * z);
	rez.x = x / s;
	rez.y = y / s;
	rez.z = z / s;
	return rez;
}