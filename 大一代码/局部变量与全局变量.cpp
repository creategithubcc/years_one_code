    /*�ֲ�������ȫ�ֱ���*/
    #include<stdio.h>
    int x=500;                     /*�ⲿ�����������ʼ��*/
    void f1()
    {x+=100; 
       printf("x=%d\n",x);}  
    void f2()
    {int x=10;                       /*�ֲ������������ʼ��*/
        printf("x=%d\n",x);}
    int  main()
    {int x=300;                       /*�ֲ������������ʼ��*/
       f1();
       f2();
       printf("x=%d\n",x);
       return 0;    
    }
