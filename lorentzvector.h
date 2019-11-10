#pragma once
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;
class LorentzVector {
private: double x, y, z, t, norm;
public: LorentzVector();
		LorentzVector(double t, double x, double y, double z);
		void output();

		double get_x() const;
		double get_y() const;
		double get_z() const;
		double get_t() const;
		double get_norm() const;


		LorentzVector sum(const LorentzVector & rhs) const;
		LorentzVector sub(const LorentzVector & rhs) const;
		LorentzVector mul(double a) const;
		double scalar(const LorentzVector & rhs) const;
		LorentzVector zboost(double beta) const;
};
