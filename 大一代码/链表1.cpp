#include<iostream> 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Stu
{
	char num[100];                             
	char name[100];   
	char sex[3];                          
	char gender[100];                                
	char address[100];                           
	struct Stu *next;                      //动态链表连接下一个  int *p 与上面对比 方便思考      
}Stu;
Stu *creat(Stu *h)                          
{

	Stu *head1, *p1, *p2, *t0, *t1;//记录对比 
	int m, n = 1, k,flag=1;
	FILE *fp;
	while(flag)
	{
		printf("请选择功能：");
	scanf("%d",&k);
	if (k==2||k==3||k==4||k==5 && h==NULL)
	std::cout<<"无数据\n请重新选择\n";
	else flag=0;
				
	}
						//step 1

	if(k==1){//********************************录入 
	
		t0 = h;
		while (t0 != NULL)
		{

			t1 = t0;
			t0 = t0->next;//
		}
		p1 = p2 = (Stu*)malloc(sizeof(Stu));
		if (p1 == NULL)
		{
			printf("ERROR\n");
			return 0;
		}
		t1->next = p2;
		printf("请输入学生姓名：");
		scanf("%s", p2->name);
		printf("请输入学号：");
		scanf("%s", p2->num);
		
		printf("请输入性别：");
		scanf("%s", p2->gender);
		printf("请输入家庭地址：");
		scanf("%s", p2->address);
		printf("结束--->    [0]    继续录入--->     [1]    ：");   //判断是否继续输入的标准
		scanf("%d", &m);
		printf(" t->name    %s\n", t1->next->name);
		while (m != 0)
		{
			printf("--------------------------已输入了    %d      名学生的信息-----------------------\n", n);
			n = n + 1;
			p1 = (Stu*)malloc(sizeof(Stu));
			if (p1 == NULL)
			{
				printf("ERROR\n");
				return 0;
			}
			p2->next = p1;
			p2 = p1;
			printf("请输入学生学号：");
			scanf("%s", (*p1).num);
			printf("请输入学生姓名：");
			scanf("%s", p1->name);
			printf("请输入学生性别：");
			scanf("%s", p1->gender);
			printf("请输入学生家庭地址：");
			scanf("%s", p1->address);
			printf("结束--->    [0]    继续录入--->     [1]    ：");
			scanf("%d", &m);
		}
		p1->next = NULL;    
		printf("--------------------------存有    %d      名学生的信息-----------------------\n", n);
		return(h);     
		}
}

