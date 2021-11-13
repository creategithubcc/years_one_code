#include<stdio.h>
int score[5][4]={100,90,89,78,
				101,55,89,78,
				102,87,67,65,
				103,99,76,89,
				104,78,67,88};
int main()
{
int a,num;
void query(int);
void count();
void browse();
printf("1:通过学号查询\n");
printf("2:统计及格分数\n");
printf("3:预览全部成绩\n");
printf("4:请输入选项1-3\n");
scanf("%d",&a);
switch(a)
{
	case 1:printf("\n请输入学生学号:"); 
		scanf("%d",&num);
		query(num);break; 
	case 2:printf("\n通过考试的:"); 
		count();break;
	case 3:printf("\n所有同学成绩:\n"); 
		browse();break;
	default:printf("结束\n");
	
 } 
 } 
 void query(int a)
 {int i,j;
 for(i=0;i<5;i++)
 if(score[i][0]==a)
 for(j=0;j<4;j++)
 printf("%5d",score[i][j]);
 }
 void browse()
 {int i,j;
 for(i=0;i<5;i++)
 {for(j=0;j<4;j++)
 printf("%5d",score[i][j]);
 printf("\n");
 }
 }
 void count()
 {int i,j,k=0;
 for(i=0;i<5;i++)
 for(j=1;j<4;j++)
 {if(score[i][j]>=60)
 k++;
  } 
  printf("共%d及格的分数\n",k);
 }
