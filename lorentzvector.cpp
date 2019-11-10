#include "pch.h"
#include <iostream>
#include "lorentzvector.h"

double LorentzVector::get_x() const { return x; }
double LorentzVector::get_y() const { return y; }
double LorentzVector::get_z() const { return z; }
double LorentzVector::get_t() const { return t; }
double LorentzVector::get_norm() const { return norm; }

LorentzVector::LorentzVector() {
	x = y = z = t = norm = 0;
}
LorentzVector::LorentzVector(double t, double x, double y, double z) :
	x(x), y(y), z(z), t(t) {}

void LorentzVector::output() {
	cout << " " << t << " " << x << " " << y << " " << z << endl;
}

LorentzVector LorentzVector::sum(const LorentzVector & rhs) const {
	LorentzVector result(t + rhs.t, x + rhs.x, y + rhs.y, z + rhs.z);
	return result;
}
LorentzVector LorentzVector::sub(const LorentzVector & rhs) const {
	LorentzVector result(t + rhs.t, x - rhs.x, y - rhs.y, z - rhs.z);
	return result;
}
LorentzVector LorentzVector::mul(double a) const {
	LorentzVector result(a * t, a * x, a * y, a * z);
	return result;
}
double LorentzVector::scalar(const LorentzVector & rhs) const {
	return t * rhs.t - x * rhs.x - y * rhs.y - z * rhs.z;
}
LorentzVector LorentzVector::zboost(double beta) const {
	double c = 1;
	if (sqrt(beta*beta) < 1) {
		LorentzVector l((t - beta * z / c) / sqrt(1 - beta * beta), x, y, (z - beta * t) / sqrt(1 - beta * beta));
		return l;
	}
	else {
		cout << "input another beta" << endl;
		LorentzVector lv(0., 0., 0., 0.);
		return lv;
	}
}