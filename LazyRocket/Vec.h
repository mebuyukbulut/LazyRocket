#pragma once
#include <math.h>

class Vec{
public:
	double x, y, z;

	Vec() :x{}, y{}, z{} {}
	Vec(const double& x, const double& y, const double& z) :x{x}, y{y}, z{z} {}


	double len() {
		return sqrt(x*x + y*y + z*z);
	}

	Vec normalize() {
		double l = len();
		return Vec(x/l, y/l, z/l);
	}

	Vec operator+(const Vec& rhs) const {
		return Vec(x + rhs.x, y + rhs.y, z + rhs.z);
	}
	Vec operator*(const Vec& rhs) const {
		return Vec(x * rhs.x, y * rhs.y, z * rhs.z);
	}
	Vec dot(const Vec& rhs) const {
		return Vec(x * rhs.x, y * rhs.y, z * rhs.z);
	}
	Vec cross(const Vec& rhs) const {

	}
	



};

