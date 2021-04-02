#include <iostream>
#include <stdio.h>
#include <math.h>


using namespace std;

double findSquare(double x, double y, double z)
{
	double p = (x + y + z) / 2;
	double square = sqrt(p * (p - x) * (p - y) * (p - z));
	return square;
}

int main()
{
	setlocale(0, "Russian");
	double a, b, c, d, e, f, g;
	cout << "Введите a,b,c,d,e,f,g соответственно:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cin >> g;

	double square = findSquare(a, b, f) + findSquare(f, g, c) + findSquare(d, e, g);
	cout << square << endl;
}
