#include<iostream>
using namespace std;
void moveZeroes(int arr[],int n){
    int i=0;
    for (int j=0;j<n;j++){
        if (arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
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
    moveZeroes(arr,n);
    cout<<"Array after moving zeroes to the end: ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// method 2 -> we can sort the vector in descending order.
// method 3-> we can initially sort the vector in ascending order & then apply reversing technique.
// leetcode -> 283. Move Zeroes
