#include <stdio.h>
    int main( )
    {  int i,j,n;
       printf("\nÇëÊäÈëÊı×Ö n:");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {  for(j=1;j<=n-i;j++)
             printf(" ");
          for(j=1;j<=2*i-1;j++)
             printf("*");
          printf("\n"); 
		if(i=0;i<=2*n;i++)
		{
			for(j=1;j<=2*i-1;j--)
			printf("*");
		}
	
       }
       return 0; 
     }
