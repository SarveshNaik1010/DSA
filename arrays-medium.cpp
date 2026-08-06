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

vector<int> altPN(vector<int> &nums) {
    int n = nums.size();

    // for(int i = 0; i < n; i++) {
    //     // cout << i << ": " << nums[i] << " ==> " << ((i % 2 == 0 && nums[i] >= 0) || (i % 2 != 0 && nums[i] < 0));
    //     // cout << endl;
    //     if(((i % 2 == 0 && nums[i] >= 0) || (i % 2 != 0 && nums[i] < 0))) {} 
    //     else if((i % 2 == 0 && nums[i] < 0)) {
    //         int j = i+1;
    //         while(j < n){
    //             if(nums[j] >= 0) {
    //                 swap(nums[i], nums[j]);
    //                 break;
    //             }
    //             j++;
    //         }
    //     } else if((i % 2 != 0 && nums[i] >= 0)) {
    //         int j = i+1;
    //         while(j < n){
    //             if(nums[j] < 0 ) {
    //                 swap(nums[i], nums[j]);
    //                 break;
    //             }
    //             j++;
    //         }
    //     }
    // }

    // int invalidIndex = INT_MIN;

    // for(int i = 0; i < n; i++) {
    //     if(((i % 2 == 0 && nums[i] < 0) || (i % 2 != 0 && nums[i] >= 0))) {
    //         cout << i << ": " << nums[i] << endl;
    //         invalidIndex = i;
    //     } else {
    //         if(invalidIndex != INT_MIN) {
                
    //         }
    //     }
    // }

    return nums;
}

vector<int> leaderArr(vector<int> &arr) {
    int n = arr.size(), max = arr[n-1];
    vector<int> leaders = {arr[n-1]};

    for(int i = n-2; i > 0; i--) {
        if(arr[i] >= max) {
            leaders.push_back(arr[i]);
            max = arr[i];
        }
    }

    return leaders;

}

void nextPermu(vector<int> &arr) {
    int n = arr.size();

    // 1. Find the longest prefix
    int prefixEnd = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] < arr[i+1]) {
            prefixEnd = i;
            break;
        }
    }

    if(prefixEnd == -1){
        reverse(arr.begin(), arr.end());
        return;
    }

    // 2. Find number > arr[prefixEnd], but smallest
    for(int i = n - 1; i > prefixEnd; i--) {
        if(arr[prefixEnd] < arr[i]) {
            swap(arr[prefixEnd], arr[i]);
            break;
        }
    }

    // 3. Reverse the remaning elements of the array
    int i = prefixEnd + 1, j = n - 1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    nextPermu(arr);
}

// int biggestConsi(vector<int> &arr) {}

// void setMatrixZero(vector<vector<int>>& matrix) {}

void rotate90(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> rotated(n, vector<int>(n));


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Place the element at its new rotated position
            rotated[j][n - i - 1] = matrix[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}

void sprial(vector<vector<int>>& matrix) {
    int num_rows = matrix.size();
    int num_cols = matrix[0].size();

    int row_upper_lim = num_rows - 1;
    int col_upper_lim = num_cols - 1;
    int row_lower_lim = 0;
    int col_lower_lim = 0;

    int depth = ceil(min(num_cols, num_rows) / 2.0);

    while(row_lower_lim <= row_upper_lim &&
      col_lower_lim <= col_upper_lim){
        // 1. (l/l to l/h)
        for(int i = col_lower_lim; i <= col_upper_lim; i++) {
            cout << matrix[row_lower_lim][i] << ", ";
        }

        // 2. (l/h + 1 to h/h)
        for(int i = row_lower_lim + 1; i <= row_upper_lim; i++) {
            cout << matrix[i][col_upper_lim] << ", ";
        }

        // 3. (h/h - 1 to h/l)
        for(int i = row_upper_lim - 1; i >= col_lower_lim; i--) {
            cout << matrix[row_upper_lim][i] << ", ";
        }

        // 4. (h/l - 1 to l/l + 1)
        for(int i = col_upper_lim - 1; i >= row_lower_lim + 1; i--) {
            cout << matrix[i][col_lower_lim] << ", ";
        }


        row_lower_lim++;
        row_upper_lim--;
        col_lower_lim++;
        col_upper_lim--;

    }



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

    // vector<int> prices = {7,5,3,6,4,1};
    // cout << stockBuySell(prices);
    
    // vector<int> nums = {1,2,-3,-1,-2, 3};
    // altPN(nums);

    // for(int num: nums) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // vector<int> arr = {10, 22, 12, 3, 0, 6};
    // vector<int> nums = leaderArr(arr);

    // for(int num: nums) {
    //     cout << num << " ";
    // }
    // cout << endl;

    // vector<int> arr = {100, 4, 200, 1, 3, 2};
    // cout <<  biggestConsi(arr);
    // cout << endl;

    // vector<int> arr = {1, 2, 3};
    // nextPermu(arr);

    // vector<vector<int>> arr = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    // vector<vector<int>> arr = {{1, 1, 1},{1, 0, 1},{1, 1, 1}};
    // setMatrixZero(arr);
    
    // vector<vector<int>> mat = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    // rotate90(mat);

    // vector<vector<int>> mat = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
    // vector<vector<int>> mat = { { 1, 2, 3 }, { 4, 5, 6 },{ 7, 8, 9 } };
    // sprial(mat);




    return 0;
}