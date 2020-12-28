// lab5.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// Lab_05_3.cpp
// Обухова Віктора
// Лабораторна робота No 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 0.7

#include <iostream>
#include <cmath>
using namespace std;
double s(const double x);
int main()
{
	double tp, g, tk;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double dg = (tk - tp) / n;
	double t = tp;


	while (t <= tk)
	{
		g = s(2 * t + 1) + 2 * s(t * t) + sqrt(s(1));
		cout << t << " " << s << endl;
		t += dg;
	}
	return 0;
}
long double fact(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}
double s(const double x)
{
	if (abs(x) >= 1  && x == 0)
		return ((pow(cos(x), 2) + 1) / exp(x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			double q = 2 * k + 1;
			k++;
			double R = (pow(2, q) * pow(x, q)) / fact(q);
			a *= R;
			S += a;
		} while (k < 4);
		S *= 1 / sin(2 * x);
		return S;
	}
}

