//code for intersection operation

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

    // Intersection operation
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
                break; // No need to continue searching for this element
            }
        }
    }

    if (k == 0)
    {
        cout << "No common elements found." << endl;
    }
    else
    {
        cout << "Intersection of both sets is:" << endl;
        for (i = 0; i < k; i++)
        {
            cout << c[i] << "   ";
        }
    }

    return 0;
}
