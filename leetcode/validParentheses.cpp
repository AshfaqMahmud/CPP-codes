#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> brackets = {{')', '('}, {'}', '{'}, {']', '['}};
    
    for (char c : s) {
        if (brackets.count(c)) {
            if (st.empty() || st.top() != brackets[c]) {
                return false;
            }
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.empty();
}

int main() {
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;

    if (isValid(s)) {
        cout << "The string has valid parentheses." << endl;
    } else {
        cout << "The string has invalid parentheses." << endl;
    }

    return 0;
}