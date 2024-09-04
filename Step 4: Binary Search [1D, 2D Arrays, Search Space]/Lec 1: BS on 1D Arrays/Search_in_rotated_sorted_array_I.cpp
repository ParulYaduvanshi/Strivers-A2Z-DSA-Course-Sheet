#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &arr,int n,int k){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if (arr[mid]==k){
            return mid;
        }
        //Edge case-> in case of duplicate values:
        if (arr[s] == arr[mid] && arr[mid] == arr[e]) {
            s++;
            e--;
            continue;
        }
        // right part
        else if (arr[mid]<k){
            if (k<=arr[e] && arr[s]<=k){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        // left part
        else{
            if (k>=arr[s] && arr[e]>=k){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
    }
    return -1;
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

    int k;
    cout<<"Enter the element to search: ";
    cin>>k;

    cout<<search(arr,n,k);

    return 0;
}