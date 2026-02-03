#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    // Sorted
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection(int arr[], int n) {
    // Sorting
    for(int i = 0; i < n; i++) {
        int minIndex = i;
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }        
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

    }

    // Sorted
   printArray(arr, n);
}

void bubble(int arr[], int n) {
    int iter = 0;
    for(int i = 0; i < n - 1; i++) {
        bool isSwapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
            iter++;
        }
        if(!isSwapped) break;
    }
    printArray(arr, n);
    cout << "Iterations: " << iter;
}

void insertion(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int nextEle = arr[i];
        int j = i - 1;
        while(j >= 0 && nextEle < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = nextEle;
    }

    printArray(arr, n);
}

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high) {
        if(arr[left] < arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <=high; i++) {
        arr[i] = temp[i - low];
    }
}


void mergeSort(vector<int> &arr, int low, int high) {
    if(low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void recBubble(vector<int> &arr, int end) {
    if(end == 0) return;
    for(int i = 0; i < end - 1; i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }
    recBubble(arr, end - 1);
}

void recInsertion(vector<int> &arr, int currIn) {
    if(currIn > arr.size() - 1) return;

    int tempInd = currIn;
    while(tempInd > 0 && arr[tempInd] < arr[tempInd - 1]) {
        swap(arr[tempInd], arr[tempInd - 1]);
        tempInd--;
    }

    recInsertion(arr, currIn + 1);
}

    // if(low >= high) return;
    // int pivot = low;
    // int i = low;
    // int j = high;
    // while(i < j) {
    //     if(j >= i) {
    //         swap(arr[pivot], arr[j]);
    //         break;
    //     }
    //     if(arr[i] > arr[pivot]) {
    //         if(arr[j] < arr[pivot]) {
    //             swap(arr[i], arr[j]);
    //         } else {
    //             j--;
    //         }
    //     } else {
    //         i++;
    //     }
    // }
    // quickSort(arr, low, pivot - 1);
    // quickSort(arr, pivot + 1, high);

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (true) {
        while (i <= high && arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;

        if (i >= j) break;

        swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;

    int p = partition(arr, low, high);

    quickSort(arr, low, p - 1);
    quickSort(arr, p + 1, high);
}

int main() {
    int arr[] = {13, 7, 4, 17, 9, 2, 18, 5};
    // int arr[] = {1, 3, 2, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // selection(arr, size);
    // bubble(arr, size);
    // insertion(arr, size);
    vector<int> arrV = {13, 7, 4, 17, 9, 2, 18, 5};

    // mergeSort(arrV, 0, arrV.size() - 1);
    // recBubble(arrV, arrV.size());
    // recInsertion(arrV, 1);
    quickSort(arrV, 0, arrV.size() - 1);

    for(int i = 0; i < arrV.size(); i++) {
        cout << arrV[i] << " ";
    } 
    cout << endl;


    return 0;
}