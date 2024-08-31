// majority element (>n/2 times)
#include<iostream>
using namespace std;
int majority_elements(int arr[],int n){
    int count=0;
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count>n/2){
            return arr[i];
        }
    }
    
    
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result=majority_elements(arr,n);
    cout<<result;

    return 0;
}

/*
Leetcode -> 169. Majority Element
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for (int i=0;i<n;i++){
            int element=nums[i];
            mp[element]++;
        }

        int k=n/2;
        int ans=0;
        for (auto i: mp){
            if (i.second>k){
                ans= i.first;
                break;
            }
                
        }
        return ans;
    }
};
*/