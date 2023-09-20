#include<iostream>
using namespace std;

int main()
{
    int a[10], b[10], n, n1, c[20], k = 0, i, j;
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
    // Union operation for the first set
    for (i = 0; i < n; i++)
    {
        bool isDuplicate = false; // Flag to check for duplicates
        for (j = 0; j < k; j++)
        {
            if (c[j] == a[i])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            c[k] = a[i];
            k++;
        }
    }
    // Union operation for the second set
    for (i = 0; i < n1; i++)
    {
        bool isDuplicate = false; // Flag to check for duplicates
        for (j = 0; j < k; j++)
        {
            if (c[j] == b[i])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            c[k] = b[i];
            k++;
        }
    }
    cout << "Union of both sets is:" << endl;
    for (i = 0; i < k; i++)
    {
        cout << c[i] << "   ";
    }
    return 0;
}
