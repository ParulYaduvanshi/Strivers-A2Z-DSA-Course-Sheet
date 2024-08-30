#include<iostream>
using namespace std;
void rotate_array(int arr[],int n,int d){
    d=d%n;
    int temp[n];
    for (int i=1;i<n;i++){
        temp[i-1]=arr[i];
    }
    temp[n-1]=arr[0];
    for (int i=0;i<n;i++){
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

    int d;
    cout<<"Enter the number of places by which you want to rotate the array: ";
    cin>>d;

    rotate_array(arr,n,d);

    return 0;
}