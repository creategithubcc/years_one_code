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
	 	printf("������������");
	    scanf("%s",p->name);
	 	printf("������ѧ�ţ�");
	 	scanf("%s",p->num);
	 	printf("������ɼ���");
	 	scanf("%f",&p->score);
		 printf("�������Ա�");
		 scanf("%s",p->gender);
		/* printf("¼����ϣ��Ƿ����¼�룿\n 1.YES      0.NO\n");
		 int a;
		 scanf("%d",&a);
		 sel1=a;*/
		p->next=s->next;
	 	s->next=p;
	 	
	 	 
	 
	 	return s;
	 }/*¼��ɼ�*/ 
	 void search(pnode s)
	 {if(!s->next) {
	 	printf("������Ϣ\n");
	 	return ;
	 }
	 	printf("��ѡ��\n 1.��ѧ��  2.������");
		 int sel2;
		 scanf("%d",&sel2);
		 if(sel2==1)
		 {
		 	printf("������ѧ�ţ�");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->num,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("δ�ҵ���ͬѧ\n") ;return ;}
			 printf("������%s    �Ա�%s     ѧ�ţ�%s    �ɼ���%d     ", p->name,p->gender,p->num,p->score);
			 return ;
		 }
		 if(sel2==2)
		 {
		 	printf("������������");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->name,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("δ�ҵ���ͬѧ\n") ; return ;}
			 printf("������%s    �Ա�%s     ѧ�ţ�%s    �ɼ���%d     ", p->name,p->gender,p->num,p->score);
			  return ;
		 }
	 }/*��ѯ*/
	 
	 
	pnode dele(pnode s)
	{
		printf("��ѡ��ɾ��ѧ����\n  1.��ѧ��        2.������\n");
		 int sel2;
		 scanf("%d",&sel2);
		 if(sel2==1)
		 {
		 	printf("������ѧ�ţ�");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->next->num,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("δ�ҵ���ͬѧ\n") ;return 0;}
			 pnode q=p->next;
			 p->next=q->next;
			 free(q);
			 return s;
		 }
		 if(sel2==2)
		 {
		 	printf("������������");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->next->name,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("δ�ҵ���ͬѧ\n") ; return 0 ;}
			  pnode q=p->next;
			 p->next=q->next;
			 free(q);
			 return s;
			  
		 }
		
	 } //ɾ�� 
	 
	 pnode change(pnode s)
	 {
	 	
		printf("��ѡ���޸ĵ�ѧ����\n  1.��ѧ��        2.������\n");
		 int sel2;
		 scanf("%d",&sel2);
		 if(sel2==1)
		 {
		 	printf("������ѧ�ţ�");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->num,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("δ�ҵ���ͬѧ\n") ;return 0;}
			printf("ѡ��Ҫ�޸ĵ����ݣ�\n 1.����     2.�Ա�     3.ѧ��   4.�ɼ�\n");
			int sel3;
			scanf("%d",&sel3);
			switch(sel3)
			{
				case 1:{
						printf("����Ϊ��\n");
						scanf("%s",p->name);
						break;}
				case 2:{
						printf("��Ϊ��\n");
						scanf("%s",p->gender);
							break;
							}
				case 3:{
						printf("����Ϊ��\n");
						scanf("%s",p->num);
						break;
						}
				case 4:{
						printf("����Ϊ��\n");
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
		 	printf("������������");
		 	char a[100]; 
		 	scanf("%s",a);
		 	pnode p=s;
		 	while(p)
		 	{
		 		if(!strcmp(p->next->name,a)) break;
		 		p=p->next;
			 }
			 if(!p) {printf("δ�ҵ���ͬѧ\n") ; return 0;}
			 	printf("ѡ��Ҫ�޸ĵ����ݣ�\n 1.����     2.�Ա�     3.ѧ��   4.�ɼ�\n");
			int sel3;
			scanf("%d",&sel3);
			switch(sel3)
			{
				case 1:{
						printf("����Ϊ��\n");
						scanf("%s",p->name);
						break;}
				case 2:{
						printf("��Ϊ��\n");
						scanf("%s",p->gender);
							break;
							}
				case 3:{
						printf("����Ϊ��\n");
						scanf("%s",p->num);
						break;
						}
				case 4:{
						printf("����Ϊ��\n");
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
		
	printf("            ��ӭ����ѧ����Ϣ����ϵͳ\n");
    printf("                ��ʵ�����¹���\n");
    printf("                1.¼��ѧ����Ϣ             2.��ѯѧ����Ϣ\n");
    printf("                3.ɾ��ѧ����Ϣ             4.�޸�ѧ����Ϣ\n"); 
    printf("                5.�޸�ѧ����Ϣ             6.��������\n");
    printf("��ѡ����");
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
