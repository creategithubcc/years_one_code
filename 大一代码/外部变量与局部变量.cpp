    /*�ⲿ������ֲ�����*/
    #include<stdio.h>
     extern  int  a;                /*�ⲿ����˵��*/                
    int main( ) 
     { int i;                       /*�ֲ��������弰��ʼ��*/ 
       void s( );
       for(i=1; i<=5;i++)
            { ++a; 
              printf("%d\n",a);
              s ( ) ;  
              }    
       return 0;
     }
       int a=10;                  /*�ⲿ�������弰��ʼ��*/                  
       void s ( )
       {  int a=100;              /*�ֲ��������弰��ʼ��*/ 
           ++a; 
          printf("%d\n", a);     
    }
