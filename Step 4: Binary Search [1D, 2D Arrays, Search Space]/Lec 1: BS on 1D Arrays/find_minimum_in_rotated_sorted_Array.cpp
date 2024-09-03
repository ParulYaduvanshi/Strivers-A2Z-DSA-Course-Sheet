#include<iostream>
#include<vector>
using namespace std;
int minimum(vector<int> &arr,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if (arr[mid]>arr[e]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return arr[s];
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<minimum(arr,n);

    return 0;
}