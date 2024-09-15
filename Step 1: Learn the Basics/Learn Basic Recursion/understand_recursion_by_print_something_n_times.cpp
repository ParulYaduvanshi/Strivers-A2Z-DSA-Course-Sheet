#include<iostream>
using namespace std;
void print(int count){
    for (int i=0;i<=5;++i){
        cout<<count<<endl;
        count++;
    }
}
int main(){
    int count=0;
    print(count);

    return 0;

}