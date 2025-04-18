#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <sstream>

using namespace std;

string StarRating(string str)
{

    // code goes here
    double rating = stod(str);
    rating = round(rating * 2) / 2;
    vector<string> stars;
    int fstars = static_cast<int>(rating);
    bool hasHalf = (rating - fstars) >= 0.5;

    for (int i = 0; i < 5; ++i)
    {
        if (i < fstars)
        {
            stars.push_back("full");
            // cout<<"full"<<" ";
        }
        else if (i == fstars && hasHalf)
        {
            stars.push_back("half");
            // cout<<"half"<<" ";
        }
        else
        {
            stars.push_back("empty");
            // cout<<"empty";
        }
    }
    string res;
    for (auto str : stars)
    {
        // cout<<str<<" ";
        res += str;
        res.append(" ");
    }
    return res;
}

// keep this function call here
int main(void)
{

    cout << StarRating(coderbyteInternalStdinFunction(stdin));
    return 0;
}