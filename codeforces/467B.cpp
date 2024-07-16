/*B. Fedor and New Game
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
After you had helped George and Alex to move in the dorm, they went to help their friend Fedor play a new computer game «Call of Soldiers 3».

The game has (m + 1) players and n types of soldiers in total. Players «Call of Soldiers 3» are numbered form 1 to (m + 1). Types of soldiers are numbered from 0 to n - 1. Each player has an army. Army of the i-th player can be described by non-negative integer xi. Consider binary representation of xi: if the j-th bit of number xi equal to one, then the army of the i-th player has soldiers of the j-th type.

Fedor is the (m + 1)-th player of the game. He assume that two players can become friends if their armies differ in at most k types of soldiers (in other words, binary representations of the corresponding numbers differ in at most k bits). Help Fedor and count how many players can become his friends.

Input
The first line contains three integers n, m, k (1 ≤ k ≤ n ≤ 20; 1 ≤ m ≤ 1000).

The i-th of the next (m + 1) lines contains a single integer xi (1 ≤ xi ≤ 2n - 1), that describes the i-th player's army. We remind you that Fedor is the (m + 1)-th player.

Output
Print a single integer — the number of Fedor's potential friends.*/

#include<iostream>
#include<vector>

using namespace std;

int countSetBits(int n){
    int count=0;
    while(n!=0){
        count += n & 1;
        n=n>>1;
    }
    if(n==1) count++;

    return count;
}

int getArmyNumber(int x){
    int count = 0;
    int tmp = x;
    while (tmp!=0)  
    {
        if(tmp & 1){
            count++;
            tmp >> 1;
        }
    }
    return count;
}
int main(){

    int n,m,k;
    cin>>n>>m>>k;
    vector<int>players;
    
    for(int i=0; i<=m; ++i){
        int x;
        cin>>x;
        players.push_back(x);         //takin x(i) army input for iTh player
    }
    int fedor=players.back();         //taking fedor's player count
    int friends=0;

    for(int i=0;i<m;++i){
        int other=players[i];
        if( countSetBits(fedor ^ other) <= k){
            friends++;
        }
    }

    cout<<friends;

    return 0;
}