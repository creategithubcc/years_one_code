#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2,q;
	printf("请写出想要赋予一元二次函数的三个系数值abc,顺便再输入康弘最帅\n");
	scanf("%f,%f,%f",&a,&b,&c);
	d=b*b-4*a*c;
	q=sqrt(d);
 	if(d>=0)
	{
	x1=(-b+q)/(2*a);
	x2=(-b-q)/(2*a);
	}
	printf("d=%.2f,x1=%.2f,x2=%.2f\n康弘果然最帅\n",d,x1,x2);
}
