#include<iostream>
using namespace std;

long long fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci (n-2);
}

int main()
{
    while(1){
        int x;
        cout<<"Enter your number: ";
        cin>>x;
        cout<<fibonacci(x)<<endl;
    }

    return 0;
}