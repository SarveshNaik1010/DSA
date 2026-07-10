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

int isPalindrome(string s, int i) {
    if(i > ((s.length() - 1) - i)) {
        return true;
    }

    if(s[i] == s[(s.length() - 1) - i]) {
        return isPalindrome(s, i+1);
    }

    return false;
}

int fibonacci(int N) {
    if(N <= 1) return N;

    int last = fibonacci(N-1);
    int slast = fibonacci(N-2);
    int sum = last + slast;
    return sum;

}

void pattern1(int l) {
    for(int i = 1; i <= l; i++) {
        // 1st Set 1st Part *
        for(int j = l; j >= i; j--) {
            cout << "*";
        }
        
        // 1st Set 1st part [Space]
        for(int k = 1; k <= i - 1; k++) {
            cout << " ";
        }
        
        // // 1st Set 2nd part [Space]
         for(int k = 1; k <= i - 1; k++) {
            cout << " ";
        }

        //  // 1st Set 2nd part *
       for(int j = l; j >= i; j--) {
            cout << "*";
        }

        cout << endl;
    }

    for(int i = 1; i <= l; i++) {
        // 1st Set 1st Part *
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // 1st Set 1st part [Space]
        for(int k = i; k < l; k++) {
            cout << " ";
        }
        
        // 1st Set 2nd part [Space]
        for(int k = i; k < l; k++) {
            cout << " ";
        }
        //  // 1st Set 2nd part *
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

void pattern2(int n) {
    for(int i = 0; i < (2 * n - 1); i++) {
        for(int j = 0; j < (2 * n - 1); j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;

            cout << n - min(min(top, bottom), min(left, right)) << " ";

        }

        cout << endl;
    }
}

void hashing1(vector<int> &arr) {
    int hash[13] = {0};

    // Precompute
    for(int i = 0; i < 13; i++){
        hash[i - 'a']++;
        cout << hash[i - 'a'] << " ";    
    }

    // for(auto it: arr) {
    //     hash[it] += 1;
    // }

    // for(auto it: arr) {
    //     cout << it << " " << hash[it];
    //     cout << endl;
    // }

}

void insertionSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    for (int x : arr)
        cout << x << " ";
}

int findSingle(vector<int> &arr) {
    // map<int, int> hash;

    // for(int it: arr) {
    //     hash[it] += 1;
    //     cout << hash[it] << " ";
    //     cout << endl;
    // }

    // for(auto it: hash) {
    //     if(it.second == 1) {
    //         return it.first;
    //     }
    // }

    // return 0;

    int n = arr.size();

    int xorr = 0;

    for(int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }

    return xorr;
}

int findLen(vector<int> &arr, int k) {
    int maxLen = 0;
    for(int i = 0; i < arr.size(); i++) {
        int newLen = 0;
        int sum = 0;
        for(int j = i; j < arr.size(); j++) {
            if(arr[j] != 0 && sum == k && newLen > maxLen) {
                maxLen = newLen;
                break;
            }

            sum += arr[j];
            newLen++;
        }

        // if(sum == k && newLen > maxLen) {
        //     maxLen = newLen;
        // }
    }

    // for(int i = 0; i < arr.size(); i++) {
    //     int j = i+1;
    //     int len = 1;
    //     int sum = 0;
    //     while(j < arr.size()) {
    //         if(arr[i] == k) {
    //             sum += arr[i];
    //             len++;

    //             if(len > maxLen) maxLen = len;
    //             continue;
    //         }

    //         sum += arr[i] + arr[j];

    //         if(sum > k) break;

    //         len++;
    //         j++;
    //     }

    //     if(len > maxLen) maxLen = len;
    // }

    return maxLen;
}

int main() {
    
    // countD(234980);
    // reverse(123456);
    // gcd(36);
    // rec1(5);
    // rec2("Sarvesh", 1, 5);
    // cout << sumN(5);
    // arrRev(arr, 0, sizeof(arr) - 1);
    
    // cout << "The answer is ";
    // cout << isPalindrome("123321", 0);
    // pattern1(5);
    // pattern2(4);
    // hashing1(arr);
    
    // vector<int> arr = {7, 4, 5, 2};
    // insertionSort(arr);
    
    // vector<int> arr = {1, 2, 2, 3, 4, 1, 4};
    // cout << findSingle(arr);
    
    vector<int> arr = {10, 5, 2, -2, 1, 0, 0, 0, 0, 9};
    cout << findLen(arr, 15);


    return 0;
}