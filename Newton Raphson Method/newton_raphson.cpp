#include <iostream>
#include <cmath>

using namespace std;

// Define the function f(x) = cos(x) - xe^x
double f(double x)
{
    return cos(x) - x * exp(x);
}

// Define the derivative f'(x)
double f_prime(double x)
{
    return -sin(x) - x * exp(x) + exp(x);
}

// Newton-Raphson method
double newton_raphson(double initial_guess, double tolerance = 1e-9, int max_iterations = 100)
{
    double x = initial_guess;
    for (int i = 0; i < max_iterations; ++i)
    {
        double fx = f(x);
        double fpx = f_prime(x);
        double x_new = x - fx / fpx;
        if (abs(x_new - x) < tolerance)
        {
            return x_new;
        }
        x = x_new;
    }
    return NAN; // return NaN if the root is not found
}

int main()
{
    // Initial guess in the interval [0, 1]
    double initial_guess = 0.5;

    // Find the root using Newton-Raphson method
    double root = newton_raphson(initial_guess);

    if (!isnan(root))
    {
        cout << "The root of the equation cos(x) = xe^x in the interval [0, 1] is approximately: " << fixed << root << endl;
    }
    else
    {
        cout << "Unable to find root within the specified tolerance and maximum iterations." << endl;
    }

    return 0;
}
