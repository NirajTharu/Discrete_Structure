//Codes for finding Exponent of any number
#include<iostream>
#include<cmath> // Include the <cmath> library for the pow() function
using namespace std;

int main() {
    double base, exponent, result;

    // Input the base and exponent
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate the result using the pow() function from <cmath>
    result = pow(base, exponent);

    // Display the result
    cout << base << " raised to the power of " << exponent << " is " << result << endl;

    return 0;
}
