#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
// direct approach using in-built function 
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    next_permutation(arr,arr+3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}