#include <iostream>
#include <cmath>

using namespace std;

// Function definition
double func(double x)
{
    return cos(x) - (x * exp(x));
}

// Derivative of the function
double derivative(double x)
{
    return -exp(-x) - 10;
}

int main()
{
    // Newton-Raphson method implementation
    auto newtonRaphson = [](double x, double tol = 1e-6, int maxIter = 1000)
    {
        for (int iter = 0; iter < maxIter; ++iter)
        {
            double fx = func(x);
            double fPrimeX = derivative(x);

            if (fabs(fPrimeX) < 1e-6)
            {
                cout << "Derivative too close to zero." << endl;
                return NAN;
            }

            double xNext = x - fx / fPrimeX;

            if (fabs(xNext - x) < tol)
            {
                cout << "Converged after " << iter << " iterations." << endl;
                return xNext;
            }

            x = xNext;
        }

        cout << "Did not converge after " << maxIter << " iterations." << endl;
        return NAN;
    };

    double initialGuess = 1.0;
    double root = newtonRaphson(initialGuess);

    if (!isnan(root))
    {
        cout << "Root found: " << root << endl;
        cout << "Value of f(x) at the root: " << func(root) << endl;
    }
    else
    {
        cout << "Failed to find a root." << endl;
    }

    return 0;
}
