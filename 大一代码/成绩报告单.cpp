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
printf("1:ͨ��ѧ�Ų�ѯ\n");
printf("2:ͳ�Ƽ������\n");
printf("3:Ԥ��ȫ���ɼ�\n");
printf("4:������ѡ��1-3\n");
scanf("%d",&a);
switch(a)
{
	case 1:printf("\n������ѧ��ѧ��:"); 
		scanf("%d",&num);
		query(num);break; 
	case 2:printf("\nͨ�����Ե�:"); 
		count();break;
	case 3:printf("\n����ͬѧ�ɼ�:\n"); 
		browse();break;
	default:printf("����\n");
	
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
  printf("��%d����ķ���\n",k);
 }
