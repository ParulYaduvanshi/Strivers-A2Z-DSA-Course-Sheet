#include <iostream>
#include <vector>
using namespace std;

vector<int> spiral_order(vector<vector<int>>& matrix) {
    vector<int> ans;
    if (matrix.size() == 0) return ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    // index initialization
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total) {
        // print first row from left to right
        for (int i = startingCol; i <= endingCol && count < total; i++) {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // print last column from top to bottom
        for (int i = startingRow; i <= endingRow && count < total; i++) {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        // print last row from right to left
        for (int i = endingCol; i >= startingCol && count < total; i--) {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // print first column from bottom to top
        for (int i = endingRow; i >= startingRow && count < total; i--) {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter row size: ";
    cin >> n;
    cout << "Enter column size: ";
    cin >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiral_order(matrix);
    cout << "Spiral Order: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
