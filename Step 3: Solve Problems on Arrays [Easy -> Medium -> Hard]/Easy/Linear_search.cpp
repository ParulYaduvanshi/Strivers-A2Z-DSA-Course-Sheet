#include<iostream>
using namespace std;
void linear_search(int arr[],int n,int k){
    bool flag=false;
    for (int i=0;i<n;i++){
        if (arr[i]==k){
            flag=true;
            break;
        }
    }
    if (flag){
        cout<<"Element Found";
    }
    else{
        cout<<"Element not found";
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
    int k;
    cout<<"Enter the element to be searched: ";
    cin>>k;
    linear_search(arr,n,k);
    return 0;
}