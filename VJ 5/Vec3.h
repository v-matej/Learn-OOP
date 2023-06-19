#ifndef Vec3_H
#define Vec3_H

#include<iostream>
#include <vector>
using namespace std;

namespace OOP
{
	class Vec3 
	{
		float x, y, z;
	public:
		Vec3() { x = 0, y = 0, z = 0; };
		Vec3(float x, float y, float z);
		Vec3(const Vec3& other);
		Vec3(Vec3&& other);
		~Vec3() = default;
		friend ostream& operator<<(ostream& os, const Vec3& v);
		friend istream& operator>>(istream& is, Vec3& v);
		void operator=(const Vec3& other);
		void operator=(Vec3&& other);
		friend Vec3 operator+(const Vec3& v1, const Vec3& v2);
		friend Vec3 operator-(const Vec3& v1, const Vec3& v2);
		friend Vec3 operator*(const Vec3& v1, const float b);
		friend Vec3 operator/(const Vec3& v1, const float b);
		void operator+=(const Vec3& v1);
		void operator-=(const Vec3& v1);
		void operator*=(const Vec3& v1);
		void operator/=(const Vec3& v1);
		friend bool operator==(const Vec3& v1, const Vec3& v2);
		friend Vec3 operator*(const Vec3& v1, const Vec3& v2);
		float operator[](const char& ch);
		Vec3 norm();
	};
}
#endif