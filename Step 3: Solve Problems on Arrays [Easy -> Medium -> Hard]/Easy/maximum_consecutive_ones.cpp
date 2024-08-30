#include<iostream>
using namespace std;
int maxConsecutiveOnes(int arr[],int n){
    int count=0;
    int maxCount=0;
    for (int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxCount=max(count,maxCount);
        }
        else{
            count=0;
        }
    }
    cout<<maxCount;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    maxConsecutiveOnes(arr,n);
    
    return 0;
}