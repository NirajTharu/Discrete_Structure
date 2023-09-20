//Code for finding Permutation 
#include<iostream>
using namespace std;

// Function to calculate factorial
int nPr(int n) {
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
        int ans = nPr(n) / nPr(n - r);
        cout << "Permutation of " << n << " items taken " << r << " at a time is: " << ans << endl;
    } else {
        cout << "Invalid input. Ensure n >= r." << endl;
    }

    return 0;
}
