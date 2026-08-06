#include <bits/stdc++.h>
using namespace std;

int pascalsTriangle(int n, int r, int c) {
    vector<vector<int>> arr(n);

    for(int i = 0; i < n; i++) {
        arr[i].resize(i + 1);
        for(int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
            arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }


    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }



    return arr[r - 1][c - 1];
}

vector<int> nby3(vector<int>& arr) {
    int n = arr.size();
    map<int, int> mpp;
    vector<int> greater;

    int mini = n / 3 + 1;

    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;

        if(mpp[arr[i]] == mini) {
            greater.push_back(arr[i]);
        }

        if(greater.size() >= 2) break;
    }

    return greater;
}

vector<vector<int>> threeSum(vector<int>& arr) {
    // 1. Sort the array
    sort(arr.begin(), arr.end());

    vector<vector<int>> threeSumRes;

    // 2. Keep the pointer i as pivot and basically do a 2sum
    for(int i = 0; i < arr.size(); i++){
        int j = i+1;
        int k = arr.size() - 1;

        if(i > 0 && arr[i] == arr[i-1]) continue;

        while(j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if(sum < 0) j++;
            else if(sum > 0) k--;
            else if(sum == 0) {
                threeSumRes.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;

                while (j < k && arr[j] == arr[j - 1])
                    j++;

                while (j < k && arr[k] == arr[k + 1])
                    k--;
            }
        }
    }

    return threeSumRes;
}

int longestSubArraySum0(vector<int>& arr) {
    unordered_map<int, int> mpp;
    int n = arr.size();

    int maxSubArray = 0;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        if(sum == 0 && maxSubArray < i+1){
            maxSubArray = i + 1;
        }
        else if(mpp.find(sum) != mpp.end()){
            int len = i - mpp[sum];
            if(len > maxSubArray) {
                maxSubArray = len;
            }
        } else {
            mpp[sum] = i;
        }
    }

    return maxSubArray;
}

int xorSubArr(vector<int>& arr, int k) {
    // int count = 0;
    // for(int i = 0; i < arr.size(); i++) {
    //     int xorOp = 0;
    //     for(int j = i; j < arr.size(); j++) {
    //         xorOp ^= arr[j];
    //         if(xorOp == k) count++;

    //     }
    // }

    int count = 0;
    unordered_map<int, int> mpp;
    mpp[0] = 1;


    int currXor = 0;

    for(int i = 0; i < arr.size(); i++) {
        currXor ^= arr[i];
        int target = currXor ^ k;

        if(mpp.find(target) != mpp.end()){
            count += mpp[target];
        }

        mpp[currXor]++;
    }
    return count;
}

vector<vector<int>> mergeInterval(vector<vector<int>>& arr) {
    vector<vector<int>> op;
    
    for(int i = 0; i < arr.size(); i++) {
        if(op.empty() || arr[i][0] > op.back()[1]) {
            op.push_back(arr[i]);
        } else {
            op.back()[1] = max(arr[i][1], op.back()[1]);
        }
    }

    return op;
}

vector<int> dupMiss(vector<int>& arr) {
    vector<int> op = {0, 0};

    sort(arr.begin(), arr.end());

    int flag = false;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i + 1] == arr[i]) {
            op[0] = arr[i];
        }
        else if(arr[i] != i + 1 && !flag) {
            op[1] = i;
            flag = true;
        }
    }

    cout << op[0] << " " << op[1];

    return op;
}

int main() {
    // cout << pascalsTriangle(5, 5, 3);

    // vector<int> arr = {1, 2, 1, 1, 3, 2, 2};
    // vector<int> ans = nby3(arr);
    // cout << ans[0] << " " << ans[1];
    // cout << endl;
    
    
    // vector<int> arr = {-1, 0, 1, 2, -1, -4};
    // vector<vector<int>> threeSumArr = threeSum(arr);

    // for(auto it: threeSumArr){
    //     cout << "[ ";
    //     for(auto num: it) {
    //         cout << num << ", ";
    //     }
    //     cout << " ]";
    //     cout << endl;
    // }

    //  vector<int> arr = {9, -3, 3, -1, 6, -5};
    //  cout << longestSubArraySum0(arr) << endl;
    
    // vector<int> arr = {5, 6, 7, 8, 9};
    // cout << xorSubArr(arr, 5) << endl;

    // vector<vector<int>> arr = {{1,3},{2,6},{8,10},{11,18}};
    // vector<vector<int>> mArr = mergeInterval(arr);

    // for(int i = 0; i < mArr.size(); i++) {
    //     cout << "[ " << mArr[i][0] << ", " << mArr[i][1] << "]";
    //     cout << endl;
    // }

    vector<int> arr = {6, 2, 3, 4, 5, 6};
    dupMiss(arr);

    return 0;
}