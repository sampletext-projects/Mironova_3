#include <iostream>
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
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите c: ";
	cin >> c;
	cout << "Введите d: ";
	cin >> d;
	cout << "Введите e: ";
	cin >> e;
	cout << "Введите f: ";
	cin >> f;
	cout << "Введите g: ";
	cin >> g;

	double square1 = findSquare(a, b, f);
	double square2 = findSquare(f, g, c);
	double square3 = findSquare(d, e, g);

	cout << "Площадь треугольника a-b-f: " << square1 << endl;
	cout << "Площадь треугольника f-g-c: " << square2 << endl;
	cout << "Площадь треугольника d-e-g: " << square3 << endl;

	double square = square1 + square2 + square3;
	cout << "Суммарная площадь фигуры: " << square << endl;

	return 0;
}
