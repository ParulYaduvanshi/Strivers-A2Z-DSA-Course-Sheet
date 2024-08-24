#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev = 0;
    int x=n;   //x here is used to store the original value of n because after reversing the digit n is having 0 as its value.
    while(n>0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    cout<<rev<<endl;

    if (rev==x){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}