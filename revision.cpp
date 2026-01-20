#include <bits/stdc++.h>
using namespace std;

int main() {
    // STL
    // 1. Given N elements print them in sorted order
    // int n;
    // cout << "Enter the max N ";
    // cin >> n;
    
    // set<int> s;
    // cout << "Enter the elements\n";
    // for(int i = 0; i < n; i++) {
    //     int num;
    //     cin >> num;
    //     s.insert(num);
    // }

    // for(auto it = s.begin(); it != s.end(); it++) {
    //     cout << *it << " ";
    // }

    // Working with vectors
    int n;
    cout << "Enter the max N ";
    cin >> n;
    
    vector<int> v;
    cout << "Enter the elements\n";
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }

    // Access element at xth position
    int x;
    cout << "Enter the xth pos to print: ";
    cin >> x;
    cout << v.at(x);

    


    return 0;
}