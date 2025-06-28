// C++ program to calculate pow(b, e) using recursion and optimization (exponentiation by squaring)
#include <iostream>
using namespace std;

// Recursive function to compute b^e (b raised to the power e)
double power(double b, int e) {
  
    // Base Case: Any number to the power 0 is 1
    if (e == 0)
        return 1;
  
    // If exponent is negative, convert to positive and invert the result
    if (e < 0)
        return 1 / power(b, -e);
  
    // Recursive call: compute power for half the exponent
    double temp = power(b, e / 2);

    // If exponent is even, result is temp^2
    if (e % 2 == 0)
        return temp * temp;
    else
        // If exponent is odd, multiply one more time by base
        return b * temp * temp;
}

int main() {
    double b = 3.0; // Base value
    int e = 5;      // Exponent value

    // Calculate power and store the result
    double res = power(b, e);

    // Print the result
    cout << res;

    return 0;
}
