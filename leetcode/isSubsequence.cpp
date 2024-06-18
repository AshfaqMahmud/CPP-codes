#include<iostream>
#include<string>

using namespace std;

bool isSubsequence(string s, string t) {
        bool res;
        int i =0;
        int j =0;
        while(j<t.length())
        {
            if(s[i] == t[j])
            {
                i++;
            }
            j++;
        }
        i==s.length()? res= true : res= false;

        return res;
    }

int main(){
    
    string s,t;
    cout<<"Enter string(s): ";
    cin>>s;
    cout<<"Enter string(t): ";
    cin>>t;

    cout<<isSubsequence(s,t);

    return 0;
}