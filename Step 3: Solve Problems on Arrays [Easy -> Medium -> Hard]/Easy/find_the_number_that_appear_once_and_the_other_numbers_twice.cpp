#include<iostream>
#include<map>
#include<vector>

using namespace std;
void appearance(vector<int>& arr,int n){
    map<int , int> mp;

    // this loop works on vectors & not on arrays.
    for (auto i: arr){
        mp[i]++;
    }
    for (auto i:mp){
        if (i.second==1){
            cout<<"The number which appeared once in the array is "<<i.first<<endl;
        }
    }

}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    appearance(arr,n);

    return 0;
}