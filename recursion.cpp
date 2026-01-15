#include <bits/stdc++.h>
using namespace std;

int factorial(int num) {
    if(num == 1) return 1;
    return num * factorial(num - 1);
}

void name(string inputName, int num) {
    if(num == 0) return;
    cout << inputName << " ";
    name(inputName, num - 1);
    return;
}

void oneToN(int i, int n) {
    if(i > n) return;
    cout << i << " ";
    oneToN(i+1 , n);
}

void nTo1(int n) {
    if(n < 1) return;
    cout << n << " "; 
    nTo1(n - 1);
}

int sumOf1stN(int i, int n) {
    if(i == n) return n;
    return i + sumOf1stN(i + 1, n);
}

void reverse(int i, int arr[], int n) {
    if(i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    reverse(i + 1, arr, n);
}

// int isPalindrome(int i, string s, int n, int correctCount = 0) {
//     if(i >= n / 2) {
//         if(correctCount >= n / 2) cout << "Palindome";
//         else cout << "Not Palindrome";
//         return 0;
//     };
//     if(s[i] == s[n - i - 1]) correctCount++;
//     isPalindrome(i + 1, s, n, correctCount);
//     return correctCount;
// }

bool isPalindrome(int i, string s, int n) {
    if(i >= n / 2) return true;
    if(s[i] != s[n - i - 1]) return false;
    return isPalindrome(i + 1, s, n);   
}

void fibo(int low, int up, int i, int range) {
    if(i > range) return;
    cout << low << " ";
    fibo(up, low + up, i+1, range);

}

int main() {
    int fact = factorial(5);
    cout << fact;
    cout << endl;
    name("Sarvesh", 12);
    cout << endl;

    oneToN(1, 5);
    cout << endl;
    
    nTo1(45);
    cout << endl;
    
    cout << sumOf1stN(1, 7) << " ";
    cout << endl;

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(0, arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << isPalindrome(0, "tenet", 5);
    cout << endl;

    fibo(0, 1, 1, 15);
    cout << endl;




    return 0;
}