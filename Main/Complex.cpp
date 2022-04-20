#include "Complex.h"

Complex Complex::sum(Complex n1)
{
	return Complex{ n1.re + this->re, (n1.im + this->im) };

}

Complex Complex::umn(Complex n1)
{
	return Complex{ n1.re * this->re, n1.im * this->im };
}
Complex Complex::razn(Complex n1)
{
	return Complex{ n1.re - this->re, (n1.im - this->im) };
}

Complex Complex::del(Complex n1)
{
	return Complex{ ((n1.re * this->re) + (n1.im * this->im)) / (pow(this->re, 2) + pow(this->im, 2)),(n1.im * this->re - n1.re * this->im) / (pow(this->re, 2) + pow(this->im, 2)) };
}
void Complex::write() {
	if (this->im < 0) {
		cout << this->re << "-" << abs(this->im) <<"i"<< endl;
	}
	else {
		cout << this->re << "+" << abs(this->im) << "i"<<endl;
	}
}
float Complex::mod() {
	return sqrt(pow(this->re, 2) + pow(this->im, 2));

}