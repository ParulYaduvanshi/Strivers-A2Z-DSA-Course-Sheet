#include<iostream>
#include<vector>
using namespace std;
int peak_element(vector<int> &nums,int n){
    int s=0;
    // int n=nums.size();
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if (nums[mid]>=nums[mid+1]){
            e=mid;
        }else{
            s=mid+1;
        }
    }
    return s;   //this will return the index number.
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<peak_element(arr,n);

    return 0;
}