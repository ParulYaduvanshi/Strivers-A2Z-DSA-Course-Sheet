#include<iostream>
#include<stack>
using namespace std;

string reverse_words(string s) {
    stack<string> st;
    string word = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else if (!word.empty()) {
            st.push(word);
            word = "";
        }
    }
    if (!word.empty()) {
        st.push(word);
    }

    string reversed_string = "";
    while (!st.empty()) {
        reversed_string += st.top();
        st.pop();
        if (!st.empty()) {
            reversed_string += " ";
        }
    }
    
    return reversed_string;
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    string result = reverse_words(s);
    cout << "Reversed words string: " << result << endl;
    return 0;
}
