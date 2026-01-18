#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 7, 3, 8, 11, 5, 10, 2, 7, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Precompute
    int hash[12] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    // Take the number from the user
    int q = 3;
    while(q--) {
        int num;
        cin >> num;
        // Fetch
        cout << hash[num] << endl;
    }

    return 0;
}