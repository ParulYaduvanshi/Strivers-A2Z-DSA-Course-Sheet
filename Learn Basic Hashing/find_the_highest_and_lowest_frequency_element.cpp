#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    map<int, int> mp;
    for (auto i : arr)
    {
        mp[i]++;
    }

    cout << "Frequency of elements: " << endl;
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
    // to get the highest & lowest frequency element
    int max_freq = 0, min_freq = n;
    for (auto i : mp) 
    {
        max_freq = max(max_freq, i.second);
        min_freq = min(min_freq, i.second);
    }
    cout << "Maximum Frequency: " << max_freq << endl;
    cout << "Minimum Frequency: " << min_freq << endl;

    return 0;
}