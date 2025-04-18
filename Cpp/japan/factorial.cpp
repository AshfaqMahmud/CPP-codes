#include <iostream>
#include <string>
#include <unordered_map>
typedef unsigned long long ull;
using namespace std;

unordered_map<int, ull> factCache;

ull FirstFactorial(int num)
{

    // code goes here
    if (num == 0 || num == 1)
        return 1;

    if (factCache.find(num) != factCache.end())
    {
        return factCache[num];
    }

    ull result = num * FirstFactorial(num - 1);
    factCache[num] = result;
    return result;
}

// keep this function call here
int main(void)
{

    cout << FirstFactorial(coderbyteInternalStdinFunction(stdin));
    return 0;
}