#include<stdio.h>

int main()
{
    int b = 4;
    int a = (b=5,6);
    printf("Value of a %d, b %d %d\n",a,b,b=3);
    return 0;
}


/*
00401460 <_main>:
  401460:       55                      push   %ebp
  401461:       89 e5                   mov    %esp,%ebp
  401463:       83 e4 f0                and    $0xfffffff0,%esp
  401466:       83 ec 20                sub    $0x20,%esp
  401469:       e8 82 05 00 00          call   4019f0 <___main>
  40146e:       c7 44 24 1c 04 00 00    movl   $0x4,0x1c(%esp)
  401475:       00
  401476:       c7 44 24 1c 05 00 00    movl   $0x5,0x1c(%esp)
  40147d:       00
  40147e:       c7 44 24 18 06 00 00    movl   $0x6,0x18(%esp)
  401485:       00
  401486:       c7 44 24 1c 03 00 00    movl   $0x3,0x1c(%esp)
  40148d:       00
  40148e:       8b 44 24 1c             mov    0x1c(%esp),%eax
  401492:       89 44 24 0c             mov    %eax,0xc(%esp)
  401496:       8b 44 24 1c             mov    0x1c(%esp),%eax
  40149a:       89 44 24 08             mov    %eax,0x8(%esp)
  40149e:       8b 44 24 18             mov    0x18(%esp),%eax
  4014a2:       89 44 24 04             mov    %eax,0x4(%esp)
  4014a6:       c7 04 24 64 50 40 00    movl   $0x405064,(%esp)
  4014ad:       e8 de 25 00 00          call   403a90 <_printf>
  4014b2:       b8 00 00 00 00          mov    $0x0,%eax
  4014b7:       c9                      leave
  4014b8:       c3                      ret
  4014b9:       90                      nop
  4014ba:       90                      nop
  4014bb:       90                      nop
  4014bc:       66 90                   xchg   %ax,%ax
  4014be:       66 90                   xchg   %ax,%ax

*/