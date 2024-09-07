#include<iostream>
using namespace std;
string reverseEveryWord(string &s){
    int st=0;
    int e=s.size()-1;
    while(st<e){
        swap(s[st++],s[e--]);
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    cout<<reverseEveryWord(s);
    return 0;
}