#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<stack>

using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);

    return ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u';
}
void reverseVowel(string s)
{
    // int l = 0;
    // int h = s.size()-1;

    // while(l<h){
    //     if(isVowel(s[l] && isVowel(s[h]))) {
    //         swap(s[l],s[h]);
    //         l++;
    //         h--;
    //     }else if(isVowel(s[l]) == 0){
    //         l++;
    //     }else{
    //         h--;
    //     }
    // }
     set<char> charSet = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        stack<char> vowels;
        for(auto ch : s){
            if(charSet.find(ch) != charSet.end())
            {
                vowels.push(ch);
            }
        }
        //reverse(vowels.begin(),vowels.end());
        for(int i = 0;i<s.length();i++)
        {
            char ch = s[i];
            if(charSet.find(ch)!=charSet.end())
            {
                s[i]=vowels.top();
                vowels.pop();
            }
        }
    cout<<"Reversed: "<<s;
}
int main()
{
    string s;
    cout<<"Enter your string: ";
    cin>>s;
    reverseVowel(s);
    
    return 0;
}