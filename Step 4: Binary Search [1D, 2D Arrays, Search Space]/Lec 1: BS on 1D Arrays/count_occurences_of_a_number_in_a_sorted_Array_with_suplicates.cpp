#include <iostream>
#include <vector>
#include<map>
using namespace std;
/*
int first_occurence(vector<int> &arr, int n, int k)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int last_occurence(vector<int> &arr, int n, int k)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int Occurence(vector<int> &arr, int n, int k)
{
    int a = first_occurence(arr, n, k);
    int b = last_occurence(arr, n, k);
    int occurences=b-a+1;
    return occurences;
}
*/
// this code is partially accepted whereas the above code is completely accepted.
int Occurence(vector<int> &arr,int n,int k){
    map<int,int> mp;
    for (auto i:arr){
        mp[i]++;
    }

    for (auto i:mp){
        if (i.first==k){
            return i.second;
        }
    }
    return 0;

}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the element to find first & last occurence: ";
    cin >> k;

    int result = Occurence(arr, n, k);
    cout<<result;

    return 0;
}

// here we've initially found out the first occurence index of an element in a sorted array.
// then we've found out the last ocucrence .
// & then we've done last-first+1. we've added +1 as it's 0-indexed array.
// reminder: we can also use map to count the number of occurences.