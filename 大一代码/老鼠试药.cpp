#include<stdio.h>
#include<math.h>
int main()
{long long T,n,i,j,k;
scanf ("%lld",&T);
while(k<T)
{
      scanf("%lld",&n);
      i=log(n)/log(2);
      j=i-(long long)i;
      if(j==0)
      {
              printf("%lld\n",(long long)i);}
              else
              {i=i+1;
              printf("%lld\n",(long long)i+1) ;
              }
              k=k+1;
              }
              return 0;
              } 
       
