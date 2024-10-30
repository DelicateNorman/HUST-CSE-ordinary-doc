 #include <stdio.h>
 
 int digit(int n, int k)//定义一个函数读出整数n的第k位数字
{
    int temp,count,i,m; //定义一个中间变量temp和m
    i=1;
    count=0;
    m=n;
    while(m!=0){
        m/=10;
        count++;
    }//统计整数n的位数count
    while(i<=k && n!=0)
    {
        temp=n%10;
        n/=10;
        i++;
    }//读出第k位数字temp
    if(i>count) return -1;
    return temp;
    
 }
 int main(void)
 {
     int n,k;
     
     scanf("%d%d", &n, &k);
     printf("%d", digit(n,k));
     return 0;
 }