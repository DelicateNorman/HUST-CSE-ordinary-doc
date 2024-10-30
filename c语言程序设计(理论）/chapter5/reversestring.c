#include <stdio.h>
#include <string.h>

void reversestring(char *str,int start,int end)//为什么使用指针变量？因为函数需要修改传入的原始字符串
{
    if(start>=end) return;
    char temp = str[start];//定义一个中间变量方便转换
    str[start]=str[end];
    str[end]=temp;

    reversestring(str,start+1,end-1);//递归调用
}

int main()
{
    char input[256];
    fgets(input,sizeof(input),stdin);//注意一下fgets函数的使用，这个函数对于开头有空格的字符串输入有很大的用处哦
    input[strcspn(input,"\n")] = '\0';//添加终止符
    reversestring(input,0,strlen(input)-1);
    printf("%s",input);
    return 0;
}