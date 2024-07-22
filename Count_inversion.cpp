#include<iostream>
#include<vector> 

using namespace std;

int mergeAndCount(vector<int>& arr, int left, int mid, int right) {
    int inversions = 0;

    // Create temporary arrays to store the left and right subarrays
    vector<int> leftArr(mid - left + 1);
    vector<int> rightArr(right - mid);

    // Copy data to temporary arrays
    for (int i = 0; i < leftArr.size(); i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < rightArr.size(); i++) {
        rightArr[i] = arr[mid + 1 + i];
    }

    // Merge the two subarrays and count inversions
    int i = 0, j = 0, k = left;
    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
            inversions += (mid - i + 1);  // Count inversions
        }
        k++;
    }

    // Copy the remaining elements of leftArr, if any
    while (i < leftArr.size()) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArr, if any
    while (j < rightArr.size()) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    return inversions;
}

int mergeSortAndCount(vector<int>& arr, int left, int right) {
    int inversions = 0;

    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively divide the array and count inversions
        inversions += mergeSortAndCount(arr, left, mid);
        inversions += mergeSortAndCount(arr, mid + 1, right);

        // Merge the sorted subarrays and count inversions
        inversions += mergeAndCount(arr, left, mid, right);
    }

    return inversions;
}

int countInversions(vector<int>& arr) {
    return mergeSortAndCount(arr, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 9};
    int inversionCount = countInversions(arr);
    cout << "Number of inversions: " << inversionCount << endl;

    return 0;
}