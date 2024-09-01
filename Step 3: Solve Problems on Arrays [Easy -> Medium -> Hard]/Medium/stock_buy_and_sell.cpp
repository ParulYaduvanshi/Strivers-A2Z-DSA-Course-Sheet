#include<iostream>
#include<vector>
using namespace std;
int max_profit(vector<int>& arr){
    /*
    int n=arr.size();
    int maxpro=0;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[j]>arr[i]){
                maxpro=max(arr[j]-arr[i],maxpro);
            }
        }
    }
    return maxpro;
    */

    int maxPro = 0;
    int n = arr.size();
    int minPrice = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    
    return maxPro;


}
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int profit=max_profit(arr);
    cout<<"Max Profit : "<<profit;

    return 0;
}