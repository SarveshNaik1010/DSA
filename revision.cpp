#include <bits/stdc++.h>
using namespace std;

// Recursion
void f(int x) {
    if(x < 1) return;
    f(x-1);
    cout << x << endl;
}

int sum(int x) {
    if(x == 1) return 1;
    
    int addition = x + sum(x - 1);

    return addition;
}

int isPalindrome(string str, int i , int n) {
    if(i > (n / 2)) return true;
    if(str[i] != str[n - i - 1]) return false;

    return isPalindrome(str, i+1, n);
}

int main() {
    {
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
    // int numStudents;
    // map<string, int> nameRoll;

    // Assignment
    // cout << "Enter the number of students: ";
    // cin >> numStudents;

    // for(int i = 0; i < numStudents; i++) {
    //     string name;
    //     int rollNo;

    //     cout << "Enter details of student " << i+1 << endl;
    //     cin >> name;
    //     cin >> rollNo;

    //     nameRoll[name] = rollNo;
    // }

    // cout << "Here are student details" << endl;
    // cout << "Name: " << setw(10) << "RollNo: " << endl;
    // for(auto it: nameRoll) {
    //     cout << it.first << setw(10) << it.second << endl;
    // }
    }

    // f(5);

    // int addition = sum(5);
    // cout << addition;

    cout << isPalindrome("TENET", 0, 5) << endl;
    cout << isPalindrome("1001", 0, 4);

    return 0;
}