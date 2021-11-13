    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h> 
    int main() {
        int a[5][5],i=0,j=0,temp=0;
        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                a[i][j] = rand()%100;
                printf("%-5d",a[i][j]);    
            }
            printf("\n");
        }
        temp = a[0][0];
        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 5; j++)
            {
                if(temp < a[i][j])
                {
                    temp = a[i][j];
                }
            }
     
        }
        printf("\n最大元素为:%d", temp);
         
        return 0;
    }
