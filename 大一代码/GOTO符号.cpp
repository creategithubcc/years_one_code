#include<stdio.h>
int main()
{
int n=0;
printf("��㰴��ɶ��:\n");
loop:if(getchar()!='\n')
{
	n++;
	goto loop;
}
printf("%d",n);
 } 
