    #include <stdio.h>
    #define N 2
    int    main( )
        { int a[N][4], i, j, s=0;     char c;
          for (i=0; i<N; i++)/* ����30�˵ĳɼ� */
          { 
            for (j=0; j<=3; j++)/* ����ѧ�ź�3�ųɼ� */
                scanf("%d", &a[i][j]);                    
          }
          printf("  NO.   MT   EN   PH   SUM   V   >90\n");
          printf("-------------------------------------\n");
          for (i=0; i<N; i++)/* ���ζ�30���˽��д��� */
          {     printf("%4d:", a[i][0]); 
             for (s=0, j=1; j<=3; j++)
             {    s += a[i][j];/* ����3�ſγ��ܷ� */
                printf ("%4d", a[i][j]);              }
             if (a[i][1]>=90 && a[i][2]>=90 && a[i][3]>=90)
                 c='Y';    /* �����ųɼ���Ϊ90���� */
             else  c='N';
             printf("  %d   %d   %c\n", s, s/3, c);
           }
         }
