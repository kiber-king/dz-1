#include "Complex.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <math.h>

int main()
{
	/*int o;
	Complex c{ 0,0 };
	Complex a{ 1,3 };
	Complex b{ 2, 1 };
	cin >> o;
	if (o == 0) {
		c=b.sum(a);
		c.write();
	}
	if (o == 1) {
		c=b.razn(a);
		c.write();
	}
	if (o == 2) {
		c=b.umn(a);
		c.write();
	}
	if (o == 3) {
		c=b.del(a);
		c.write();
	}*/

	fstream f1;
	int n = 0;
	float re = 0;
	float im = 0;
	string str;
	f1.open("C:\\Учёба\\2 семестр\\ООП\\1 сем\\Main\\complex.txt");
	f1 >> n;
	cout << n<<endl;
	vector <Complex> v1;
	double max = 0; 
	for (int i = 0; i < n; i++) {
		f1 >> re; f1 >> im;
		Complex x{ re, im };
		v1.push_back(x);
	}
	Complex t{0,0};

	for (int i = 0; i < v1.size(); i++) {
		if (v1[i].mod() > max) {
			max = v1[i].mod();
			t = { v1[i].re, v1[i].im};
			
		}
	}
	if (t.im < 0) {
		cout << t.re << "-" << abs(t.im) << "i";
	}
	else {
		cout << t.re << "+" << abs(t.im) << "i";
	}

}
