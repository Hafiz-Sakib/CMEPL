// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;
long long Id = 0222210005101118;

*/

#include <bits/stdc++.h>
using namespace std;

#define setp(n) fixed << setprecision(n)
const double error = 1e-4;

double f(double x)
{
    // return ((x * x * x) - (2 * x * x) - 4);
    // return ((sin(x) * sin(x)) - (x * x) + 1);
    // return ((x * x) + log(x) - 2);
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
        cout << "Mid Value = " << mid << endl;
        cout << "f(mid) Value = " << f(mid) << endl;
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