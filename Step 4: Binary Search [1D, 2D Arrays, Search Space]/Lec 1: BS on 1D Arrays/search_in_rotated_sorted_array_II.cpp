#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &arr, int n, int k) {
    int s = 0;
    int e = n - 1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == k) {
            return true;
        }
        
        // Edge case for handling duplicates
        if (arr[s] == arr[mid] && arr[mid] == arr[e]) {
            s++;
            e--;
        }
        // Check if the left half is sorted
        else if (arr[s] <= arr[mid]) {
            // If the target is within the sorted left half
            if (arr[s] <= k && k < arr[mid]) {
                e = mid - 1;
            } else { // Target must be in the right half
                s = mid + 1;
            }
        }
        // Otherwise, the right half must be sorted
        else {
            // If the target is within the sorted right half
            if (arr[mid] < k && k <= arr[e]) {
                s = mid + 1;
            } else { // Target must be in the left half
                e = mid - 1;
            }
        }
    }
    
    return false;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the element to search: ";
    cin >> k;

    bool ans = search(arr, n, k);
    cout << (ans ? "Element found" : "Element not found") << endl;

    return 0;
}
