#include <bits/stdc++.h>
using namespace std;

void selection(int arr[], int n) {
    // Sorting
    for(int i = 0; i < n; i++) {
        int min = 0;
        for(int j = i; j < n; j++) {
            if(arr[j] <= min) {
                min = arr[j];
            }
        }
        arr[i] = min;
    }

    // Sorted
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8, 0, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    selection(arr, size);


    return 0;
}