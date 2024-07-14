#include<iostream>
using namespace std;

void swap(int &x, int &y){
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<"values before swapping\nx: "<<x<<" y: "<<y<<endl;
    swap(x,y);
    cout<<"values after swapping\nx: "<<x<<" y: "<<y<<endl;

    return 0;
}