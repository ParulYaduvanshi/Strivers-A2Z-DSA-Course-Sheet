#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool anagrams(string s1, string s2){
    map<char,int> mp1,mp2;
    if (s1.length()!=s2.length()){
        return false;
    }
    for (int i=0;i<s1.length();i++){
        mp1[s1[i]]++;
        mp2[s2[i]]++;
    }
    
    return mp1==mp2;
}
int main(){
    string s1,s2;
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"Enter the second string: ";
    cin>>s2;

    if(anagrams(s1,s2)){
        cout<<"The strings are anagrams of each other"<<endl;
    }
    else{
        cout<<"The strings are not anagrams of each other"<<endl;
    }

    return 0;
}