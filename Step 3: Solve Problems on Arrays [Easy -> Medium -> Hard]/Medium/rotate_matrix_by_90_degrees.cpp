#include <iostream>
using namespace std;

// Function to rotate the matrix by 90 degrees
void rotate_matrix(int arr[][100], int n) {
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row to get the final rotated matrix
    for (int i = 0; i < n; i++) {
        int left = 0;
        int right = n - 1;
        while (left < right) {
            swap(arr[i][left], arr[i][right]);
            left++;
            right--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of rows & columns: ";
    cin >> n;

    int arr[100][100]; // Ensure the maximum size is 100x100 for this example
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    rotate_matrix(arr, n);

    cout << "Rotated matrix by 90 degrees: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
