#include<stdio.h> 

#include<stdlib.h>
main()
{
char string[100];
char c;
int i, num=0,sum=0;
printf("��Ӽ�������һ����Ҫ��ѯ��Ӣ�ľ��ӣ����е�������ͳ��:\n\n");
gets(string);
for(i=0;(c=string[i])!='\0';i++) 
{
if(('A'<=string[i]&&string[i]<='Z')||('a'<=string[i]&&string[i]<='z'))
sum++;
}
printf("\n");
printf("����������Ӣ�ľ����й�����%d��Ӣ���ַ���\n",sum);
}
