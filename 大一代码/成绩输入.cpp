#include<stdio.h>
int main(void)
{
	int s,n=1,t=0;
	do
	{
	printf("�����%d���ɼ�",n);
	scanf("%d",&s);
	if(s<0||s>100)
	printf("�ɼ���Ч����������\n");
	else
	{
		printf("¼��ɹ�\n");
		t=t+s;
		n++;
	}
	}while(n<=3);
	printf("n=%d,%d\n",n,t/(n-1));
	return 0;
}
