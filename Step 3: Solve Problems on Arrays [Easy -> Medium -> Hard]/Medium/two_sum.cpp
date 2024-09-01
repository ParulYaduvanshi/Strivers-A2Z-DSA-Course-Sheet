#include <iostream>
using namespace std;
void two_sum(int arr[], int n, int target)
{
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (sum == target)
            {
                flag = true;
                // cout << "[ " << arr[i] << " , " << arr[j] << " ]" << endl;   // to print the values of the array whose sum is equal to target.
                cout << "[ " << i << " , " << j << " ]" << endl;
            }
        }
        
    }
    if (!flag)
        {
            cout << "Target sum not found." << endl;
        }
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

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    two_sum(arr, n, target);

    return 0;
}