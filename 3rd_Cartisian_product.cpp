//Code for finding cartisian product of two sets
#include<iostream>
using namespace std;

int main()
{
    int a[10], b[10], n, n1, i, j;
    cout << "Enter the Number of Elements in the first set:" << endl;
    cin >> n;
    cout << "Enter the elements of the first set:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number of elements in the second set:" << endl;
    cin >> n1;
    cout << "Enter the elements of the second set:" << endl;
    for (i = 0; i < n1; i++)
    {
        cin >> b[i];
    }

    // Finding the Cartesian product
    cout << "Cartesian Product of both sets is:" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n1; j++)
        {
            cout << "(" << a[i] << ", " << b[j] << ")   ";
        }
    }

    return 0;
}

