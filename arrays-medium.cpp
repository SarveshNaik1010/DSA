#include <bits/stdc++.h>
using namespace std;

int twoSum(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];

            if(sum == target) {
            cout << "YES: " << arr[i] << " + " << arr[j] << endl;
            return 1;
        }
        }
    }

    return 0;
}

int main() {
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t = 14;
    twoSum(arr, n, t);

    return 0;
}