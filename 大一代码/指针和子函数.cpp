#include<stdio.h>
int main()
{
	int a;//����
	int* i;//ָ�����
	a = 1;
	i = &a;//ָ��i��ַָ��a��ַ,��ʱ*i=a,��������
	printf("a=%d\n", a);
	printf("a�ĵ�ַ%p\n", &a);
	printf("*i=%d\n", *i);//��ȡiָ�������ָ��ַ�ı���
	printf("*i�ĵ�ַ%p\n", i);
	return 0;
}

/*#include<stdio.h>
 int fun(int a,int b)//���������ڵı���������,������ǰ�ĺ������丳ֵ
{
	//a = 10;
	//b = 5;
	printf("fun a�ĵ�ַ%p\n", &a);
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return b=b+a;//��b���ظ�ֵ������fun
}
int main()
{
	int c, d, e;//�������������ľֲ��������Ƽ�ʹһ��,��ַҲ��һ��,���ɱ����ں�������ĺ�����ȡ����
	c = 1;
	d= 1;
	e=fun(c,d);//��c,d��ֵ������fun���a,b,�����������õ��Ľ����ֵ��e
	printf("c=%d\n", c);
	printf("d=%d\n", d);
	printf("main e�ĵ�ַ%p\n", &e);
	printf("e=%d\n",e);
	return 0;
}*/