void find(Stu *fin)// 查询信息
 {
 
	if(fin == NULL) 
	{
		printf("\n\n\n无学生信息\n"); 
		return ;
	}
	Stu*p, *p1;
	int f, o = 0, e = 0;
	char a[100], b[100];
	p = p1 = fin;
	printf("请选择查询方式：");
	printf("1.按学号查询    2.按姓名查询\n");
	
	scanf("%d", &f);
	if (f == 1)
	{
		printf("请输入学生学号：");
		scanf("%s", a);
		do
		{
			if (strcmp(a, p1->num) == 0)
			{
				o = 1;
				
				printf("学号：%s\n姓名：%s\n性别：%s\n家庭地址：%s\n", p1->num, p1->name, p1->gender, p1->address); break;
			}
			p1 = p1->next;
		} while (p1 != NULL);
		if (o == 0) printf("未找到该同学\n ");
	}
	if (f == 2)
	{
		printf("请输入学生姓名：");
		scanf("%s", b);
		do
		{
			if (strcmp(b, p->name) == 0)
			{
				e = 1;
				
				printf("学号：%s\n姓名：%s\n性别：%s\n家庭地址：%s\n", p->num, p->name, p->sex, p->address); break;
			}
			p = p->next;
		} while (p != NULL);
		if (e == 0) printf("未找到该同学\n");
	}
}
struct Student *del(Stu *del1)      //删除程序
{
	if(del1 == NULL) 
	{
		printf("\n\n\n无学生信息\n"); 
		return 0;
	}
	struct Student *p, *p1, *p2, *p3;
	int a, d = 0, e = 0;
	char b[100], c[100];
	printf("可根据以下方式进行删除：\n");
	printf("1.学号     2.姓名\n");
	scanf("%d", &a);
	if (a == 1)       //*********************************************************学号删除******** 
	{
		//p = p1 = del1;
		p = p1;
		printf("请输入学生学号：");
		scanf("%s", b);
		do
		{
			if (strcmp(b, p->num) == 0 || p == p1)
			{
				d = 1;
				del1 = del1->next;
				printf("删除成功\n"); break;
			}
			if (strcmp(b, p->num) == 0)
			{
				d = 1;
				p1->next = p->next;
				printf("删除成功\n"); break;
			}
			p1 = p;
			p = p->next;
		} while (p != NULL);
		if (d == 0) printf("未找到该同学\n");
	}//*******************************************学号删除******************************* 
	if (a == 2)
	{
		p = p1 = del1;
		printf("请输入学生姓名：");
		scanf("%s", c);
		do
		{
			if (strcmp(c, p->name) == 0 || p == del1)
			{
				e = 1;
				del1 = del1->next;
				printf("删除成功\n"); break;
			}
			if (strcmp(c, p->name) == 0)
			{
				e = 1;
				p1->next = p->next;
				printf("删除成功\n"); break;
			}
			p1 = p;
			p = p->next;
		} while (p != NULL);
		if (e == 0) printf("未找到该同学\n");
	}
	if(del1 == NULL) printf("\n\n\n已删除所有学生\n");
	return (del1);
}
Stu *change(Stu *change1)     //修改程序
{
	if(change1 == NULL) 
	{
		printf("\n\n\n无学生信息\n"); 
		return NULL;
	}
	 Stu*p, *p1;
	int f, i, j, o = 0, q = 0;
	char a[100], b[100];
	p = p1 = change1;
		printf("请选择查找方式：");
	printf("1.按学号    2.按姓名\n");

	scanf("%d", &f);
	if (f == 1)
	{
		printf("请输入学生学号：");
		scanf("%s", a);
		while (p1 != NULL)
		{
			if (strcmp(a, p1->num) == 0)
			{
				o = 1;
				
				printf("学号：%s\n姓名：%s\n性别：%s\n家庭地址：%s\n", p1->num, p1->name, p1->sex, p1->address);
				printf("你想修改？：");
				printf("1.学号    2.姓名    3.性别    4.家庭地址    \n");
				
				scanf("%d", &i);
				switch (i)
				{
				case 1:printf("请输入修改后的学号："); scanf("%s", (*p1).num); printf("DONE\n"); break;
				case 2:printf("请输入修改后的姓名："); scanf("%s", (*p1).name); printf("DONE\n"); break;
				case 3:printf("请输入修改后的性别："); scanf("%s", (*p1).sex); printf("DONE\n"); break;
				case 4:printf("请输入修改后的家庭地址："); scanf("%s", (*p1).address);  printf("DONE\n"); break;
				default:printf("请输入已有选项：\n"); break;
				}
			}
			p1 = p1->next;
		}
		if (o == 0) printf("未找到该同学\n ");
	}
	if (f == 2)
	{
		printf("请输入学生姓名：");
		scanf("%s", x);
		while (p)                                                                /**********修改1*******/ 
		{
			if (strcmp(x, p->name) == 0)
			{
				q = 1;
			
				printf("学号：%s\n姓名：%s\n性别：%s\n家庭地址：%s\n", p->num, p->name, p->sex, p->address);
				printf("你想修改？：");
				printf("1.学号    2.姓名    3.性别    4.家庭地址    \n");
				scanf("%d", &i);
				switch (i)
				{
				case 1:printf("请输入修改后的学号："); scanf("%s", (*p1).num); printf("DONE\n"); break;
				case 2:printf("请输入修改后的姓名："); scanf("%s", (*p1).name); printf("DONE\n"); break;
				case 3:printf("请输入修改后的性别："); scanf("%s", (*p1).sex); printf("DONE\n"); break;
				case 4:printf("请输入修改后的家庭地址："); scanf("%s", (*p1).address);  printf("DONE\n"); break;
				default:printf("请输入已有选项：\n"); break;
				}
			}
			p = p->next;
		} 
		if (q == 0) printf("未找到该同学\n");
	}
 
 
	return (change1);
}
void print(Stu *pri)   //输出信息
{
	if(pri == NULL) 
	{
		printf("\n\n\n无学生信息\n"); 
		return ;
	}
	Stu *t;
	t = pri;
	 while (t)
	{
		printf("学生学号：%s\t学生姓名：%s\t学生性别：%s\t学生家庭地址：%s\n", t->num, t->name, t->gender, t->address);
		t = t->next;
	}
	//printf("输出无问题"); 
	printf("\n\n");
}
void write( Stu *wri)       //写入文件
{
	int m = 0, n = 0;
	//	printf("\n本次无新学生信息存储！！！\n"); 
	FILE *fp;
	if(wri == NULL) 
	{
		printf("\n\n\n存储信息为空\n");
		if ((fp = fopen("stu.dat", "wb+")) == NULL)
		{
			printf("\n\n\n删除存储文件失败\n");
			exit(0);
		}
		return; 
	}
	if ((fp = fopen("stu.dat", "wb+")) == NULL)
	{
		printf("\n\n\n文件打开失败\n");
		return;
	}
	do
	{
		if ((fwrite(wri, sizeof(struct Student), 1, fp) != 1)) printf("\n\n\n文件写入失败\n");
		else n++;
		wri = wri->next;
		m++;
	} while (wri != NULL );
	printf("\n\n\n应写入%d名学生信息，已写入%d名学生的信息\n", m, n);
	fclose(fp);
}
struct Student *read()   //    读取链表
{
//	printf("\n本次读取学生信息！！！\n"); 
	struct Student  *p0, *p1, *head;
	FILE *fp;
	if ((fp = fopen("stu.dat", "rb+")) == NULL)
	{
		printf("\n\n\n文件打开失败！！！\n");
		return NULL;
	}
	rewind(fp);
    head = p0 = p1 = (Stu*)malloc(sizeof(Stu));
	if (p1 == NULL)
	{
		printf("内存开辟失败\n");
		return 0;
	}
	do 
	{
		//p0=p2->next;
		p1->next = p0;
		p1 = p0;
		if ((fread(p1, sizeof( Stu), 1, fp) != 1))
		{
			 printf("\n\n\n文件为空\n\n\n");
			 return NULL;
		}
//		else
//		{
//			printf("学生学号：%s\t学生姓名：%s\t学生性别：%s\t学生家庭地址：%s\n", p2->num, p2->name, p2->sex, p2->address);
//		}
		p0 = (Stu*)malloc(sizeof(Stu));
		if (p0 == NULL)
		{
			printf("内存开辟失败\n");
			return 0;
		}
	} while (p1->next != NULL  );
	p1->next = NULL;
	free(p0);
	fclose(fp);
	//put(head);
	return head;
}
int choose( Stu *p1)   //功能菜单选择
{
	Stu *head;
	int i;
	p1 = NULL;
	head = NULL;
	printf("\n\n\t        ****************欢迎使用学生信息管理系统**************\n\n");
	printf("\n\t\t*----------------|可选择的操作类型如下|--------------*\n\t\t*\t\t\t\t\t\t     *\n");
	printf("\t\t*\t1.录入学生信息    \t2.查询学生信息\t     *\n\t\t*\t\t\t\t\t\t     *\n\t\t*\t3.删除学生信息  \t4.修改学生信息\t     *\n\t\t*\t\t\t\t\t\t     *\n\t\t*\t5.输出学生信息      \t6.结束管理系统\t     *\n\t\t*\t\t\t\t\t\t     *\n");
	printf("\t\t*----------------------------------------------------*");
	printf("\n\t\t\t        请输入所选择的操作：");
	scanf("%d", &i);
	printf("\t\t\t      ----------------------\n");
	switch (i)
	{
	case 1:printf("现在开始输入：\n"); head = read(); head = creat(head);write(head); break;
	case 2:printf("现在开始查询：\n"); head = read(); find(head); break;
	case 3:printf("现在开始删除：\n"); head = read(); head = del(head); write(head); break;
	case 4:printf("现在开始修改：\n"); head = read(); head = change(head); write(head); break;
	case 5:printf("现在开始输出：\n"); head = read(); put(head); break;
	case 6:printf("系统已结束  \n"); return 0;
	default:printf("输入有误，请重新输入：\n"); break;
	}
	return 1;
}
int main()
{
	Stu *p1 = NULL;
	while(choose(p1))
	{
		choose(); // 进行功能的选择
    	read();           //读取链表  
		put(head);       // 将链表输出
	} 
	return 0;
}
 
 


