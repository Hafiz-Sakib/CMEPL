// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;
long long Id = 0222210005101118;

*/
#include <bits/stdc++.h>
using namespace std;

#define setp(n) fixed << setprecision(n)
const double error = 1e-3;

double f(double x)
{
    return ((x * x * x) - (2 * x * x) - 4);
}

int main()
{
    double x = 2.0, y = 3.0, mid = 0.00;
    
    if (f(x) * f(y) > 0)
    {
        cout << "The root doesn't lies between the given interval" << endl;
    }
    else
    {
        while (abs(x - y) > error)
        {
            mid = (x + y) / 2 * 1.00;
            double Xn = f(mid);
            if (Xn == 0)
            {
                break;
            }
            else if (Xn > 0)
            {
                y = mid;
            }
            else
            {
                x = mid;
            }
        }
    }
    cout << "The Root of The Equation is : " << setp(3) << mid << endl;
    return 0;
}