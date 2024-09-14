#include <bits/stdc++.h>
using namespace std;

const double error = 1e-5;
double f(double x)
{
    return ((sin(x) * sin(x)) - (x * x) + 1);
}

int main()
{
    double Xo, X1, X;
    cout << "Enter the interval [a, b]: ";
    cin >> Xo >> X1;
    if ((f(Xo) * f(X1)) < 0)
    {
        while (abs(f(X)) > error)
        {
            X = (((Xo * f(X1)) - (X1 * f(Xo))) / (f(X1) - f(Xo)));
            if ((f(X1) * f(X)) < 0)
            {
                Xo = X;
            }
            else
            {
                X1 = X;
            }
        }
        cout << "Root = " << X << endl;
    }
    else
    {
        cout << "Enter The Initial Values Again : " << endl;
        cin >> Xo >> X1;
    }
    return 0;
}