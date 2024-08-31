#include<iostream>
#include<vector>
using namespace std;
/*
int maxProdSubarray(int arr[],int n){
    if (n==0) return 0;

    int prod=arr[0];
    int maxSoFar=;
    for (int i=0;i<n;i++){
        prod*=arr[i];
        if (prod > maxSoFar){
            maxSoFar=prod;
        }
        if (prod==0){
            prod=0;
        }
    }
    return maxSoFar;
}*/
int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;

        int maxProd = nums[0];
        int minProd = nums[0];
        int result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) {
                swap(maxProd, minProd);
            }

            maxProd = max(nums[i], maxProd * nums[i]);
            minProd = min(nums[i], minProd * nums[i]);

            result = max(result, maxProd);
        }

        return result;
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

    // int max=maxProdSubarray(arr,n);
    int max=maxProduct(arr);
    cout<<"Maximum Product: "<<max<<endl;

    return 0;
}