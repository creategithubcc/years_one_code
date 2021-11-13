#include<stdio.h>
#include<math.h>
int main()
{
	int d1,d2;char op;
while(1)
{
	scanf("%d%c%d",&d1,&op,&d2);
		switch(op)
	{
	case'+':
			printf("%d\n",d1+d2);break;
	case'-':
			printf("%d\n",d1-d2);break;
	case'*':
			printf("%d\n",d1*d2);break;				
	}
}
} 


/*int n;
int i,j,k,sum=0;
int a[1000000]={},b[1000000]={},add[10000000]={};*/
