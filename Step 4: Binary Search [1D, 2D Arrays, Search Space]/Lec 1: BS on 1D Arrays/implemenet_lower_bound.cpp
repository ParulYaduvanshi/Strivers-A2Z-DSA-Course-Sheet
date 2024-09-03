#include <iostream>
using namespace std;
int lower_bound(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int ans=n;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= k)
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s = mid + 1;
        }
        
    }
    return ans;
}
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

    int k;
    cout << "Enter the element to search: ";
    cin >> k;

    int ans = lower_bound(arr, n, k);
    cout<<"Lower Bound is at the index: "<<ans<<endl;

    return 0;
}