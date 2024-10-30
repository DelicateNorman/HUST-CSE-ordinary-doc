#include <stdio.h>
#include <time.h>
long F(int n) {
    if(n==1||n==2)
        return 1;
    else
        return F(n-1)+F(n-2);//递归调用，不过注意一下，此时这两个函数又会计算,导致时间复杂度为O(2^n)
}

int main()
{
    int n;
    clock_t start,end;//使用time.h中的函数来计算程序计算的时间
	double cpu_time_used;
	start = clock();//在输出前计时
    scanf("%d",&n);
    printf("%ld",F(n));
	end =clock();//在输出后计时
	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("\nTime taken: %f seconds", cpu_time_used);
    return 0;
}