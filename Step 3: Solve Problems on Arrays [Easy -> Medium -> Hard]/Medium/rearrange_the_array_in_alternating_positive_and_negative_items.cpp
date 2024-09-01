#include<iostream>
#include<vector>
using namespace std;
vector<int> rearrange(vector<int>& arr){
    int n=arr.size();
    vector<int> pos, neg;
    for (int i=0;i<n;i++){
        if (arr[i]<0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }

    int i=0,j=0;
    vector<int> result;
    while(i< pos.size() && j<neg.size()){
        result.push_back(pos[i++]);
        result.push_back(neg[j++]);
    }


    /*
    // In case there are remaining elements in pos or neg
    while (i < pos.size()) {
        result.push_back(pos[i++]);
    }
    while (j < neg.size()) {
        result.push_back(neg[j++]);
    }
    */

   return result;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans=rearrange(arr);
    for (int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}