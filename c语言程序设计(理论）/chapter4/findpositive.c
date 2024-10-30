#include <stdio.h> 
#include <stdbool.h>

bool containsfive(int number)
{
    while(number != 0)
    {
        if(number % 10 == 5){
            return true;
        }
        number /= 10;
    }
    return false;
}

  int main(void)
{
    int count =0;
    int number[10];
    bool found =false;
    scanf("%d %d %d %d %d %d %d %d %d %d", &number[0],&number[1],&number[2],&number[3],&number[4],&number[5],&number[6],&number[7],&number[8],&number[9]);
    while(count < 10)
    {
        if(containsfive(number[count]) && number[count] < 10000 && number[count]%7 == 0 )
        {
            printf("%d ", number[count]);
            found = true;
        }
        count++;
    }
    if(found == false)
    {
        printf("0");
    }
    
	return 0;
}  
