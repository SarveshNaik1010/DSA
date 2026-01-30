#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    // Sorted
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection(int arr[], int n) {
    // Sorting
    for(int i = 0; i < n; i++) {
        int minIndex = i;
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }        
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

    }

    // Sorted
   printArray(arr, n);
}

void bubble(int arr[], int n) {
    int iter = 0;
    for(int i = 0; i < n - 1; i++) {
        bool isSwapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
            iter++;
        }
        if(!isSwapped) break;
    }
    printArray(arr, n);
    cout << "Iterations: " << iter;
}

int main() {
    // int arr[] = {13, 7, 4, 17, 9, 2, 18, 5};
    int arr[] = {1, 3, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // selection(arr, size);
    bubble(arr, size);


    return 0;
}