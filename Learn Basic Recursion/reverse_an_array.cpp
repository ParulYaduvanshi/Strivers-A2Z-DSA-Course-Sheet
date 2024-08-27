#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    if (n==0) return;
    cout<<arr[n-1]<<" ";
    reverseArray(arr,n-1);
}
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    reverseArray(arr,n);
    return 0;
}



/*
reversing an integer value
#include<iostream>
using namespace std;
void reverse(int n){
    if (n==0) return;
    cout<<n%10;
    reverse(n/10);
}
int main(){
    int n;
    cin>>n;
    if (n==0){
        cout<< 0;
    }
    else{
        reverse(n);
    }
    
    return 0;
}



reversing a string 
#include<iostream>
using namespace std;
void reverseString(string str,int n){
    if (n==0) return;
    cout<<str[n-1];
    reverseString(str,n-1);
}
int main(){
    int n=5;
    string str="ABCDE";
    reverseString(str,n);
    return 0;
}
*/