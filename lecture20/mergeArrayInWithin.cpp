#include <iostream>
using namespace std;

void mergeArray(int arr1[], int m, int arr2[], int n) {
    int i = m - 1; // Last index of the actual elements in arr1
    int j = n - 1; // Last index of arr2
    int k = m + n - 1; // Last index of arr1 (after space for merged elements)

    // Start from the back and merge elements
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[k--] = arr1[i--];
        } else {
            arr1[k--] = arr2[j--];
        }
    }

    // If there are any remaining elements in arr2, copy them into arr1
    while (j >= 0) {
        arr1[k--] = arr2[j--];
    }

    // No need to copy remaining elements from arr1, they are already in place
}

void print(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[6] = {1, 4, 6}; // arr1 has 3 elements followed by 3 empty slots (0s)
    int arr2[3] = {2, 3, 5};

    mergeArray(arr1, 3, arr2, 3); // Merge arr2 into arr1
    print(arr1, 6); // Print the merged array

    return 0;
}
