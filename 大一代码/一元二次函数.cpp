#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2,q;
	printf("��д����Ҫ����һԪ���κ���������ϵ��ֵabc,˳�������뿵����˧\n");
	scanf("%f,%f,%f",&a,&b,&c);
	d=b*b-4*a*c;
	q=sqrt(d);
 	if(d>=0)
	{
	x1=(-b+q)/(2*a);
	x2=(-b-q)/(2*a);
	}
	printf("d=%.2f,x1=%.2f,x2=%.2f\n�����Ȼ��˧\n",d,x1,x2);
}
