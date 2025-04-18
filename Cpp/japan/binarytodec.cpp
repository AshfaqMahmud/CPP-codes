#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int BinaryConverter(string str)
{

    // code goes here
    int decimal = 0;
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        char c = str[i];
        if (c == '0' || c == '1')
        {
            int bit = c - '0';
            decimal += bit * pow(2, length - 1 - i);
        }
    }
    return decimal;
}

// keep this function call here
int main(void)
{

    cout << BinaryConverter(coderbyteInternalStdinFunction(stdin));
    return 0;
}