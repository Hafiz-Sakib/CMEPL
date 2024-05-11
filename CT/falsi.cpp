#include <bits/stdc++.h>
using namespace std;

const double error = 1e-8;
double f(double x)
{
    //    return ((x * x) + log(x) - 2);
    return exp(-x) - 10 * x;
}

int main()
{
    double Xo, X1, X;
    cout << "Enter The Initial Values : " << endl;
    cin >> Xo >> X1;
    if ((f(Xo) * f(X1)) < 0)
    {
        while (abs(f(X)) > error)
        {
            X = (((Xo * f(X1)) - (X1 * f(Xo))) / (f(X1) - f(Xo)));
            cout << "Approxomiation Value = " << X << endl;
            cout << "F(X1) Value = " << f(X1) << endl;
            cout << "F(X) Value , ( Approxomiation Value in Function ) = " << f(X) << endl;
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