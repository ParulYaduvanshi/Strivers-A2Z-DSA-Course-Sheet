#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];
    int second_max=INT_MIN;
    for (int i=1;i<n;i++){
        if (arr[i]>max){
            second_max=max;
            max=arr[i];
        }
        else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    cout<<"Second Largest Element: "<<second_max<<endl;
    return 0;
}