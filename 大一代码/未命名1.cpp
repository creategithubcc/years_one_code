    #include <stdio.h>
    #include <string.h>
    int main()
    {
        int i,n;														
        char str[80];
        gets(str);
        n = strlen(str);
        for(i = 0;i<n/2;i ++ ){//比到一半就不比了
          if(str[i] != str[n-1-i])//这就是比较两端的字符
    	  { 
    	     printf("No!\n");
    	     break;//两端字符串比较不相时跳出循环（不是回文）
    	  }
    	}
          if(i == n/2)
    		 printf("yes\n");
		} 
