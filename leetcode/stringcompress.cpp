#include<bits/stdc++.h>
using namespace std;

// int compress(vector<char>& chars) {
//         int writeIdx = 0;
//         for (int i = 0; i < chars.size(); i++) {
//             int count = 1;
//             while (i + 1 < chars.size() && chars[i] == chars[i + 1]) {
//                 count++;
//                 i++;
//             }
//             chars[writeIdx++] = chars[i];
//             if (count > 1) {
//                 string countStr = to_string(count);
//                 for (char c : countStr) {
//                     chars[writeIdx++] = c;
//                 }
//             }
//         }
//         return writeIdx;
//     }

int compress(vector<char>& chars) {
        int i = 0, ansIndex = 0;
        int n = chars.size();

        while (i < n) {
            int j = i + 1;
            while (j < n && chars[i] == chars[j])
                j++;

            chars[ansIndex++] = chars[i];
            int cnt = j - i;

            if (cnt > 1) {
                // converting count into single digit and saving in answer
                string c = to_string(cnt);
                for (char ch: c)
                    chars[ansIndex++] = ch;
            }

            i = j;
        }

        return ansIndex;
    }

int main(){
    vector<char> chars = {'a','a','b','b','b','c','c'};
    
    cout<<compress(chars);
}