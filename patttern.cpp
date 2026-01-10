#include<iostream>
#include <algorithm>
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

void printBookTriangle( int rows) {
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            cout << (j % 2 != 0 ? 1 : 0) << " ";
        }
        cout << endl;
    }
}

void printMirrorTriangle(int rows) {
    // LOGIC 1: NON - MATHEMATICAL
    // for(int i = 1; i <= rows; i++) {
    //     // 1st Triangle (ith row)
    //     for(int j = 1; j <= rows; j++) {
    //         if(j <= i) {
    //             cout << j;
    //         } else {
    //             cout << " ";
    //         }
    //     }

    //     // 2nd Triangle (ith row)
    //     for(int j = rows; j >= 1; j--) {
    //         if(j > i) {
    //             cout << " ";
    //         } else {
    //             cout << j;
    //         }
    //     }
        

    //     cout << endl;
    // }

    //  LOGIC 2: MATHEMATICAL
    for(int i = 1; i <= rows; i++) {
        int numSpaces = 2 * (rows - i);
        // Number
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

        // Space
        for(int k = 1; k <= numSpaces; k++) {
            cout << " ";
        }

        // Number
        for(int l = i; l >= 1; l--) {
            cout << l;
        }
        cout << endl;
    }
}

void printCharTriangle(int rows) {
    for(int i = 1; i <= rows; i++) {
        // Space
        for(int j = 1; j <= rows-i-1; j++) {
            cout << " ";
        }
        // Chars
        char c = 'A';
        int numChars = 2 * (i - 1) + 1;
        for(int j = 1; j <= numChars; j++) {
            cout << c;
            if(j >= (numChars) / 2 + 1) {
                c--;
            } else {
                c++;
            }
        }

        // Space
        for(int j = 1; j <= rows-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void printRevCharStair(int rows) {
    for (int i = 1; i <= rows; i++) {
        char c = 'A' + (rows - i);
        for(int j = 1; j <= i; j++) {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}


void printVoidDiamond(int rows) {
    for(int i = 1; i <= rows; i++) {
        // Star
        for(int j = rows; j >= i; j--) {
            cout << '*';
        }

        // Spaces
        int spaces = 2 * (i - 1);
        for(int j = 1; j <= spaces; j++) {
            cout << ' ';
        }

        // Star
        for(int j = i; j <= rows; j++) {
            cout << '*';
        }

        cout << endl;
    }

    for(int i = 1; i <= rows; i++) {
        // Star
        for(int j = 1; j <= i; j++) {
            cout << '*';
        }

        // Spaces
        int spaces = 2 * (rows - (i - 1) - 1);
        for(int j = spaces; j >= 1; j--) {
            cout << " ";
        }

        // Star
        for(int j = 1; j <= i; j++) {
            cout << '*';
        }

        cout << endl;
    }
}

void printMirrorTriangle2(int rows) {
    int totalRows = (2 * rows) - 1;
    for(int i = 1; i <= totalRows; i++) {
        int numStars, numSpaces;
        if(i <= rows) {
            numSpaces = 2 * (rows - i);
            numStars = i;
        } else {
            numStars = totalRows - i + 1;
            numSpaces = 2 * (i - rows);
        }

        // Star
        for(int j= 1; j <= numStars; j++) {
            cout << "*";
        }

        // Spaces
        for(int j = 1; j <= numSpaces; j++) {
            cout << " ";
        }

        // Star
        for(int j= 1; j <= numStars; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

void printSquare(int rows) {
    // 1st Approach
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= rows; j++) {
            if(i == 1 || i == rows || j == 1 || j == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printNumSquare(int max) {
    // // Leave
    // int maxRows = 2 * max - 1;
    // for(int i = 1; i <= maxRows; i++) {
    //     for(int j = 1; j <= maxRows; j++) {
    //         int low_i = max % 2 + i;
    //         int up_i = max * 2 - i;

    //         int low_j = max % 2 + j;
    //         int up_j = max * 2 - j;
    //         // cout << low << " " << up << " ";

    //         if(i == low_i || j == low_j) {
    //             int num = low_i == i ? max - (low_i - 1) : max - (low_j - 1);
    //             cout << num;
    //             continue;
    //         } else {
    //             int num = up_i == i ? (up_i + 1) / 2 : (up_j + 1) / 2;
    //             cout << num;
    //         }
    //     }
    //     cout << endl;
    // }

    for(int i = 0; i < max * 2 - 1; i++) {
        for(int j = 0; j < max * 2 - 1; j++) {
            int top = i;
            int left = j;
            int right = (2 * max - 2) - j;
            int bottom = (2 * max - 2) - i;
            cout << max - min(min(top, right), min(bottom, left));
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

    printBookTriangle(5);
    cout << endl;
    
    printMirrorTriangle(9);
    cout << endl;

    printCharTriangle(5);
    cout << endl;

    printRevCharStair(5);
    cout << endl;

    printVoidDiamond(5);
    cout << endl;

    printMirrorTriangle2(5);
    cout << endl;

    printSquare(10);
    cout << endl;

    printNumSquare(4);
    cout << endl;

}
