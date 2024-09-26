#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0, term = 0;
	int n = 0;
	const double PI = 3.1415926;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	
	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "arccos" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 1; // вираз залежить від умови завдання варіанту
		a = x; // вираз залежить від умови завдання варіанту
		S = a;
		do {
			n++;
			R = ((2.0 * n - 1) * (2.0 * n - 1)) / (2.0 * n * (2.0 * n + 1)) * x * x;// вираз залежить від умови завдання варіанту
			a *= R;
			S += a;

		} while (abs(a) >= eps);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << acos(x) << " |"  // Точне значення arccos
			<< setw(10) << setprecision(5) << ( PI / 2 - S) << " |"  // Наближене значення через ряд
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-----------------------------------------" << endl;
	return 0;
}