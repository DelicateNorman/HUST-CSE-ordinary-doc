#include <stdio.h>
#include <math.h>
int main(void)
{
    int N;
    scanf("%d",&N);
    for( int i=1 ; i*i<=N ; i++)
    {
        int a=i*i;
        for(int b=1;b<i;b++){
            int b2=b*b*10;
            if(b2>=a){
                break;
            }
            int c2=a-b2;
            int c = sqrt(c2);
            if (c*c == c2){
                printf("%d ",a);
                break;
            }
        }

    }
	return 0;
}
