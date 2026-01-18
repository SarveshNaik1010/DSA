#include <bits/stdc++.h>
using namespace std;

void hashNum() {
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
}

void hashChar() {
    string str = "deforetnvonedovnrdjbvdebvncofnveonvonsdzxbvjxbnakslfjghueiqoioepietuieryovnbefonvwdnvlwbfvwl";

    // Precompute
    int hash[26] = {0};
    
    for(int i = 0; i < str.size(); i++) {
        hash[str[i] - 'a'] += 1;
    }

    // Take the char from the user
    int q = 3;
    while(q--) {
        char ch;
        cin >> ch;

        // Fetch
        cout << hash[ch - 'a'] << endl;
    }
}

void hashNumMap() {
    int arr[] = {2, 7, 3, 8, 11, 5, 10, 2, 7, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Precompute
    map<int, int> mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // Take the number from the user
    int q = 3;
    while(q--) {
        int num;
        cin >> num;
        // Fetch
        cout << mpp[num] << endl;
    }


}

int main() {
    hashNum();
    hashChar();
    hashNumMap();

    

    return 0;
}