#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bool is_sorted=true;
    for (int i=1;i<n;i++){
        if (arr[i]<arr[i-1]){
            is_sorted=false;
            break;
        }
    }

    if (is_sorted){
        cout<<"Array is sorted in ascending order.";
    }
    else{
        cout<<"Array is not sorted.";
    }
    return 0;
}