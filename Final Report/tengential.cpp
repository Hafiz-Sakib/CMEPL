#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    // return ((sin(x) * sin(x)) - (x*x) + 1);
    return ((x * x) - 4 * x - 10);
}

double g(double x)
{
    //   return ((2*(sin(x)) * cos(x) )- (2 * x));
    return ((2 * x) - 4);
}

int main()
{
    double guess, ans;
    cout << "Guess The initial value = " << endl;
    cin >> guess;
    while (1)
    {
        double fg = f(guess);
        double gg = g(guess);
        double x1 = guess - (fg / gg);
        if ((abs((x1 - guess) / x1)) <= 0.000000001)
        {
            ans = x1;
            break;
        }
        else
        {
            guess = x1;
        }
    }

    cout << "Root = " << ans << endl;

    return 0;
}
