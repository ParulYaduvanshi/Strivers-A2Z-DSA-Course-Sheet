#include <iostream>
#include <map>
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
    return 0;
}