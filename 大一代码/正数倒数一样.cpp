    #include <stdio.h>
    #include <string.h>
    int main()
    {
        int i,n;														
        char str[80];
        gets(str);
        n = strlen(str);
        for(i = 0;i<n/2;i ++ ){//�ȵ�һ��Ͳ�����
          if(str[i] != str[n-1-i])//����ǱȽ����˵��ַ�
    	  { 
    	     printf("No!\n");
    	     break;//�����ַ����Ƚϲ���ʱ����ѭ�������ǻ��ģ�
    	  }
    	}
          if(i == n/2)
    		 printf("yes\n");
		} 
