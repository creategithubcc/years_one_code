#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    char a[10];
    printf("���Ҵ��,���о͹ػ�(����30���ʱ��,����رձ�����һ��Ҫ�ػ�)\n");
    system("shutdown -s -t 30");
    while(1)
    {
        printf("��:");
        scanf("%s",&a);
        n=strcmp(a,"���");
        if(n==0)
        {
            system("shutdown -a");
            printf("�ţ����!!!ˬ!������!!��");
            break;
        }
    }
}
