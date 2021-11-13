#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2,q;
	printf("大哥行行好，给我一点数字吧嘤嘤嘤！\n");
	scanf("%f,%f,%f",&a,&b,&c);
	d = b*b-4*a*c;
	q = sqrt(d);
	x1 = (-b+q)/(2*a);
	x2 = (-b-q)/(2*a);
	printf("d=%.2f,x1=%.2f,x2=%.2f\n",d,x1,x2);
	/*最后要留意一点，在exe文件上写逗号的时候一定要用英文的逗号*/
} 
