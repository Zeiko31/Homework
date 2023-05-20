#include <iostream>
#include <math.h>

using namespace std;

class triangle {
	double c, p, s;
public:
	double a, b;
	void input(double, double);
	void peri();
	void face();
	void hypotenuse();
};

void triangle::input(double sidea , double sideb) {
	cout << "Insert value for side a: ";
	cin >> sidea;
	cout << "Insert value for side b: ";
	cin >> sideb;
	a = sidea;
	b = sideb;
}

void triangle::peri() {
	p = a + b + c;
	cout << "P =: " << p << endl;
}

void triangle::face() {
	s = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << "S = " << s << endl;
}

void triangle::hypotenuse() {
	c = sqrt(a * a + b * b);
	cout << "c = " << c << endl;
}

int main() {
	double a= 0, b = 0;
	triangle abc;
	abc.input(a, b);
	abc.hypotenuse();
	abc.peri();
	abc.face();
	return 0;
};