#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;
#include <iostream>
#include <math.h>
struct Complex {
	double im = 0;
	double re = 0;
public:
	Complex(double re1, double im1) {
		im = im1;
		re = re1;
	}
	Complex sum(Complex n1);
	Complex razn(Complex n1);
	Complex del(Complex n1);
	Complex umn(Complex n1);
	float mod();
	void write();
	~Complex() {}
};





#endif
