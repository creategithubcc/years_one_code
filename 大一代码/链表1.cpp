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
	struct Stu *next;                      //��̬����������һ��  int *p ������Ա� ����˼��      
}Stu;
Stu *creat(Stu *h)                          
{

	Stu *head1, *p1, *p2, *t0, *t1;//��¼�Ա� 
	int m, n = 1, k,flag=1;
	FILE *fp;
	while(flag)
	{
		printf("��ѡ���ܣ�");
	scanf("%d",&k);
	if (k==2||k==3||k==4||k==5 && h==NULL)
	std::cout<<"������\n������ѡ��\n";
	else flag=0;
				
	}
						//step 1

	if(k==1){//********************************¼�� 
	
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
		printf("������ѧ��������");
		scanf("%s", p2->name);
		printf("������ѧ�ţ�");
		scanf("%s", p2->num);
		
		printf("�������Ա�");
		scanf("%s", p2->gender);
		printf("�������ͥ��ַ��");
		scanf("%s", p2->address);
		printf("����--->    [0]    ����¼��--->     [1]    ��");   //�ж��Ƿ��������ı�׼
		scanf("%d", &m);
		printf(" t->name    %s\n", t1->next->name);
		while (m != 0)
		{
			printf("--------------------------��������    %d      ��ѧ������Ϣ-----------------------\n", n);
			n = n + 1;
			p1 = (Stu*)malloc(sizeof(Stu));
			if (p1 == NULL)
			{
				printf("ERROR\n");
				return 0;
			}
			p2->next = p1;
			p2 = p1;
			printf("������ѧ��ѧ�ţ�");
			scanf("%s", (*p1).num);
			printf("������ѧ��������");
			scanf("%s", p1->name);
			printf("������ѧ���Ա�");
			scanf("%s", p1->gender);
			printf("������ѧ����ͥ��ַ��");
			scanf("%s", p1->address);
			printf("����--->    [0]    ����¼��--->     [1]    ��");
			scanf("%d", &m);
		}
		p1->next = NULL;    
		printf("--------------------------����    %d      ��ѧ������Ϣ-----------------------\n", n);
		return(h);     
		}
}

