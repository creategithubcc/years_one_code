
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main(void)
{
    int i;
    
    //���ô���
    system("color f4");  //���ô��ڵ���ɫ��ǰ��ɫ�ͱ���ɫ�� 
    system("title tanzi v-1");//���ô��ڵı��� 
    system("mode con:cols=100 lines=30");//���ô��ڵĴ�С 
    
    //���� 
    printf("\t\t  ��ӭ����̳�Ӹ��ϵͳ\n");
    printf("\t\t-------------------------\n");
    printf("\t\t    1.����������\n");
    printf("\t\t    2.�½����±�\n");
    printf("\t\t    3.�򿪻�ͼ��\n");
    printf("\t\t    ------------\n");
    printf("\t\t    4.15 s��ػ�\n");
    printf("\t\t    5.30 s��ػ�\n");
    printf("\t\t    6.60 s��ػ�\n");
    printf("\t\t    ------------\n");
    printf("\t\t    7.��ʾʱ��\n");
    printf("\t\t    8.���������\n");
    printf("\t\t    0.�˳�ϵͳ\n"); 
    printf("\t\t    ------------\n");
    printf("���������ѡ��");
    scanf("%d",&i); 
    
    //��֧�ṹ 
    switch(i)
    {
        case 1:
            printf("����������������\n");
            system("calc");
            break;
        
        case 2:
            printf("��������½����±�\n");
            system("notepad");
            break;
                
        case 3:
            printf("��������򿪻�ͼ��\n");
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
