#include "pch.h"
#include <iostream>
#include <cmath>
#include "lorentzvector.h"


int main()
{
	LorentzVector l(0, 0, 0, 1);
	LorentzVector l2(1, 0, 0, 1);
	LorentzVector Sum = l.sum(l2);
	cout << "sum = " << endl;
	Sum.output();
	LorentzVector Sub = l.sub(l2);
	cout << "sub =" << endl;
	Sub.output();
	cout << "input your scalar " << endl;
	double a;
	cin >> a;
	LorentzVector Mul = l.mul(a);
	cout << "mul =" << endl;
	Mul.output();
	double sclr = l.scalar(l2);
	cout << "scalar product = " << sclr << endl;
	double norm = l.scalar(l);
	cout << "norm = " << norm << endl;
	cout << "input your beta " << endl;
	double beta;
	cin >> beta;
	LorentzVector Zboost = l.zboost(beta);
	cout << "zboost = " << endl;
	Zboost.output();
}