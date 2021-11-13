#include<stdio.h>
#include<math.h>
int main()
{double T,n,i,j;
scanf ("%lf",&T);
while (T--)
{
      scanf("%lf",&n);
      i=log(n)/log(2);
      j=i-(int)i;
      if(j!=0)
      {
        i++;
        printf("%d\n",(int)i);
	  }
        else
        {
		printf("%d\n",(int)i);
        }
      }
} 
       
