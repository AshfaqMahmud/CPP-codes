#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;

bool isVowel(char c)
{
    static const unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    return vowels.find(tolower(c)) != vowels.end();
}

char shiftChar(char c)
{
    if (!isalpha(c))
        return c;
    char base = islower(c) ? 'a' : 'A';
    return (c - base + 1) % 26 + base;
}

string LetterChanges(string str)
{

    // code goes here
    string output;
    for (char c : str)
    {
        char shifted = shiftChar(c);
        if (isVowel(shifted))
        {
            shifted = toupper(shifted);
        }
        output += shifted;
    }

    return output;
}

// keep this function call here
int main(void)
{

    cout << LetterChanges(coderbyteInternalStdinFunction(stdin));
    return 0;
}