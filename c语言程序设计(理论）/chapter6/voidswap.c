#include <stdio.h>
void swap(int *a,int *b)//使用void函数但是又想要实现swap，那么必须使用指针哦
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

