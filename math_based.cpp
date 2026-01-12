#include <bits/stdc++.h>
using namespace std;

int revNum(int num) {
    int revNum = 0;
    while(num > 0) {
        int lastDigit = num % 10;
        revNum = revNum * 10 + lastDigit;
        num = num / 10;
    }

    return revNum;
}

int main() {
    int num = revNum(401001);
    cout << num;
    return 0;
}