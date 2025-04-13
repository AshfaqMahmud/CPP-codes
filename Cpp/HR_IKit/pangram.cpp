#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> letter;
    for (char ch : s)
    {
        if (isalpha(ch))
            letter.insert(ch);
    }
    if (letter.size() == 26)
        return "pangram";
    return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
