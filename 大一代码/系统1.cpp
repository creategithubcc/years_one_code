    #include <stdio.h> 
    #include <stdlib.h> 
    #include<string.h>  
    /* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
     typedef struct node
     {
     	char num[100];
     	char name[100];
     	char address[100];
     	char gender[100];
     	int score;
     	struct node *next;
	 }node , *pnode;
	 
	 pnode init(pnode s)
	 {
	 	 s=(pnode)malloc(sizeof(node));
	 	 s->next=NULL;
	 	 return s;
	 }
	 
	 
	 
	 pnode input(pnode s)
	 {
	 
	 	pnode p=(pnode)malloc(sizeof(node));
	 	printf("请输入姓名：");
	    scanf("%s",p->name);
	 	printf("请输入学号：");
	 	scanf("%s",p->num);
	 	printf("请输入成绩：");
	 	scanf("%f",&p->score);
		 printf("请输入性别：");
		 scanf("%s",p->gender);
		/* printf("录入完毕，是否继续录入？\n 1.YES      0.NO\n");
		 int a;
		 scanf("%d",&a);
		 sel1=a;*/
		p->next=s->next;
	 	s->next=p;
	 	
	 	 
	 
	 	return s;
	 }/*录入成绩*/ 
	 void search(pnode s)
	 {if(!s->next) {
	 	printf("暂无信息\n");
	 	return ;
	 }
	 	printf("请选择：\n 1.按学号  2.按姓名");
		 int sel2;
		 scanf("%d",&sel2);
		 if(sel2==1)
		 {
		 	printf("请输入学号：");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->num,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("未找到该同学\n") ;return ;}
			 printf("姓名：%s    性别：%s     学号：%s    成绩：%d     ", p->name,p->gender,p->num,p->score);
			 return ;
		 }
		 if(sel2==2)
		 {
		 	printf("请输入姓名：");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->name,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("未找到该同学\n") ; return ;}
			 printf("姓名：%s    性别：%s     学号：%s    成绩：%d     ", p->name,p->gender,p->num,p->score);
			  return ;
		 }
	 }/*查询*/
	 
	 
	pnode dele(pnode s)
	{
		printf("请选择删除学生：\n  1.按学号        2.按姓名\n");
		 int sel2;
		 scanf("%d",&sel2);
		 if(sel2==1)
		 {
		 	printf("请输入学号：");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->next->num,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("未找到该同学\n") ;return 0;}
			 pnode q=p->next;
			 p->next=q->next;
			 free(q);
			 return s;
		 }
		 if(sel2==2)
		 {
		 	printf("请输入姓名：");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->next->name,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("未找到该同学\n") ; return 0 ;}
			  pnode q=p->next;
			 p->next=q->next;
			 free(q);
			 return s;
			  
		 }
		
	 } //删除 
	 
	 pnode change(pnode s)
	 {
	 	
		printf("请选择修改的学生：\n  1.按学号        2.按姓名\n");
		 int sel2;
		 scanf("%d",&sel2);
		 if(sel2==1)
		 {
		 	printf("请输入学号：");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->num,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("未找到该同学\n") ;return 0;}
			printf("选择要修改的内容：\n 1.姓名     2.性别     3.学号   4.成绩\n");
			int sel3;
			scanf("%d",&sel3);
			switch(sel3)
			{
				case 1:{
						printf("更改为：\n");
						scanf("%s",p->name);
						break;}
				case 2:{
						printf("改为：\n");
						scanf("%s",p->gender);
							break;
							}
				case 3:{
						printf("更改为：\n");
						scanf("%s",p->num);
						break;
						}
				case 4:{
						printf("更改为：\n");
						scanf("%s",p->score);
								break;
							}
				default :{printf("ERROR\n");
								break;
							}
			}
			
			 return s;
		 }
		 if(sel2==2)
		 {
		 	printf("请输入姓名：");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->next->name,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("未找到该同学\n") ; return 0;}
			 	printf("选择要修改的内容：\n 1.姓名     2.性别     3.学号   4.成绩\n");
			int sel3;
			scanf("%d",&sel3);
			switch(sel3)
			{
				case 1:{
						printf("更改为：\n");
						scanf("%s",p->name);
						break;}
				case 2:{
						printf("改为：\n");
						scanf("%s",p->gender);
							break;
							}
				case 3:{
						printf("更改为：\n");
						scanf("%s",p->num);
						break;
						}
				case 4:{
						printf("更改为：\n");
						scanf("%s",p->score);
								break;
							}
				default :{printf("ERROR\n");
								break;
							}
			}
			
			 return s;
			  
		 }
	  } 
	 
	  
	 
	 
	 
	 
    int main(int argc, char* argv[]) { 
	pnode s;int flag=1;
    init(s);
    while(flag)
	{
		
	printf("            欢迎来到学生信息管理系统\n");
    printf("                可实现以下功能\n");
    printf("                1.录入学生信息             2.查询学生信息\n");
    printf("                3.删除学生信息             4.修改学生信息\n"); 
    printf("                5.修改学生信息             6.结束程序\n");
    printf("请选择功能");
	int sel;
	scanf("%d",&sel); 
	switch(sel)
	{
		 case 1: {input (s); break;}
		case 2:{ search(s);break;}
		case 3:{dele(s);break;}
		case 4:{change(s);break;}
		case 6:{flag=0;break;} 
	}
	
    
     
	}
            return 0; 
    }  
