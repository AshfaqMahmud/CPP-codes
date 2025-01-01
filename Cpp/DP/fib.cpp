#include<iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

class Solution {
    unordered_map<long int, long int> memo;

public:
    int fib(long n) {
        if (memo.find(n) != memo.end())
            return memo[n];
        if (n == 0)
            return 0;
        if (n != 0 && n <= 2)
            return 1;
        memo[n] = fib(n - 1) + fib(n - 2);
        return memo[n];
    }
};

int main()
{
	Solution s;
	cout<<s.fib(20)<<endl;
    cout<<s.fib(21)<<endl;
    cout<<s.fib(20)+s.fib(21)<<endl;
    cout<<s.fib(22)<<endl;
	return 0;
}

/*
00401460 <_main>:
  401460:       8d 4c 24 04             lea    0x4(%esp),%ecx
  401464:       83 e4 f0                and    $0xfffffff0,%esp
  401467:       ff 71 fc                pushl  -0x4(%ecx)
  40146a:       55                      push   %ebp
  40146b:       89 e5                   mov    %esp,%ebp
  40146d:       53                      push   %ebx
  40146e:       51                      push   %ecx
  40146f:       83 ec 30                sub    $0x30,%esp
  401472:       e8 69 06 00 00          call   401ae0 <___main>
  401477:       8d 45 dc                lea    -0x24(%ebp),%eax
  40147a:       89 c1                   mov    %eax,%ecx
  40147c:       e8 27 29 00 00          call   403da8 <__ZN8SolutionC1Ev>
  401481:       8d 45 dc                lea    -0x24(%ebp),%eax
  401484:       c7 04 24 32 00 00 00    movl   $0x32,(%esp)
  40148b:       89 c1                   mov    %eax,%ecx
  40148d:       e8 2e 28 00 00          call   403cc0 <__ZN8Solution3fibEi>
  401492:       83 ec 04                sub    $0x4,%esp
  401495:       89 04 24                mov    %eax,(%esp)
  401498:       b9                      .byte 0xb9
*/