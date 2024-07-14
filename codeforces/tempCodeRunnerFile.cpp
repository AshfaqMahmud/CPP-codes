#include<iostream>

using namespace std;

int main(){
    int a,x,y;
    int res;
    cin>>a>>x>>y;
    if(x<a && y<a){
        res = 0;
    }else if(x==a && y==a){
        res = 1;
    }
    else{
        res = 2;
    }

    return res;
}