#include <stdio.h>
int main()
{
    double piof4;
    double pi;
    piof4=0;
for(int i=1;i<50001;i++)
{
    int k=i%2;
    double m=1.0/(2*i-1);
    if( k==1)

        piof4 +=  m;
    else
        piof4 -= m;
        
 
}


    pi=4.0*piof4;
    printf("%f",pi);
    return 0;
}
