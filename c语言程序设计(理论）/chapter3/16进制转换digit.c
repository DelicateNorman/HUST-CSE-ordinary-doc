#include <stdio.h>

int is16number(char c)
{
    return (c >= '0' && c<= '9') || (c >= 'A' && c<= 'F') || (c >= 'a' && c<= 'f');
}
int hex_to_int(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    } else if (ch >= 'a' && ch <= 'f') {
        return ch - 'a' + 10;
    } else if (ch >= 'A' && ch <= 'F') {
        return ch - 'A' + 10;
    }
    return -1; 
}
int main(){
    char c;
    scanf("%c",&c);
    if(is16number(c)){
        int num = hex_to_int(c);
        printf("%d\n",num);

    }else {
        printf("%c",c);
}
    return 0;
}