    /*�������ѧ�����ſ�ƽ����*/
    #include<stdio.h>
    int main()
       {  void average(float *p,int n);
          void search(float (*p)[4],int n);
          int k; 
          float score[3][4] ={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
          scanf("%d",&k);                       /*�����k��ͬѧ�ĳɼ�*/
          average(*score,12);                   /*�ö�ά�����0�е��׵�ַ��ʵ�ε��ú���*/ 
          search(score,k);                      /*�ö�ά��������ʵ�ε��ú���*/
          return 0;         
    }
    /*��ȫ��������ƽ����*/
    void  average(float *p,int n)               /*ָ�������ָ���������β�*/ 
    {  float *p_end; 
       float  sum=0,aver;     
       p_end=p+n-1;                       
       for(;p<=p_end;p++)    
          sum=sum+(*p);   
       aver=sum/n;
       printf("average=%5.2f\n",aver);
    } 
    /*���ָ��ѧ���ĳɼ�*/
    void search(float(*p)[4],int n )             /*��ָ���������β�*/
    {int  i;
        printf("the score of No.%d are��",n); 
        for(i=0;i<4;i++)
        printf("%7.2f",*(*(p+n)+i));             /*�ڵ�n���ƶ�ָ�룬�����ͬѧ��ȫ���ɼ�*/
    }
