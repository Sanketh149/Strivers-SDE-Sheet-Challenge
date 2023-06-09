#include <bits/stdc++.h> 
int merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//
    int inv = 0;
    int j = mid + 1;
    for(int i = low;i<=mid;i++)
    {
        while(j <= high && arr[i] > arr[j]*2LL) j++;
        inv += (j - (mid+1));
    }
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return inv;
}

int mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return 0;
    int mid = (low + high) / 2 ;
    int inv = 0;
    inv += mergeSort(arr, low, mid);  // left half
    inv += mergeSort(arr, mid + 1, high); // right half
    inv += merge(arr, low, mid, high);  // merging sorted halves
    return inv;
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	return mergeSort(arr, 0, n-1);	
}