void find(Stu *fin)// ��ѯ��Ϣ
 {
 
	if(fin == NULL) 
	{
		printf("\n\n\n��ѧ����Ϣ\n"); 
		return ;
	}
	Stu*p, *p1;
	int f, o = 0, e = 0;
	char a[100], b[100];
	p = p1 = fin;
	printf("��ѡ���ѯ��ʽ��");
	printf("1.��ѧ�Ų�ѯ    2.��������ѯ\n");
	
	scanf("%d", &f);
	if (f == 1)
	{
		printf("������ѧ��ѧ�ţ�");
		scanf("%s", a);
		do
		{
			if (strcmp(a, p1->num) == 0)
			{
				o = 1;
				
				printf("ѧ�ţ�%s\n������%s\n�Ա�%s\n��ͥ��ַ��%s\n", p1->num, p1->name, p1->gender, p1->address); break;
			}
			p1 = p1->next;
		} while (p1 != NULL);
		if (o == 0) printf("δ�ҵ���ͬѧ\n ");
	}
	if (f == 2)
	{
		printf("������ѧ��������");
		scanf("%s", b);
		do
		{
			if (strcmp(b, p->name) == 0)
			{
				e = 1;
				
				printf("ѧ�ţ�%s\n������%s\n�Ա�%s\n��ͥ��ַ��%s\n", p->num, p->name, p->sex, p->address); break;
			}
			p = p->next;
		} while (p != NULL);
		if (e == 0) printf("δ�ҵ���ͬѧ\n");
	}
}
struct Student *del(Stu *del1)      //ɾ������
{
	if(del1 == NULL) 
	{
		printf("\n\n\n��ѧ����Ϣ\n"); 
		return 0;
	}
	struct Student *p, *p1, *p2, *p3;
	int a, d = 0, e = 0;
	char b[100], c[100];
	printf("�ɸ������·�ʽ����ɾ����\n");
	printf("1.ѧ��     2.����\n");
	scanf("%d", &a);
	if (a == 1)       //*********************************************************ѧ��ɾ��******** 
	{
		//p = p1 = del1;
		p = p1;
		printf("������ѧ��ѧ�ţ�");
		scanf("%s", b);
		do
		{
			if (strcmp(b, p->num) == 0 || p == p1)
			{
				d = 1;
				del1 = del1->next;
				printf("ɾ���ɹ�\n"); break;
			}
			if (strcmp(b, p->num) == 0)
			{
				d = 1;
				p1->next = p->next;
				printf("ɾ���ɹ�\n"); break;
			}
			p1 = p;
			p = p->next;
		} while (p != NULL);
		if (d == 0) printf("δ�ҵ���ͬѧ\n");
	}//*******************************************ѧ��ɾ��******************************* 
	if (a == 2)
	{
		p = p1 = del1;
		printf("������ѧ��������");
		scanf("%s", c);
		do
		{
			if (strcmp(c, p->name) == 0 || p == del1)
			{
				e = 1;
				del1 = del1->next;
				printf("ɾ���ɹ�\n"); break;
			}
			if (strcmp(c, p->name) == 0)
			{
				e = 1;
				p1->next = p->next;
				printf("ɾ���ɹ�\n"); break;
			}
			p1 = p;
			p = p->next;
		} while (p != NULL);
		if (e == 0) printf("δ�ҵ���ͬѧ\n");
	}
	if(del1 == NULL) printf("\n\n\n��ɾ������ѧ��\n");
	return (del1);
}
Stu *change(Stu *change1)     //�޸ĳ���
{
	if(change1 == NULL) 
	{
		printf("\n\n\n��ѧ����Ϣ\n"); 
		return NULL;
	}
	 Stu*p, *p1;
	int f, i, j, o = 0, q = 0;
	char a[100], b[100];
	p = p1 = change1;
		printf("��ѡ����ҷ�ʽ��");
	printf("1.��ѧ��    2.������\n");

	scanf("%d", &f);
	if (f == 1)
	{
		printf("������ѧ��ѧ�ţ�");
		scanf("%s", a);
		while (p1 != NULL)
		{
			if (strcmp(a, p1->num) == 0)
			{
				o = 1;
				
				printf("ѧ�ţ�%s\n������%s\n�Ա�%s\n��ͥ��ַ��%s\n", p1->num, p1->name, p1->sex, p1->address);
				printf("�����޸ģ���");
				printf("1.ѧ��    2.����    3.�Ա�    4.��ͥ��ַ    \n");
				
				scanf("%d", &i);
				switch (i)
				{
				case 1:printf("�������޸ĺ��ѧ�ţ�"); scanf("%s", (*p1).num); printf("DONE\n"); break;
				case 2:printf("�������޸ĺ��������"); scanf("%s", (*p1).name); printf("DONE\n"); break;
				case 3:printf("�������޸ĺ���Ա�"); scanf("%s", (*p1).sex); printf("DONE\n"); break;
				case 4:printf("�������޸ĺ�ļ�ͥ��ַ��"); scanf("%s", (*p1).address);  printf("DONE\n"); break;
				default:printf("����������ѡ�\n"); break;
				}
			}
			p1 = p1->next;
		}
		if (o == 0) printf("δ�ҵ���ͬѧ\n ");
	}
	if (f == 2)
	{
		printf("������ѧ��������");
		scanf("%s", x);
		while (p)                                                                /**********�޸�1*******/ 
		{
			if (strcmp(x, p->name) == 0)
			{
				q = 1;
			
				printf("ѧ�ţ�%s\n������%s\n�Ա�%s\n��ͥ��ַ��%s\n", p->num, p->name, p->sex, p->address);
				printf("�����޸ģ���");
				printf("1.ѧ��    2.����    3.�Ա�    4.��ͥ��ַ    \n");
				scanf("%d", &i);
				switch (i)
				{
				case 1:printf("�������޸ĺ��ѧ�ţ�"); scanf("%s", (*p1).num); printf("DONE\n"); break;
				case 2:printf("�������޸ĺ��������"); scanf("%s", (*p1).name); printf("DONE\n"); break;
				case 3:printf("�������޸ĺ���Ա�"); scanf("%s", (*p1).sex); printf("DONE\n"); break;
				case 4:printf("�������޸ĺ�ļ�ͥ��ַ��"); scanf("%s", (*p1).address);  printf("DONE\n"); break;
				default:printf("����������ѡ�\n"); break;
				}
			}
			p = p->next;
		} 
		if (q == 0) printf("δ�ҵ���ͬѧ\n");
	}
 
 
	return (change1);
}
void print(Stu *pri)   //�����Ϣ
{
	if(pri == NULL) 
	{
		printf("\n\n\n��ѧ����Ϣ\n"); 
		return ;
	}
	Stu *t;
	t = pri;
	 while (t)
	{
		printf("ѧ��ѧ�ţ�%s\tѧ��������%s\tѧ���Ա�%s\tѧ����ͥ��ַ��%s\n", t->num, t->name, t->gender, t->address);
		t = t->next;
	}
	//printf("���������"); 
	printf("\n\n");
}
void write( Stu *wri)       //д���ļ�
{
	int m = 0, n = 0;
	//	printf("\n��������ѧ����Ϣ�洢������\n"); 
	FILE *fp;
	if(wri == NULL) 
	{
		printf("\n\n\n�洢��ϢΪ��\n");
		if ((fp = fopen("stu.dat", "wb+")) == NULL)
		{
			printf("\n\n\nɾ���洢�ļ�ʧ��\n");
			exit(0);
		}
		return; 
	}
	if ((fp = fopen("stu.dat", "wb+")) == NULL)
	{
		printf("\n\n\n�ļ���ʧ��\n");
		return;
	}
	do
	{
		if ((fwrite(wri, sizeof(struct Student), 1, fp) != 1)) printf("\n\n\n�ļ�д��ʧ��\n");
		else n++;
		wri = wri->next;
		m++;
	} while (wri != NULL );
	printf("\n\n\nӦд��%d��ѧ����Ϣ����д��%d��ѧ������Ϣ\n", m, n);
	fclose(fp);
}
struct Student *read()   //    ��ȡ����
{
//	printf("\n���ζ�ȡѧ����Ϣ������\n"); 
	struct Student  *p0, *p1, *head;
	FILE *fp;
	if ((fp = fopen("stu.dat", "rb+")) == NULL)
	{
		printf("\n\n\n�ļ���ʧ�ܣ�����\n");
		return NULL;
	}
	rewind(fp);
    head = p0 = p1 = (Stu*)malloc(sizeof(Stu));
	if (p1 == NULL)
	{
		printf("�ڴ濪��ʧ��\n");
		return 0;
	}
	do 
	{
		//p0=p2->next;
		p1->next = p0;
		p1 = p0;
		if ((fread(p1, sizeof( Stu), 1, fp) != 1))
		{
			 printf("\n\n\n�ļ�Ϊ��\n\n\n");
			 return NULL;
		}
//		else
//		{
//			printf("ѧ��ѧ�ţ�%s\tѧ��������%s\tѧ���Ա�%s\tѧ����ͥ��ַ��%s\n", p2->num, p2->name, p2->sex, p2->address);
//		}
		p0 = (Stu*)malloc(sizeof(Stu));
		if (p0 == NULL)
		{
			printf("�ڴ濪��ʧ��\n");
			return 0;
		}
	} while (p1->next != NULL  );
	p1->next = NULL;
	free(p0);
	fclose(fp);
	//put(head);
	return head;
}
int choose( Stu *p1)   //���ܲ˵�ѡ��
{
	Stu *head;
	int i;
	p1 = NULL;
	head = NULL;
	printf("\n\n\t        ****************��ӭʹ��ѧ����Ϣ����ϵͳ**************\n\n");
	printf("\n\t\t*----------------|��ѡ��Ĳ�����������|--------------*\n\t\t*\t\t\t\t\t\t     *\n");
	printf("\t\t*\t1.¼��ѧ����Ϣ    \t2.��ѯѧ����Ϣ\t     *\n\t\t*\t\t\t\t\t\t     *\n\t\t*\t3.ɾ��ѧ����Ϣ  \t4.�޸�ѧ����Ϣ\t     *\n\t\t*\t\t\t\t\t\t     *\n\t\t*\t5.���ѧ����Ϣ      \t6.��������ϵͳ\t     *\n\t\t*\t\t\t\t\t\t     *\n");
	printf("\t\t*----------------------------------------------------*");
	printf("\n\t\t\t        ��������ѡ��Ĳ�����");
	scanf("%d", &i);
	printf("\t\t\t      ----------------------\n");
	switch (i)
	{
	case 1:printf("���ڿ�ʼ���룺\n"); head = read(); head = creat(head);write(head); break;
	case 2:printf("���ڿ�ʼ��ѯ��\n"); head = read(); find(head); break;
	case 3:printf("���ڿ�ʼɾ����\n"); head = read(); head = del(head); write(head); break;
	case 4:printf("���ڿ�ʼ�޸ģ�\n"); head = read(); head = change(head); write(head); break;
	case 5:printf("���ڿ�ʼ�����\n"); head = read(); put(head); break;
	case 6:printf("ϵͳ�ѽ���  \n"); return 0;
	default:printf("�����������������룺\n"); break;
	}
	return 1;
}
int main()
{
	Stu *p1 = NULL;
	while(choose(p1))
	{
		choose(); // ���й��ܵ�ѡ��
    	read();           //��ȡ����  
		put(head);       // ���������
	} 
	return 0;
}
 
 


