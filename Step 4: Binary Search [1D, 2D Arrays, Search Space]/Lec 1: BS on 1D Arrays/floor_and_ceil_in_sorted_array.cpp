#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> floor_ceil(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int floor=-1;
    int ceil=-1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            return {arr[mid],arr[mid]};
        }
        else if (arr[mid] < k)
        {
            floor=arr[mid];
            s = mid + 1;
        }
        else
        {
            ceil=arr[mid];
            e = mid - 1;
        }
    }
    return {floor,ceil};
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

    vector<int> result = floor_ceil(arr, n, k);    
    cout << "Floor: " << (result[0] == -1 ? "None" : to_string(result[0])) << endl;
    cout << "Ceil: " << (result[1] == -1 ? "None" : to_string(result[1])) << endl;

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int findFloor(int arr[], int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] <= x) {
			ans = arr[mid];
			//look for smaller index on the left
			low = mid + 1;
		}
		else {
			high = mid - 1; // look on the right
		}
	}
	return ans;
}

int findCeil(int arr[], int n, int x) {
	int low = 0, high = n - 1;
	int ans = -1;

	while (low <= high) {
		int mid = (low + high) / 2;
		// maybe an answer
		if (arr[mid] >= x) {
			ans = arr[mid];
			//look for smaller index on the left
			high = mid - 1;
		}
		else {
			low = mid + 1; // look on the right
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	int f = findFloor(arr, n, x);
	int c = findCeil(arr, n, x);
	return make_pair(f, c);
}

int main() {
	int arr[] = {3, 4, 4, 7, 8, 10};
	int n = 6, x = 5;
	pair<int, int> ans = getFloorAndCeil(arr, n, x);
	cout << "The floor and ceil are: " << ans.first
	     << " " << ans.second << endl;
	return 0;
}
*/