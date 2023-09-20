// Code for linear search using recursion
#include<iostream>
using namespace std;

int linearSearchRecursive(int arr[], int target, int startIndex, int endIndex) {
    if (startIndex > endIndex) {
        return -1; // Target not found
    }
    if (arr[startIndex] == target) {
        return startIndex; // Target found at this index
    }
    return linearSearchRecursive(arr, target, startIndex + 1, endIndex);
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value to search for: ";
    cin >> target;

    int index = linearSearchRecursive(arr, target, 0, size - 1);

    if (index != -1) {
        cout << "Target " << target << " found at index " << index << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
