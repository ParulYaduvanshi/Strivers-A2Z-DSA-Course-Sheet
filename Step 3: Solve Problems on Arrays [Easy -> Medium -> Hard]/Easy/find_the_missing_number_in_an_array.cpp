#include<iostream>
using namespace std;
void missing_number(int arr[],int n){
    int sum=0;
    // sum of the array elements
    for (int i=0;i<n-1;i++){
        sum+=arr[i];
    }

    // sum of n natural numbers
    int sum_n=(n*(n+1))/2;
    int missing_number=sum_n-sum;

    cout<<"The Missing Number : " << missing_number;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    missing_number(arr,n);
    return 0;
}