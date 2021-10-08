// Lab_04_2.cpp
// <Хмиз Магдалини>
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 21

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, A, B, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(7) << "y" << "    |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        A = 2 + 1. / abs(1 + x);
        if (x < 1)
            B = sqrt(abs(cos(x)) + 13);
        else
            if (x > 5)
                B = 8 + 0.7 * x;
            else
                B = 3 + 1. / tan(4 + x) / abs(2);
        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}

