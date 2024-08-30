#include<iostream>
using namespace std;
void left_rotate_by_D_places(int arr[],int n,int d){
    int temp[d];
    for (int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for (int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for (int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int d;
    cout<<"Enter the value of d: ";
    cin>>d;

    left_rotate_by_D_places(arr,n,d);
    return 0;
}