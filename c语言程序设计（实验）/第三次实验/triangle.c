#include <stdio.h>

int main()
{
    int i,j,count,number;//number为输入的行数，count用来计算组合数
    scanf("%d",&number);
	for(i=0;i<=number;i++)
    {  
	    for (j = 0; j < 3*number-2*i; j++)//为什么是3number-2i？第n行开头要有n个空格，每上面一行要多两个，所以应该是3number-2i
        {
            printf(" ");
        }
        count=1;
       for(j=0;j<=i;j++)
       {
        printf("%-4d",count);//%-4d表示左对齐，占4个字符，不够用空格补齐
        count=count*(i-j);
        count/=(j+1); //这里不可以直接照搬公式，需要进行一定的修改
       }


        printf("\n");
    }
	
    return 0;
}