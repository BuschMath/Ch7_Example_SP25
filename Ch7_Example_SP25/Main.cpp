#include <iostream>
using namespace std;

// Recursive binary search function
int binarySearch(const int arr[], int target, int left, int right) {
    if (left > right)
        return -1; // Target not found

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid; // Target found
    else if (arr[mid] > target)
        return binarySearch(arr, target, left, mid - 1); // Search left half
    else
        return binarySearch(arr, target, mid + 1, right); // Search right half
}

int main() {
    int sortedArray[] = { 2, 4, 6, 8, 10, 12, 14 };
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int target = 10;

    int result = binarySearch(sortedArray, target, 0, size - 1);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
