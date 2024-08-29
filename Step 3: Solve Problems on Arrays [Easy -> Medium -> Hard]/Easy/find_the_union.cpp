#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> FindUnion(int arr1[],int arr2[],int n,int m){
    map<int,int> mp;
    vector<int> Union;
    for (int i=0;i<n;i++){
        mp[arr1[i]]++;
    }

    for (int i=0;i<m;i++){
        mp[arr2[i]]++;
    }
    
    for (auto i: mp){
        Union.push_back(i.first);
    }
    return Union;
}
int main(){
    int n;
    cout<<"Enter the size of the 1st array: ";
    cin>>n;

    int arr1[n];
    cout<<"Enter the elements of the 1st array: ";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter the size of the 2nd array: ";
    cin>>m;

    int arr2[m];
    cout<<"Enter the elements of the 2nd array: ";
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    vector<int> UnionArray=FindUnion(arr1,arr2,n,m);
    cout<<"Union of array 1 & array 2 : "<<endl;
    for (int i=0;i<UnionArray.size();i++){
        cout<<UnionArray[i]<<" ";
    }
    cout<<endl;

    return 0;
}