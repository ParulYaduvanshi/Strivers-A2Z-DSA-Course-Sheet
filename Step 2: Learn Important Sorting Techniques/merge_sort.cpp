#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr, int l, int mid, int r) {
    vector<int> temp;
    int left=l;
    int right=mid+1;
    
    while (left <= mid && right <= r) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    if (left >mid){
        while(right<=r){
            temp.push_back(arr[right]);
            right++;
        }
    }
    else{
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
    }
    
    for (int i = l; i <= r; ++i) {
        arr[i] = temp[i - l];
    }
}

void merge_sort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    merge_sort(arr, 0, n - 1);
    
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}


// l->left
// r->right