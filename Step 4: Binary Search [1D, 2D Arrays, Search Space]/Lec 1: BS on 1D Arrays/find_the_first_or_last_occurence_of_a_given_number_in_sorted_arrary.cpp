#include <iostream>
#include <vector>
using namespace std;
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
vector<int> searchRange(vector<int> &arr, int n, int k)
{
    int a = first_occurence(arr, n, k);
    int b = last_occurence(arr, n, k);
    return {a, b};
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

    vector<int> result = searchRange(arr, n, k);
    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}