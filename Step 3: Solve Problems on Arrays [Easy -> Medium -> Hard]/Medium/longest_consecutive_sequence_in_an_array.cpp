#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

/*
Brute Force Approach
bool ls(vector<int> arr,int num){    // Linear Search
    int n=arr.size();
    for (int i=0;i<n;i++){
        if (arr[i]==num){
            return true;
        } 
    }
    return false;
}
int longest_consecutive_sequence(vector<int> arr){
    int n=arr.size();
    // sort (arr.begin(),arr.end());
    int longest=1;
    for (int i=0;i<n;i++){
        int x=arr[i];
        int count=1;
        while(ls(arr,x+1)==true){
            x=x+1;
            count++;
        }
        longest=max(longest,count);
    }
    return longest;
}
*/
int longestSuccessiveElements(vector<int>&nums) {
    // Better Solution
    if (nums.size()==0) return 0;
    sort (nums.begin(),nums.end());
    int n=nums.size();
    int lastSmaller=INT_MIN;
    int cnt=0;
    int longest=1;
    for (int i=0;i<n;i++){
        if (nums[i]-1==lastSmaller){
            cnt+=1;
            lastSmaller=nums[i];
        }
        else if(lastSmaller != nums[i]){
            cnt=1;
            lastSmaller=nums[i];
        }
        longest=max(longest,cnt);
    }
    return longest;
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

    // int ans=longest_consecutive_sequence(arr);
    int ans=longestSuccessiveElements(arr);
    cout<<ans;
    return 0;
}