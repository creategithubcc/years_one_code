
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(void)
{
    int i;
    
    //设置窗口
    system("color f4");  //设置窗口的颜色（前景色和背景色） 
    system("title tanzi v-1");//设置窗口的标题 
    system("mode con:cols=100 lines=30");//设置窗口的大小 
    
    //界面 
    printf("\t\t  欢迎来到坛子哥哥系统\n");
    printf("\t\t-------------------------\n");
    printf("\t\t    1.启动计算器\n");
    printf("\t\t    2.新建记事本\n");
    printf("\t\t    3.打开画图板\n");
    printf("\t\t    ------------\n");
    printf("\t\t    4.15 s后关机\n");
    printf("\t\t    5.30 s后关机\n");
    printf("\t\t    6.60 s后关机\n");
    printf("\t\t    ------------\n");
    printf("\t\t    7.显示时间\n");
    printf("\t\t    8.重启计算机\n");
    printf("\t\t    0.退出系统\n"); 
    printf("\t\t    ------------\n");
    printf("请输入你的选择：");
    scanf("%d",&i); 
    
    //分支结构 
    switch(i)
    {
        case 1:
            printf("计算机将启动其算计\n");
            system("calc");
            break;
        
        case 2:
            printf("计算机将新建记事本\n");
            system("notepad");
            break;
                
        case 3:
            printf("计算机将打开画图板\n");
            system("mspaint");
            break;
            
        case 4:
            for(int t=15;t>=0;t--)
            {
                Sleep(1000);
                printf("%d s\n",t);
            }
            system("shutdown -s -t 1");
            break;
                    
        case 5:
            for(int t=30;t>=0;t--)
            {
                Sleep(1000);
                printf("%d s\n",t);
            }
            system("shutdown -s -t 1");
            break;
                    
        case 6:
            for(int t=60;t>=0;t--)
            {
                Sleep(1000);
                printf("%d s\n",t);
            }
            system("shutdown -s -t 1");
            break;
                
        case 7:
            system("date");    
            break;
        
        case 8:
            system("shutdown -r -t 1");
            break;
            
        case 0:
            exit(0);
    }
            
}
