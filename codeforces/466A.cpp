#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // int n,m,a,b;
    // cin>>n>>m>>a>>b;
    // vector<int>res;
    // int f = floor(n/m);
    // for(int i=0; i<=f; ++i){
    //     int tmp = (n-i*m)*a + i*m*b;
    //     res.push_back(tmp);
    // }
    // sort(res.begin(),res.end());
    // //int res = f*(n*a - ((m*(f+1))/2)*(b-a));
    // cout<<res.front();
    // return 0;
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    
    // Calculate cost using only single tickets
    int cost_single_tickets = n * a;
    
    // Calculate cost using only group tickets
    int cost_only_group_tickets = ((n + m - 1) / m) * b; // Ceiling of n/m multiplied by b
    
    // Calculate cost using a combination of group and single tickets
    int cost_mix = (n / m) * b + (n % m) * a;
    
    // Find the minimum cost
    int min_cost = min({cost_single_tickets, cost_only_group_tickets, cost_mix});
    
    cout << min_cost << endl;
    
    return 0;
}