#include <bits/stdc++.h>
using namespace std;

#define setp(n) fixed << setprecision(n)
const double error = 1e-4;

double f(double x)
{
    return ((sin(x) * sin(x)) - (x * x) + 1);
}

int main()
{
    double x = 2.0, y = 3.0, mid = 0.00;
    while (1)
    {
        cout << "Enter the interval [a, b]: ";
        cin >> x >> y;
        if (f(x) * f(y) < 0)
        {
            break;
        }
    }
    while (abs(x - y) > error)
    {
        mid = (x + y) / 2.00;
        if (f(mid) == 0)
        {
            break;
        }
        else if (f(mid) * f(x) < 0)
        {
            y = mid;
        }
        else
        {
            x = mid;
        }
    }
    cout << "The Root of The Equation is : " << setp(3) << mid << endl;
    return 0;
}