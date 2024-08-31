#include<iostream>
using namespace std;
void subarrays_sum(int arr[],int n,int k){
    int count=0;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
            if (sum==k){
                count++;
            }
        }
    }
    cout<<"The number of subarrays with the given sum: " <<count;
}
int main(){
    int n;
    cout<<"Enter the length of the array; ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the desired sum: ";
    cin>>k;
    subarrays_sum(arr,n,k);
    return 0;
}