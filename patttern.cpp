#include<iostream>
using namespace std;

void printTriangleAsc(int rows) {
    for(int i = 1; i <= rows; i++) {
        // Print Space
        for(int j = i; j <= rows; j++) {
            cout << " ";
        }

        // Print Star
        for(int k = 1; k <= i; k++) {
            cout << "* "; 
        }

        cout << endl;
    }
}

void printTriangleDesc(int rows) {
    for(int i = 1; i <= rows; i++) {
        // Print Space
        for(int k = 1; k <= i; k++) {
            cout << " "; 
        }

        // Print Star
        for(int j = i; j <= rows; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}

void printTriangleBoth(int rows) {
    // 1st half
    for(int i = 1; i <= rows; i++) {
        // Print Space
        for(int j = i; j <= rows; j++) {
            cout << " ";
        }

        // Print Star
        for(int k = 1; k <= i; k++) {
            cout << "* "; 
        }

        cout << endl;
    }

    // 2nd Half
    for(int i = 1; i <= rows; i++) {
        // Print Space
        for(int k = 1; k <= i; k++) {
            cout << " "; 
        }

        // Print Star
        for(int j = i; j <= rows; j++) {
            cout << "* ";
        }

        cout << endl;
    }
}

int main() {
    printTriangleAsc(5);
    cout << endl;

    printTriangleDesc(5);
    cout << endl;
    
    printTriangleBoth(5);
    cout << endl;
}
