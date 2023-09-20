//Codes for finding combination 
#include<iostream>
using namespace std;

// Function to calculate factorial
int nCr(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, r;
    cout << "Enter the value of n (total items): ";
    cin >> n;
    cout << "Enter the value of r (items to select): ";
    cin >> r;

    if (n >= r) {
        int ans = nCr(n) / (nCr(r) * nCr(n - r)); // Combination formula
        cout << "Combination of " << n << " items taken " << r << " at a time is: " << ans << endl;
    } else {
        cout << "Invalid input. Ensure n >= r." << endl;
    }

    return 0;
}
