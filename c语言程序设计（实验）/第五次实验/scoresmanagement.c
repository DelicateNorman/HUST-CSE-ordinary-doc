#include <stdio.h>
#include <string.h>
typedef struct{
    char name[50];
    int score;
} student;//定义一个学生结构体
void inputscores(student students[],int *n)//输入学生的成绩
{
    scanf("%d",&(*n));//为什么这里要使用指针呢？因为我们需要真正输入n的值，如果不使用指针，n不会改变，程序会出错
    for(int i=0;i< *n;i++)
    {
        scanf("%s %d",students[i].name , &students[i].score);
    }
    printf("%d records were input!\n",*n) ;
}

void sortscores(student students[],int n)//排序成绩
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)//冒泡排序
        {
            if(students[i].score<students[j].score)//直接交换结构体，如果只是交换成绩就会发生成绩和名字错乱；
            {
                student temp;
                temp = students[i];
                students[i]=students[j];
                students[j]=temp;
            }
        }
    }
    printf("Reorder finished!\n");
}
void outputscores(student students[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",students[i].name,students[i].score);
    }
}
void searchscore(student students[],int n,int target)
{
   int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (students[mid].score == target) {
            printf("%s %d", students[mid].name, students[mid].score);
            return;
        } else if (students[mid].score < target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }//二分法查找（前提是已经排好序了哦）
    printf("not found!\n");
}



int main()
{
  student students[100];
  int n =0;
  int choice;
  do{
  	scanf("%d",&choice);
	  switch(choice){
  		case 1:
  			inputscores(students,&n);
  			break;
  		case 2:
  			sortscores(students,n);
  			break;
  		case 3:
  			outputscores(students,n);
  			break;
  		case 4:
  			{
  				int target;
  				scanf("%d",&target);
  				searchscore(students,n,target);
  				break;
			  }
		case 0: break;
	  }
  }while(choice!=0);
  return 0;
}