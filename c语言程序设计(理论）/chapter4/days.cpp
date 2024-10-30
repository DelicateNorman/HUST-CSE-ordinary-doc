#include <stdio.h>
int main()
{
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	int totaldays=day;
	int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i=0;i < month - 1 ;i++)
	{
		totaldays +=days[i];
	}
	if(month > 2 && !(year%4)&&year%100||!(year%400)){
		totaldays++;
	}
	printf("%d",totaldays);
	return 0;
	
 } 
