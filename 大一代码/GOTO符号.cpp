#include<stdio.h>
int main()
{
int n=0;
printf("Ëæ±ã°´µãÉ¶°É:\n");
loop:if(getchar()!='\n')
{
	n++;
	goto loop;
}
printf("%d",n);
 } 
