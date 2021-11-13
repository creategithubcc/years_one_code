#include<stdio.h>
double px(double x,int n)
{if(n==0)
return (1);
else
return x*(1-px(x,n-1));
}
int main()
{int n;
double x,sum;
scanf("%lf,%d",&x,&n);
sum=px(x,n); 
printf("The sum of %d items = %.0f",n,sum);
}







