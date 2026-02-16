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

void isSorted(int arr[], int n) {
    int i = 0;
    while(arr[i] <= arr[i+1]) i++;
    if(i == n - 1) cout << "Sorted";
    else cout << "Not Sorted";
    cout << endl;
}

// O(n2) approach
// void removeDuplicate(int arr[], int n) {
//     int num = arr[0];
//     int i = 1;
//     while(i < n) {
//         if(arr[i] != num) {
//             num = arr[i];
//             i++;
//             continue;
//         }

//         for(int j = i; j < n - 1; j++) {
//             arr[j] = arr[j+1];
//         }
//         n--;
//     }

//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

void removeDuplicate(int arr[], int n) {
    int i = 0;
    for(int j = 1; j < n; j++) {
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }

    cout << i + 1;
    cout << endl;
}

void leftRotate(int arr[], int n, int k) {
    k = k % n;
    if(k == 0) return;

    // 1. Extract
    vector<int> tempArr;
    for(int i = 0; i < k; i++) {
        tempArr.push_back(arr[i]);
    }

    // 2. Put the last element at the top (half rotate)
    int j = k;
    int i = 0;
    while(j < n) {
        arr[i] = arr[j];
        j++;
        i++;
    }

    // 3. Put the first element at the last (half rotate)
    for(int i = n - k; i < n; i++) {
        arr[i] = tempArr[i - (n-k)];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void moveZerosNormal(int arr[], int n) {
    int temp[n];
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp[j++] = arr[i];
        }
    }

    for(int i = j - 1; i < n; i++) {
        temp[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }

    cout << endl;
}

void moveZeros(int arr[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

     for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// void linearSearch(int arr, int n, int num) {
//     for()
// }

int main() {
    int arr[] = {1, 2, 0, 2, 0, 1, 0, 23, 0, 0, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    // largestElement(arr, n);
    // secondLargest(arr, n);

    int arrSorted[] = {1, 2, 2, 3, 4, 4, 4, 4, 5, 6, 12, 12};
    int size = sizeof(arrSorted) / sizeof(arrSorted[0]);
    // isSorted(arr, n);
    // isSorted(arrSorted, 4);

    // removeDuplicate(arrSorted, size);

    int newArr[] = {10, 20, 30, 40, 50, 60, 70};
    int newSize = 7;
    // leftRotate(newArr, newSize, 3);
    moveZeros(arr, n);


    return 0;
}