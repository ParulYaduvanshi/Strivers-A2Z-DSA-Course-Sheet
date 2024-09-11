#include<iostream>
using namespace std;
string reverseString(string str,int n){
    if (n==0) return "";
    return str[n-1]+reverseString(str,n-1);
}
int main(){
    // string str="ABCDEDCBA";
    string str="ABCDEDCBAb";

    int n=str.size();
    string result= reverseString(str,n);

    if (str==result){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}