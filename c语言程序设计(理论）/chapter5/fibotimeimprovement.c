#include <stdio.h>
long F(int n)
{
    if (n <= 2) return 1;
    long a=1,b=1,c;
    for (int i=3;i<=n;i++)
    {
        c= a + b;
        a = b;
        b = c;
    }
    return c;
}//这么定义斐波那契数列可以避免重复计算