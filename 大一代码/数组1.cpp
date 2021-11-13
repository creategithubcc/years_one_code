    #include <stdio.h>
    int  main( )
    { int i, j, a[10][10];
      for (i=0; i<10; i++)           /* i为行下标 */
        for (j=0; j<10; j++)      /* j为列下标 */
          if  ( i<=j ) a[i][j]=1;   /* 生成矩阵 */
          else   a[i][j]=i-j+1;
     
            printf("%2d ", a[i][j]);
          printf("\n");
        }
   
