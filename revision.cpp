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
    // int n;
    // cout << "Enter the max N ";
    // cin >> n;
    
    // vector<int> v;
    // cout << "Enter the elements\n";
    // for(int i = 0; i < n; i++) {
    //     int num;
    //     cin >> num;
    //     v.push_back(num);
    // }

    // // Access element at xth position
    // int x;
    // cout << "Enter the xth pos to print: ";
    // cin >> x;
    // cout << v.at(x);

    // Working with pointers
    // int x = 23;
    // int *ptr;
    // ptr = &x;

    // int **new_ptr = &ptr;

    // cout << *new_ptr << endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;

    // MAP

    // Defination
    int numStudents;
    map<string, int> nameRoll;

    // Assignment
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for(int i = 0; i < numStudents; i++) {
        string name;
        int rollNo;

        cout << "Enter details of student " << i+1 << endl;
        cin >> name;
        cin >> rollNo;

        nameRoll[name] = rollNo;
    }

    cout << "Here are student details" << endl;
    cout << "Name: " << setw(10) << "RollNo: " << endl;
    for(auto it: nameRoll) {
        cout << it.first << setw(10) << it.second << endl;
    }


    return 0;
}