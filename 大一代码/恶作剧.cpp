#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;
    char a[10];
    printf("叫我大哥,不叫就关机(你有30秒的时间,如果关闭本程序一样要关机)\n");
    system("shutdown -s -t 30");
    while(1)
    {
        printf("叫:");
        scanf("%s",&a);
        n=strcmp(a,"大哥");
        if(n==0)
        {
            system("shutdown -a");
            printf("嗯，真乖!!!爽!哈哈哈!!！");
            break;
        }
    }
}
