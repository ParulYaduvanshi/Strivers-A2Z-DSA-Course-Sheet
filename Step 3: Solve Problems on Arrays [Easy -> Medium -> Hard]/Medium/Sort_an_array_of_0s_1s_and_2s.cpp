#include <iostream>
using namespace std;
void sortColors(int arr[],int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    sortColors(arr,n);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// bubble sort 
// leetcode question -> 75.sort colors