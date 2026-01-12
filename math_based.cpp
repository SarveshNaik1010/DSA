#include <bits/stdc++.h>
using namespace std;

void revNum(int num) {
    int revNum = 0;
    while(num > 0) {
        int lastDigit = num % 10;
        revNum = revNum * 10 + lastDigit;
        num = num / 10;
    }

    cout << revNum << endl;;
}

void checkPalindrome(int num) {
    int temp = num;
    int revNum = 0;
    while(temp > 0) {
        int ld = temp % 10;
        revNum = revNum * 10 + ld;
        temp = temp / 10;
    }

    cout << (revNum == num ? "Palindrone" : "Not Palindrome") << endl; 
    
}

void armstrong(int num) {
    int temp = num;
    int sum = 0;
    while (temp > 0) {
        int ld = temp % 10;
        sum = sum + (ld * ld * ld);  
        temp = temp / 10;
        
    }

    cout << (sum == num ? "Armstrong" : "Not Armstrong") << endl; 
    
}

// Very important
void printDivisiors(int n) {
    vector<int> ls;

    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            ls.push_back(i);
            if((n / i) != i) {
                ls.push_back(n / i);
            }
        };
    }

    sort(ls.begin(), ls.end());
    for(auto it: ls) cout << it << " ";
    cout << endl;
     
}

void printGCD(int num1, int num2) {
    while(num1 > 0 && num2 > 0) {
        if(num1 > num2) num1 = num1 % num2;
        else num2 = num2 % num1;
    }

    if(num1 == 0) cout << num2 << endl;
    if(num2 == 0) cout << num1 << endl;
}

int main() {
    revNum(400);
    checkPalindrome(401001);
    checkPalindrome(12321);
    // armstrong(371);
    armstrong(153);
    printDivisiors(36);
    printGCD(20, 40);
    return 0;
}