#include<stdio.h>
#defind DECISION"����ȥ���\n1 ��ׯ\n2 ð��\n3 �浵\n4 ������Ϣ"
#defind DECISION2"������ս�ĵĸ�����\n1 1.ʷ��ķɭ��\n2 2.���ڡ������\n3 3.ħ���Ǳ�\n4"
void wuqidian(void);
void fangjudian(void);
void gongji(void);
void cunzhuang(void);
void LVup(void);
void slm(void);
void slm1(void);
void slm2(void);
void man(void);
void man1(void);
void man2(void);
void mowang(void);
void mowang1(void);
void mowang2(void);
void maoxian(void);
void pi(void);
void cundang(void);
int hp=500,mp=50,sp,ex=0,p=5,q=20,lv=1,i=1,eak=0,edf=0,gd=0,viz=0,sh,tybosshp,x,hpboss,fb;

int main(void)
{
	{
		while(2>1)
		{
			while(x==0)
			{
				printf("%s\n",DECISION);
				scanf("%d",&x);
				while(x==1)
				{
					cunzhuang();
					viz=0;
					x=0;
				}
				while(x==2)
				{
					maoxian();
					x=0;
				}
				while(x==3)
				{
					cundang();
					x=0;
				}
				while(x==4)
				{
					pi();
					x=0;
				}
			}
		}
return 0;
}
void cundang(void)
{
int du;
printf("����������Խ��д洢�Ͷ�ȡ\n1 ��ȡ\n2 ����\n3 ȡ��\n");
scanf("%d",&du);
int a[]={lv,hp,mp,ex,gd};
	 while(du==1)
	 {
	  FILE *fpRead=fopen("data.txt","r");
	  int b[5]
	  for(i=0;i<5;i++)
	  {
	  	fscanf(fpRead,"%d",&b[i]);
	  	a[i]=b[i];
	   } 
	   lv=a[0],hp=a[1],mp=a[2],ex=a[3],gd=a[4];
	   du=-1;
      }	
while(du==2)
{
  FILE *fpWrite=fopen("data.txt","w");
	  for(i=0;i<5;i++)
	  {
	  	fprintf(fpWrite,"%d",&a[i]);
	  	fclose(fpwrite);
	  	du=-1;
	   } 
	   while(du==3)
	   {
	   	du=-1;
	   }
}
}
void pi(void)
{
	printf("      ������Ϣ      \n");
	printf("�ȼ�:%d   hp:%d   mp:%d   ����:%d   ���:%d   \n",lv,hp,mp,ex,gd);
	printf("�����˺���1.����:%d   2.��������ն   3.����ʥ��:%d  \n",p,q);
	void lvup(void)
	{
		while(ex>100*lv)
		{
			printf("�����ˣ���ĵȼ�Ϊ%d\n",lv+1);
			p=p+3;
			q=q+10;
			ex=ex-100*lv;
			lv=lv+1;
			hp=200+20*lv;
			mp=20+2*lv;
		}
	}
	void cunzhuang(void)
	{
		while(viz==0)
		{
			printf("��ӭ�������ߴ�\n��ѡ��Ŀ�ĵ�\n1������\n2���ߵ�\n3�˳�\n");
			scanf("%d",&viz); 
			while(viz>=3)
			{
			printf("�˳���ׯ\n");
			viz=-1;	
			}
			while(viz==1)
			{
				wuqidian();
			}
			while(viz==2)
			{
				fangjudian();
			}
		}
	}
	void wuqidian(void)
	{
		while(viz==1)
		{
			int wq=0,dj=1,cj=1;
			printf("��ӭ����������\n��������Ҫʲô��\n1�̽�(+10����)500G\n2����ħ����+30������2000G\n3�˳�������\n");
			scanf("%d",&wq);
			if(wq>2)
			{
				while(wq>3)
				{
					printf("δ����\n");
					wq=0;
				}
				while(wq==3)
				{
					printf("��ѡ���˳�\n");
					viz=0;
					wq=0;
				 } 
			}
		}
		else
		{
			while(wq==1)
			{
				if(gd>500)
				{
					if(dj=1)
					{
						printf("�㹺���˶̽���������+10���ظ���Ч\n");
						eak=10;
						p=p+eak;
						dj=0;
						wq=0;
					}
					else
					{
						printf("���Ѿ�ŷ����Ŷ\n");
					}
				}
				else
				{
					printf("��Ҳ���\n");
				}
				wq=0;
			}
			while(wq==2)
			{
				if(gd>2000)
				{
					if(cj=1)
					{
						printf("�㹺���˳������˺�+30���ظ���Ч\n");
						eak=30;
						p=p+eak;
						cj=0;
					}
					else
					{
						printf("���Ѿ��������Ŷ\n");
					}
				}
				else
				{
					printf("��Ҳ���\n");
				}
				wq=0;
			}
		}
	}
}
void fangjudian(void)
{
	while(viz==2)
	{
		int fj=0,bj=1,szj=1;
		printf("�����ʿ����ӭ�������ߵ�\n");
		printf("����Ҫʲô��\n1����500G\n2���Ӽ�1000G\n3�˳��̵�\n");
		scanf("%d",&fj);
		if(fj>2)
		{
			while(fj>3)
			{
				printf("δ����\n");
				fj=0;
			}
			while(fj==3)
			{
				printf("��ѡ���˳�\n");
				viz=0;
				fj=0;
			}
		}
		else
		{
			while(fj==1)
			{
				if(gd>500)
				{
					if(bj=1)
					{
						printf("�㹺���˲��ף�������4���ظ�������Ч\n");
						edf=4;bj=0; 
					}
					else
					{
						printf("��Ǯ����\n");
					}
					fj=0;
				}
			}
		}
			while(fj==2)
				{
					if(gd>1000)
					{
						if(szj=1)
						{
							printf("�㹺�������Ӽף�������7���ظ�������Ч\n");
							edf=7;szj=0;
						}
						else
						{
							printf("��Ҳ���\n");
						}
						fj=0;
					}
		        }
		
	}
 }
 void maoxian(void)
 {
 	printf("%s\n",DECISION2);
 	scanf("%d",&fb);
 	if(fb>3)
 	{
 		printf("δ����������ѡ��\n");
	 }
	 else
	 {
	 	switch(fb)
	 	{
	 		case 1:slm();break;
	 		case 2:slm();man();break;
	 		case 3:slm();slm();man();mowang();break;
		 }
	 }
	 lvup();
	 hp=200+20*lv;
	 mp=20+2*lv;
 }
 void slm(void)
 {
 slm1();
 zdmk();
 slm2();	
 }
 void man(void)
 {
 	man1();
 	zdmk();
 	man2();
 }
 void mowang(void)
 {
 	mowang1();
 	zdmk();
 	mowang2();
 }
 void zdmk(void)
 {
 	while(hp>0&&tybosshp>0)
 	{
 		i=1;
 		printf("��ѡ����\n1.����(���%d���˺���mp+1)\n2.��������ն     (��ɵ�ǰ����ֵ�ٷ�֮�˵��˺���mp-3)\n3.����ʥ��     (���%d���˺���mp-5)\n",p,q);
	 scanf("%d",&sp);
	 while(4<sp)
	 {
	 	printf("����ѡ�����������ѡ��\n");
	 	sp=-1;
	  } 
	  while(sp==1)
	  {
	  tybosshp=tybosshp-p;
	  mp++;
	  printf("��ʹ�õĹ�����boss���%d���˺����ָ�һ��mp��boss����%dѪ��,���mp����%d\n",p,tybosshp,mp);
	  sp=0;	
	  }
	 }while(sp==2)
	 {
	 	while(mp>=3&&sp==2)
	 	{
	 		sh==tybosshp*0.08;
	 		tybosshp=tybosshp*0.92��
			mp=mp-3;
			printf("��ʹ�õļ��ܶ�BOSS���%d���˺�,BOSS��ʣ%dѪ��,���Ѫ����ʣ%d\n",sh,tybosshp,mp); 
			sp=0;
		 }
		 while(mp<3&&sp==2)
		 printf("mp����3��,�޷��ͷż���\n");
		 sp=-1;
	}
	 }
	 while(sp==3)
	 {
	 	while(mp>=5&&sp==3)
	 	{
	 		tybosshp=tybosshp-q;
	 		mp=mp-5;
	 		sp=0;
	 		printf("��ʹ�ü�������֮���BOSS���%d���˺�,BOSS����%dѪ��,���mp����%d\n",q,tybosshp,mp);
	 		while(mp<5&&sp==3)
	 		{
	 			printf("mp����5�㣬�޷��ͷ�\n");
				 sp==-1; 
			 }
		 }
		 while(tybosshp>0&&sp==0)
		 {
		 	if(tybosshp>hpboss*0.1)
		 	{
		 		sh=15+hp*0.01-edf;
		 		hp=hp-sh;
		 		printf("BOSSײ����һ�£����Ѫ��������%d�㣬�㻹ʣ��%d������ֵ\n",sh,hp);
		 		sp=-1;
			 }
			 else
			 {
			 	printf("boss��Ϊ�񱩽׶�");
			 	sh=15+hpboss*0.1-edf;
			 	hp=hp-sh;
			 	printf("bossʹ�÷���Ҵ�,���hp������%d���㻹ʣ�¡�%d������ֵ\n"sh,hp);
			 	sp=-1;
			 	
			 }
		 }
		 
	 }
	 while(tybosshp<=0&&i==1)
	 {
	 	printf("���Ѿ���ɱboss,��ϲͨ��\n");
	 	i=i+1;
	 }
	 while(hp<0&&i==1)
	 {
	 	printf("���Ѿ���������ص����ִ����¿�ʼ��\n");
	 	i=i+2;
	 	getchar();
	 	printf("���Ѿ�ԭ�ظ���\n");
	 	hp=200+20*lv;
	 	mp=20+2*lv;
	 }
 }
 void slm1(void)
 {
 	printf("ʷ��ķ����\n");
 	hpboss=100;
 	tybosshp=hpboss;
  } 
  void slm2(void)
  {
  	if(i==2)
  	{
  		printf("����20ex��50���\n");
		  ex=ex+20;
		  gd=gd+50;
		  printf("��ľ���Ϊ%d\n",ex);
		   
	  }
	  else
	  {
	  	printf("�����Ŭ����\n");
	  	
	  }
  }
  void man1(void)
 {
   printf("�Ǹ����˳�����\n"); 
  hpboss=300;
  tybosshp=hpboss;
}
void man2(void)
 {
   printf("�Ǹ����˳�����\n"); 
  if(i==2)
  {
  	printf("������200ex,500���\n");
  	ex=ex+200;
  	gd=gd+500;
  	printf("��ľ���Ϊ%d",ex);
  	
  }
  else
  {
  	printf("�����Ŭ����\n");
  }
}
void mowang(void)
{
	printf("ħ�������ˣ���\n");
	hpboss=800;
	tybosshp=hpboss;
	
}
void mowang2(void)
{
	if(i==2)
	{
		printf("������1000ex,1000���\n");
		ex=ex+1000;
		gd=gd+1000;
		printf("��ľ���Ϊ%d",ex);
	}
	else
	{
		printf("�����Ŭ���ɣ�\n");
	}
}
void maoxian(void)
{
	
}
