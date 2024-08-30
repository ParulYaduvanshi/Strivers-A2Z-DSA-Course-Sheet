#include<iostream>
using namespace std;

void left_rotate(int arr[],int n){
    int temp[n];
    for (int i=1;i<n;i++){
        temp[i-1]=arr[i];
    }
    temp[n-1]=arr[0];
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    left_rotate(arr,n);

    return 0;
}