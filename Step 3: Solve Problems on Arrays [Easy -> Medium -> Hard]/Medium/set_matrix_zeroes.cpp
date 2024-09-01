#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> setMatrixZeroes(vector<vector<int>> &matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int col[m]={0};
    int row[n]={0};
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (row[i] || col[j]){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> matrix(n,vector<int>(m));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    setMatrixZeroes(matrix);
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}