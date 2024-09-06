#include<iostream>
using namespace std;
bool rotateString(string s, string goal) {
    if (s.length()!=goal.length()){
        return false;
    }

    string doubled_s=s+s;
    int n=goal.length();
    for (int i=0;i<doubled_s.length()-n;i++){
        if (doubled_s.substr(i,n)==goal){
            return true;
        }
    }
    return false;
}
int main(){
    string s,goal;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"Enter the goal string: ";
    cin>>goal;

    if(rotateString(s,goal)){
        cout<<"The strings are rotations of each other"<<endl;
    }
    else{
        cout<<"The strings are not rotations of each other"<<endl;
    }

    return 0;
}