#include <stdio.h>
void scanmatrix(int array[][4],int starthang,int startlie,int hang,int lie)
{
  if(starthang>=hang||startlie>=lie) return;
  for(int i=startlie;i<lie;i++)
  {
    printf("%d ",array[starthang][i]);
  }
  for(int i=starthang+1;i<hang;i++)
  {
    printf("%d ",array[i][lie-1]);
  }
  if(starthang<hang-1){
    for(int i=lie-2;i>=startlie;i--)
    {
        printf("%d ",array[hang-1][i]);
    }
  }
  if(startlie<lie-1)
  {
    for(int i=hang-2;i>starthang;i--)
    {
        printf("%d ",array[i][startlie]);
  }
}
  scanmatrix(array,starthang+1,startlie+1,hang-1,lie-1);//ตÝน้ 
}
int main()
{
   int m;
   scanf("%d",&m);
   int matrix[m][4];
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<4;j++)
       {
           scanf("%d",&matrix[i][j]);
       }
   }
   scanmatrix(matrix,0,0,m,4);
   return 0;
}
