class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> resultStack;
        string currentString = "";
        int k = 0;
        
        for (char ch : s) {
            if (isdigit(ch)) {
                k = k * 10 + (ch - '0'); 
            } else if (ch == '[') {
                
                countStack.push(k);
                resultStack.push(currentString);
                
                k = 0;
                currentString = "";
            } else if (ch == ']') {
                
                int repeatTimes = countStack.top();
                countStack.pop();
                string decodedString = resultStack.top();
                resultStack.pop();
                
                for (int i = 0; i < repeatTimes; ++i) {
                    decodedString += currentString;
                }
                
                currentString = decodedString;
            } else {
                currentString += ch; 
            }
        }
        
        return currentString;
    }
};