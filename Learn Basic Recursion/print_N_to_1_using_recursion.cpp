#include <iostream>
using namespace std;

void func(int i, int n) {
    // base condition
    if (i < n) return;
    cout << i << endl;
    func(i - 1, n);
}

int main() {
    int i = 4, n = 1;
    func(i, n);
    return 0;
}
