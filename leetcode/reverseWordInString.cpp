string reverseWords(string s) {
        int n = s.size();
        int start = 0;
        while(start<n && s[start]==' ') start++;
        int end = n-1;
        while(end>=0 &&s[end] == ' ') end--;
        if(start>end) return "";

        vector<string> words;
        string cha;
        for(int i = start; i<=end; ++i){
            if(s[i]!=' '){
                cha += s[i];
            }else if(!cha.empty() && s[i] == ' '){
                words.push_back(cha);
                cha.clear();
            }
        }

        if (!cha.empty()){
            words.push_back(cha);
        }

        int wcount = words.size();
        string result;
        for(int i = wcount-1; i>=0; --i){
            result += words[i];
            if(i!=0){
                result += ' ';
            }
        }

        return result;
    }


    /*
    
Code
Testcase
Testcase
Test Result
151. Reverse Words in a String
Solved
Medium
Topics
Companies
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.*/