#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "Not Prime";
        return 0;
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     bool flag=true;

//      if (n <= 1) {
//         cout << "Not Prime";
//         return 0;
//     }

//     for (int i=2;i<=n;i++){
//         if (n%i==0){
//             flag=false;
//             break;
//         }
//     }
//     if (flag) cout<<"Prime";
//     else cout<<"Not Prime";
//     return 0;
// }