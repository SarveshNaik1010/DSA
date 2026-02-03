#include <bits/stdc++.h>
using namespace std;

void largestElement(int arr[], int n) {
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) largest = arr[i];
    }

    cout << largest;
    cout << endl;
}

void secondLargest(int arr[], int n) {
    int largest = arr[0] >= arr[1] ? arr[0] : arr[1];
    int secondLargest = arr[0] < arr[1] ? arr[0] : arr[1];

    // cout << largest << " " << secondLargest;

    for(int i = 2; i < n; i++) {
        if(arr[i] >= largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        if(arr[i] < largest && arr[i] > secondLargest) secondLargest = arr[i];
    }

    cout << secondLargest;
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 13, 4, 13, 5, 6, -1, 222, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    largestElement(arr, n);
    secondLargest(arr, n);

    return 0;
}