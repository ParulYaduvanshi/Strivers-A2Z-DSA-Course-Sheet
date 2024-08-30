#include<iostream>
#include<map>
using namespace std;
int remove_duplicates(int arr[], int n){
    map<int,int>mp;
    for (int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for (auto i:mp){
        cout<<i.first<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the sorted array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    remove_duplicates(arr,n);
    return 0;
}