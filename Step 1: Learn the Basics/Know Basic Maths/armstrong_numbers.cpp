#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp=n;
    int sum=0;
    while(n>0)
    {
        int last_digit=n%10;
        sum+=last_digit*last_digit*last_digit;
        n=n/10;
    }

    if (sum==temp){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }
    return 0;
}