#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
int main()
{
long long int i,m,n,p,q,b1[100086]={},b2[100086]={},c[100087]={},xx,yy,x,y,r,t=0,jiahao,jinwei=0,d=100088,c1[100087]={};
char d1[100086]={},d2[100086]={};char op;
//while(1)
{
	scanf("%s %s",&d1,&d2);
	
	p=strlen(d1);
	q=strlen(d2);
	
	for(m=0;m<p;m++)
	{
	b1[m]=d1[m]-'0';
	}
	for(n=0;n<q;n++)
	{
	b2[n]=d2[n]-'0';
	}
	long long int Num=0,ans=0,g=0;
	for(i=0;i<p;i++)
	{
  	Num*=10;
  	Num+=b1[i];
	}
	for(i=0;i<q;i++)
	{
		g=pow(10,i);
		ans+=b2[q-1-i]*Num*g;
	}
	printf("%lld\n",ans);
	return 0;
}
}
