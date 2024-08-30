// lonhgest subarray with given sum k positives + negatives
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
/*
int longest_subarray(vector<int> arr,int n,int k){
    // map<long long ,int> mp;
    int sum=0;
    int count=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
        if (sum==k){
            count++;
        }
    }
    return count;
}*/
int longest_subarray(vector<int> arr, int n, int k) {
    unordered_map<int, int> mp; // map to store (sum, index)
    int sum = 0;
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // If sum equals k, update max_len
        if (sum == k) {
            max_len = max (max_len,i + 1);
        }

        // If (sum - k) is found in map, update max_len
        int rem=sum-k;
        if (mp.find(rem) != mp.end()) {
            int len=i-mp[rem];
            max_len = max(max_len, len);
        }

        // Only store the first occurrence of the sum in the map
        if (mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }

    return max_len;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    cout<<longest_subarray(arr,n,k);
    return 0;
}