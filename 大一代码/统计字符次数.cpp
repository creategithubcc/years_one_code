#include<stdio.h> 

#include<stdlib.h>
main()
{
char string[100];
char c;
int i, num=0,sum=0;
printf("请从键盘输入一行需要查询的英文句子，进行单词数量统计:\n\n");
gets(string);
for(i=0;(c=string[i])!='\0';i++) 
{
if(('A'<=string[i]&&string[i]<='Z')||('a'<=string[i]&&string[i]<='z'))
sum++;
}
printf("\n");
printf("您输入的这句英文句子中共包含%d个英文字符，\n",sum);
}
