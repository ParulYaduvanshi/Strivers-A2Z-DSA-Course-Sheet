#include <iostream>
#include <bits/stdc++.h>
#include<climits>
using namespace std;
// optimal solution
vector<int> leaders(vector<int> &arr,int n){
    vector<int> ans;
    int maxSoFar=INT_MIN;

    for (int i=n-1;i>0;i--){
        if (arr[i]>maxSoFar){
            ans.push_back(arr[i]);
            maxSoFar=arr[i];
        }
    }

    // reverse(ans.begin(),ans.end());  //optional step depending upon the output whether the output is in ascending or descending order.
    return ans;
    // time complexity -> O(n)
    // space complexity -> O(1)
    // if we sort the array then the time complexity is O(n log n)
}
/*
// Brute Force Approach
vector<int> leaders(vector<int> &arr, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j=i+1;j<n;j++){
            if (arr[j]>arr[i]){
                leader=false;
                break;
            }
        }
        if (leader)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
*/
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> result = leaders(arr, n);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}