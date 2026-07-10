#include <bits/stdc++.h>
using namespace std;

int sum2(vector<int> &arr, int t) {
    // for(int i = 0; i < arr.size(); i++) {
    //     for(int j = i+1; j < arr.size(); j++) {
    //         int sum = arr[i] + arr[j];
    //         if(sum == t) {
    //             cout << "[" << i << ", " << j << "]";
    //             cout << endl;
    //         }
    //     }
    // }

    // map<int, int> hash;
    // hash[0] = arr[0];

    // for(int i = 1; i < arr.size(); i++) {
    //     int diff = t - arr[i];
    //     cout << hash[diff];
    //     cout << endl;
    //     if(hash[i]) {
    //         cout << "[" << hash[i] << ", " << i << "]";
    //         cout << endl;
    //         return;
    //     }

    // }

    int n = arr.size();
    // 1. Create a vector of pairs to remember original indices after sorting
    vector<pair<int, int>> numsWithIndex;
    for (int i = 0; i < n; i++) {
        numsWithIndex.push_back({arr[i], i});
    }
    
    // 2. Sort the array
    sort(numsWithIndex.begin(), numsWithIndex.end());

    int left = 0, right = n - 1;

    while(left < right) {
        int sum = numsWithIndex[left].first + numsWithIndex[right].first;

        if(sum == t) return 1;
        else if(sum < t) left++;
        else right--;
    }


    return 0;

}

void sort012(vector<int> &arr) {
    // int c0 = 0, c1 = 0, c2 = 0;
    // for(int i = 0; i < arr.size(); i++) {
    //     if(arr[i] == 0) c0++;
    //     if(arr[i] == 1) c1++;
    //     if(arr[i] == 2) c2++;
    // }

    // int i = 0;
    // while(c0--) {
    //     arr[i] = 0;
    //     i++;
    // }
    
    // while(c1--) {
    //     arr[i] = 1;
    //     i++;
    // }
    
    // while(c2--) {
    //     arr[i] = 2;
    //     i++;
    // }

    // for(int i = 0; i < arr.size(); i++) {
    //     cout << arr[i];
    // }

    // Init pointers
    int low = 0, mid = 0, high = arr.size() - 1;

    while(mid <= high) {
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if(arr[mid] == 1) {
            mid++;
        } else if(arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
    }
}

int majorityOcc(vector<int> &arr) {
    int ele = arr[0], count = 0;
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i] = ele) count++;
        else if(arr[i] != ele && count == 0) {
            ele = arr[i];
        }
        else count--;
    }

    return ele;
}

int maxSubArrSum(vector<int> &arr) {
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if(sum < 0) {
            sum = 0;
        } 
        
        if(sum > maxSum) {
            maxSum = sum;
        }
    }

    return maxSum;
}

int stockBuySell(vector<int> prices) {
    int minPrice = INT_MAX;

    int maxProfit = 0;

    for (int price: prices) {
        if(price < minPrice) minPrice = price;
        else {
            maxProfit = max(maxProfit, price - minPrice);
        }
    }

    return maxProfit;
}

int main() {
    // vector<int> arr = {2, 6, 5, 8, 11};
    // cout << sum2(arr, 14);

    // vector<int> arr = {2, 2, 1, 1, 2, 1, 2, 1, 0, 0, 1, 0, 1};
    // sort012(arr);    

    // vector<int> arr = {1, 1, 1, 2, 1, 2};
    // cout << majorityOcc(arr);
    
    // vector<int> arr = {2, 3, 5, -2, 7, -4};
    // cout << maxSubArrSum(arr);

    vector<int> prices = {7,5,3,6,4,1};
    cout << stockBuySell(prices);

    return 0;
}