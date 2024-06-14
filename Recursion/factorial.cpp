#include <iostream>

using namespace std;

long long factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    while (1)
    {
        int value;
        cout<<"Enter number: ";
        cin >> value;

        cout << factorial(value)<<endl;
    }

    return 0;
}