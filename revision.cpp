#include <bits/stdc++.h>
using namespace std;

int main() {
    // STL
    // 1. Given N elements print them in sorted order
    int n;
    set<int> s;
    cout << "Enter the max N ";
    cin >> n;

    cout << "Enter the elements\n";
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.insert(num);
    }

    for(auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}