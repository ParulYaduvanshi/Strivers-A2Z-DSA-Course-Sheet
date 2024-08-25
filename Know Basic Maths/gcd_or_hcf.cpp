#include<iostream>
using namespace std;
int gcd(int a, int b){
    if (b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b;
    cout<<"Enter the value of a & b: ";
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<ans;
    return 0;
}