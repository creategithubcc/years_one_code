#include<stdio.h>
int main()
{
	int a;//变量
	int* i;//指针变量
	a = 1;
	i = &a;//指针i地址指向a地址,此时*i=a,产生联动
	printf("a=%d\n", a);
	printf("a的地址%p\n", &a);
	printf("*i=%d\n", *i);//读取i指针变量所指地址的变量
	printf("*i的地址%p\n", i);
	return 0;
}

/*#include<stdio.h>
 int fun(int a,int b)//函数（）内的变量需声明,由运行前的函数对其赋值
{
	//a = 10;
	//b = 5;
	printf("fun a的地址%p\n", &a);
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	return b=b+a;//将b返回赋值给函数fun
}
int main()
{
	int c, d, e;//分属两个函数的局部变量名称即使一样,地址也不一样,不可被所在函数以外的函数读取更改
	c = 1;
	d= 1;
	e=fun(c,d);//把c,d赋值给函数fun里的a,b,函数运行完后得到的结果赋值给e
	printf("c=%d\n", c);
	printf("d=%d\n", d);
	printf("main e的地址%p\n", &e);
	printf("e=%d\n",e);
	return 0;
}*/