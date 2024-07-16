#include <iostream>

using namespace std;

int getK(int n)
{
    int c = 0;
    while ((n & (n - 1)) != 0)
    {
        n--;
        c++;
    }

    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << getK(n) << endl;
    }

    return 0;
}