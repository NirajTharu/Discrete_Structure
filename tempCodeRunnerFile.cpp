#include<iostream>
using namespace std;

int linearSearchRecursive(int arr[], int target, int startIndex, int endIndex) {
    // Base case: If the startIndex exceeds the endIndex, the target is not found.
    if (startIndex > endIndex) {
        return -1; // Target not found
    }

    // Check if the current element is equal to the target.
    if (arr[startIndex] == target) {
        return startIndex; // Target found at this index
    }

    // Recursively search in the rest of the array.
    return linearSearchRecursive(arr, target, startIndex + 1, endIndex);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int target = 8;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = linearSearchRecursive(arr, target, 0, size - 1);

    if (index != -1) {
        cout << "Target " << target << " found at index " << index << endl;
    } else {
        cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
