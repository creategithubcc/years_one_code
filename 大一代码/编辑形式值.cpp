#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,x,t,y;
printf("ÇëÊäÈëabcµÄÖµ");
scanf("%d",&a,&b,&c);
{x=a+b>c&&b==c;
printf("%d",x);
x=a||b+c&&b-c;
printf("%d",x);
x=!(a>b)&&!c||1;
printf("%d",x);
x=(t==a)&&(y=b)&&0;
printf("%d",x);
x=(a+b)+c-1&&b+c/2;
printf("%d",x);
} 
return 0;
}
