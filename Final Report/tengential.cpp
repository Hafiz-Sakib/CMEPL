#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return (sin(x) * sin(x) - x * x + 1);
}

double g(double x)
{
    return (2 * sin(x) * cos(x)) - (2 * x);
}

int main()
{
    double guess1, guess2, guess, ans = 0.00;

    cout << "Enter the interval [a, b]: ";
    cin >> guess1 >> guess2;
    if (f(guess1) * f(guess2) > 0)
    {
        cout << "No root exists between " << guess1 << " and " << guess2 << endl;
        return 0;
    }

    guess = guess1;
    while (1)
    {
        double fg = f(guess);
        double gg = g(guess);
        double x1 = guess - (fg / gg);
        if ((abs((x1 - guess) / x1)) <= 1e-8)
        {
            ans = x1;
            break;
        }
        else
        {
            guess = x1;
        }
    }

    cout << fixed << setprecision(8);
    cout << "Root = " << ans << endl;

    return 0;
}
