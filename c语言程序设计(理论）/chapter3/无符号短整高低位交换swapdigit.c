/*#include <stdio.h>
unsigned short k=61440;
int main (void) 
{
unsigned short x;
x=(((k>>4)<<8)>>4|(k<<12)|(k>>12));
printf("%hu",x);
return 0;
} 这里是错误的代码，如果想知道为什么错了，可以试着printf一下(k>>4)<<8)>>4 */
#include <stdio.h>

int main (void) 
{
  unsigned short k,x;
  scanf("%hu",&k);
  x = ( (k&0xF000)>>12 | (k&0x000F)<<12 | k&0x0FF0 );//第一个式子表示留下前四位，移到最后四位；第二个式子表示把后四位移到前四位；第三个式子表示留下中间八位
  printf("%hu",x);
  return 0;
} 