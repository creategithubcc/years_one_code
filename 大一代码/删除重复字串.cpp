    #include<stdio.h>
    #include <string.h>
    int main()
    {char str1[100], str2[100];  int i, j, n;
     printf ("Enter string:");
     gets ( str1 );
     n = 0;
     for ( i=0; str1[i]!='\0'; i++)
       { for (j=0;j<n;j++)
            if(str1[i]==str2[j])
               break; 
         if ( j == n )     /* ²»ÖØ¸´£¬Ôò¿½±´ */
            str2 [ n++ ] = str1 [ i ];  
       }
      str2[n]='\0';
      printf("Result:");
      puts ( str2 );
    }
