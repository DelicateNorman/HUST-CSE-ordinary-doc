#include <stdio.h>
int main()
{
    int a,b,c,d,r;
    scanf("%d %d",&a,&b);
    c = a;
    d = b;
    while(b!=0)
    {
        r= a %b;
        a=b;
        b=r;
    }
    int multiple=c*d/a;
    printf("%d %d",a,multiple);
    return 0;
}