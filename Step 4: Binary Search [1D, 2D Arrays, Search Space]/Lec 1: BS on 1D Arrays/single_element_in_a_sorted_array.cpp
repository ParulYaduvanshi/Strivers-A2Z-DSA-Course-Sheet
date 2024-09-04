#include<iostream>
#include<vector>
#include<map>
using namespace std;
int singleElement(vector<int>&arr,int n){
    
}

/*
int singleElement(vector<int>&arr,int n){
    // XOR operator
    int ans=0;
    for (int i=0;i<n;i++){
        ans^=arr[i];
    }
    return ans;

}

// below code isn't working properly due to some issues.
int singleElement(vector<int> &arr,int n){
    if (n==1) return arr[0];

    for (int i=0;i<n;i++){
        if (i==0){
            if (arr[i]!=arr[i+1]) return arr[i];
            else if (i==n-1){
                if (arr[i]!=arr[i-1]) return arr[i];
            }
            else{
                if (arr[i]!=arr[i+1] && arr[i]!=arr[i-1]) return arr[i];
            }
        }
    }
    return -1;
}

// this block of code isn't optimal as it's giving Time Limit Exceeded (TLE)
int singleElement(vector<int>& arr,int n){
    map<int,int> mp;
    for (auto i:arr){
        mp[i]++;
    }

    for (auto i:mp){
        if (i.second==1){
            return i.first;
        }
    }
}
*/
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<singleElement(arr,n);

    return 0;
}