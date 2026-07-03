#include <bits/stdc++.h>
using namespace std;

void countD(int n) {
    int x = 0;
    // while(true) {
    //     n = n / 10;
    //     x++;
    //     if(n == 0) break;
    // }

    x = (int)(log10(n)+1);

    cout << x;
}

void reverse(int n) {
    int newNum = 0;
    while(n > 0) {
        int dig = n % 10;
        newNum = newNum * 10 + dig;
        n = n / 10;
    }

    cout << newNum;
}

void gcd(int a) {
    set<int> s;
    for(int i = 1; i * i <= a; i++) {
        if(a % i == 0) {
            s.insert(i);

            if(i != a / i) s.insert(a / i);
        }
    }

    for(auto it: s) {
        cout << it << " ";
    }
}

int rec1(int n) {
    if(n == 1) {
        cout << 1;
        return n;
    }

    cout << n;
    return rec1(n - 1);
}

void rec2(string name, int c, int lim) {
    if(c == lim) {
        cout << name << "\n";
        return;
    }

    cout << name << "\n";
    rec2(name, c+1, lim);
}


int sumN(int n) {
    if(n == 1) return 1;

    int sum = n + sumN(n-1);

    return sum;
}

int arrRev(vector<int>& arr, int i, int j) {
    if(j <= i) {
        for(auto it: arr) {
            cout << it << " ";
        }
        return 0;
    }

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    arrRev(arr, i+1, j-1);

    return 0;
}

int main() {
    
    // countD(234980);
    // reverse(123456);
    // gcd(36);
    // rec1(5);
    // rec2("Sarvesh", 1, 5);
    // cout << sumN(5);
    vector<int> arr = {3, 2, 14 , 5};
    arrRev(arr, 0, sizeof(arr) - 1);

    return 0;
}