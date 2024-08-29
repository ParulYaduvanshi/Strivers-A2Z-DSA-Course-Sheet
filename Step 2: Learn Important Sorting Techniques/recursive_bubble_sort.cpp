#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    if (n==1) return;
    for (int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble_sort(arr,n-1);
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

    bubble_sort(arr,n);

    cout<<"Sorted Array: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}