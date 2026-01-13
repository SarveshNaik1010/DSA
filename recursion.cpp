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

int main() {
    int fact = factorial(5);
    cout << fact;
    cout << endl;

    name("Sarvesh", 12);
    return 0;
}