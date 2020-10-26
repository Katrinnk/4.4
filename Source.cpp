// Lab_04_4.cpp
// Колмикова Катерина Сергіївна
// Лабораторна робота № 4.4
// Цикли, задані формулами.
// Варіант 12
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp="; cin >> xp;
	cout << "xk="; cin >> xk;
	cout << "dx="; cin >> dx;
	cout << "x="; cin >> x;
	cout << "R="; cin >> R;
	cout << fixed;
	cout << " ______________________" << endl;
	cout << "|" << setw(10) << "x" << "|" << setw(10) << "y" << "|" << endl;
	cout << "_______________________" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -6.0)
			y = R;
		else
			if (x > -6.0 && x <= -R)
				y = x + R;
			else
				if (x > -R && x <= 0)
					y = R - sqrt(R * R + (x + R) * (x + R));
				else
					if (x > 0 && x <= R)
						y = sqrt(R * R - x * x);
					else
						y = x - 1 - R;
		cout << "|" << setw(10) << setprecision(3) << x << "|" << setw(10) << setprecision(3) << y << "|" << endl;
		x += dx;
	}
	cout << "_______________________" << endl;
	return 0;
}