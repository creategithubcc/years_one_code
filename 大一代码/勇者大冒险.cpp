//��Ŀ���ƣ�c��������ð����Ϸ
//�޸����ڣ�2018.11.28
//���ߣ�Y-kirito & Z-lee
//�������������֣�ת���������� 
#include<stdio.h>
#define DECISION "����ȥ�ģ�\n1    ��ׯ\n2    ð��\n3    �鿴������Ϣ\n4    �浵���״���Ϸ���ȴ洢һ������Ϸ��"//����� 
#define DECISION2 "������ս�ĸ����ǣ�1.ʷ��ķɭ��  2.�粼�ֲ���  3.���˹ű�"//����� 
void fjshop(void);//���ߵ�
void wqshop(void);//������
void vill(void);//��ׯ
void zdmk(void);//����
void lvup(void);//����
void slm(void);//ʷ��ķ
void slm1(void);
void slm2(void);//���
void gbl(void);//�粼��
void gbl1(void);
void gbl2(void);//end
void gr(void);//����
void gr1(void);//
void gr2(void);//end//�Ұ���Щ�����������£��Ե����� 
void maoxian(void);
void vill(void);
void pi(void);//personal information�������rw(����)�������º��ڼ������� 
void cd(void);//�浵 
int hp=200,mp=20,sp,ex=0,p=5,q=20,lv=1,i=1,eak=0,edf=0,gd=0,viz=0,sh,tybosshp,x,hpboss,fb;
 
 
int main(void)//������ʼ
{
while(2>1)
{
	
	while(x==0)
	{
		printf("%s\n",DECISION);
		scanf("%d",&x);
		while(x==1)
		{
			vill();
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
			pi();
			x=0;
		}
		while(x==4)
		{
			cd();
			x=0;
		}
	}
}
return 0;
}//�����򵽴˴����
 void cd(void)//�浵ģ�� 
 {
 	 int du;
 	 printf("����Ҫ��ȡ���Ǵ洢?\n1  ��ȡ\n2  �洢\n3  ȡ��\n");
	 scanf("%d",&du); 
	 int a[]={lv,hp,mp,ex,gd};
	 while(du==1)
  {
     FILE *fpRead=fopen("data.txt","r");
     int b[5];
	for(int i=0;i<5;i++)
	{
		fscanf(fpRead,"%d ",&b[i]);
		a[i]=b[i];
	}
	lv=a[0],hp=a[1],mp=a[2],ex=a[3],gd=a[4];
    du=-1;
  }	
	 while(du==2)
  {
	 FILE *fpWrite=fopen("data.txt","w");
	for(int i=0;i<5;i++)
	{
	fprintf(fpWrite,"%d ",a[i]);
    }
    fclose(fpWrite);
    du=-1;
  }
  	 while(du==3)
  {
    du=-1;
  }
}
void pi(void)//������Ϣģ��
 {
 printf("                  ������Ϣ                \n") ;
 printf("�ƺţ���δ���� \n");//����
 printf("�ȼ�:%d    hp:%d     mp:%d     ����:%d     ���:%d    \n",lv,hp,mp,ex,gd); 
 printf("�����˺���1.�ػ�:%d   2.��Ѫ:bossԽǿ���˺�Խ��    3.�Ǳ�����ն:%d  \n",p,q);
 }
void lvup(void)//����ģ��
{
	while(ex>100*lv)//�Ѿ��������������Ϊÿ�����ﾭ�鲻ͬ 
 
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
void vill(void)//��ׯ
{
	while(viz==0)
{
	printf("��ӭ�ص���ׯ��ʿ\n��ѡ��Ŀ��\n1    ������\n2    ���ߵ�\n3    �˳���ׯ\n");
	scanf("%d",&viz);
	while(viz>=3)
	{
		printf("�˳���ׯ\n");
		viz=-1;
	}
	
	
		while(viz==1)
	{	
  		wqshop();
  	}
  	    while(viz==2)
	{
		fjshop();
	}
}
}//��ׯģ��
void wqshop(void)//������ 
{
		while(viz==1)
		{   int wq=0,dj=1,cj=1;
			printf("�����ʿ����ӭ����������\n��������Ҫʲô��\n1    �̽�(�˺���10)\n2  500���  ����(�˺���30)\n3  2000���  �˳�������\n");
			scanf("%d",&wq);
			if(wq>2)
			{
				while(wq>3)
				{
					printf("δ���ţ������ڴ�\n");
					wq=0;
				}
				while(wq==3)
				{
					printf("��ѡ���˳�\n;");
					viz=0;
					wq=0;
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
						printf("�㹺���˶̽����˺���ʮ���ظ�������Ч\n");
						eak=10;
						p=p+eak;//����ȫ�ֱ�����װ���ӳɹ�����
						dj=0;
						wq=0;
					}
					else
					{
						printf("���Ѿ��������\n");
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
						printf("�㹺���˳������˺�����ʮ���ظ�������Ч\n");
						eak=30;
						p=p+eak;//����ȫ�ֱ�����װ���ӳɹ�����
						cj=0;
					}
					else
					{
						printf("���Ѿ��������\n");
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
 void fjshop(void)//���ߵ�
{
		while(viz==2)
		{   int fj=0,bj=1,szj=1;
			printf("�����ʿ����ӭ�������ߵ�\n��������Ҫʲô��\n1    ����(�˺�����4)\n2  500���  ���Ӽ�(�˺�����7)\n3  1000���  �˳����ߵ�\n");
			scanf("%d",&fj);
			if(fj>2)
			{
				while(fj>3)
				{
					printf("δ���ţ������ڴ�\n");
					fj=0;
					
				}
				while(fj==3)
				{
					printf("��ѡ���˳�\n;");
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
						printf("�㹺���˲��ף��˺�����4���ظ�������Ч\n");
						edf=4;//����ȫ�ֱ�����װ���ӳɹ�����
						bj=0;
					}
					else
					{
						printf("���Ѿ��������\n");
					}
				}
				else
				{
					printf("��Ҳ���\n");
				}
				fj=0;
				}
				while(fj==2)
				{
				if(gd>1000)
				{
					if(szj=1)
					{
						printf("�㹺�������Ӽף��˺�����7���ظ�������Ч\n");
						edf=7;//����ȫ�ֱ�����װ���ӳɹ�����
						szj=0;
					}
					else
					{
						printf("���Ѿ��������\n");
					}
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
void maoxian(void)//ð��ģ�� 
{
printf("%s\n",DECISION2);
scanf("%d",&fb);
if(fb>3)
	{
		printf("δ����������ѡ��\n");
	}
else
	{
 
 switch (fb)//��������������࣬�����ڼӵ�����Ʒʱ�ܷ��� 
 
	{
 
      case 1:
    slm();
	  break;
      
	  case 2:
    slm();
    gbl();
      break;
      
	  case 3:
    slm();slm();//ͬ�� 
	gbl();  	
    gr();
      break;
 
}
}
lvup();
hp=200+20*lv;
mp=20+2*lv;
}
void slm(void)//����ģ�� 
{
  slm1();
  zdmk();
  slm2();
}
void gbl(void)
{
  gbl1();
  zdmk();
  gbl2();
}
void gr(void)
{
  gr1();
  zdmk();
  gr2();
}
void zdmk(void)//ս��ģ�� 
{
   while(hp>0&&tybosshp>0)
	{
    	i=1;
        printf("��ѡ����\n1.�ػ�     (���%d���˺���mp+1)\n2.��Ѫ     (��ɵ�ǰ����ֵ�ٷ�֮�˵��˺���mp-3)\n3.�Ǳ�����ն     (���%d���˺���mp-5)\n",p,q);//����� 
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
         printf("��ʹ�ü����ػ���boss���%d���˺�,�ָ�һ��mp,boss����%dѪ�������mp����%d\n",p,tybosshp,mp);
         sp=0;
 
        }
 
        while(sp==2)
    	{
 
        while(mp>=3&&sp==2)
    	{
    	sh=tybosshp*0.08;
        tybosshp=tybosshp*0.92;
    	mp=mp-3;
        printf("��ʹ�ü�����Ѫ��boss���%d���˺���boss����%dѪ�������mp����%d\n",sh,tybosshp,mp);
        sp=0;
		}
     
	    while(mp<3&&sp==2)
		{
        printf("mp����3��,�޷��ͷż�����Ѫ\n");
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
        printf("��ʹ�ü����Ǳ�����ն��boss���%d���˺���boss����%dѪ�������mp����%d\n",q,tybosshp,mp);//���� 
		}
		while(mp<5&&sp==3)
			{
				printf("mp����5��,�޷��ͷż����Ǳ�����ն \n");
				sp=-1;
			}
		}
    	while(tybosshp>0&&sp==0)
    	{
          if(tybosshp>hpboss*0.1)//bossѪ���½���10%���±�ŭ 
	    	{
			sh=15+hp*0.01-edf;
			hp=hp-sh;
			printf("bossײ����һ�£����hp������%d�㣬�㻹��%d������ֵ\n",sh,hp);
			sp=-1;
			}
        else
        {
           printf("boss��Ϊ��״̬");
		   sh=15+hpboss*0.1-edf;//�˺����� 
		   hp=hp-sh;
		   printf("bossʹ�÷���Ҵ����hp������%d�㣬�㻹��%d������ֵ\n",sh,hp); 
		   sp=-1; 
		}
		}
	}
	while(tybosshp<=0&&i==1)
	{
		printf("���ѻ�ɱBOSS,��ϲͨ�أ�\n");
		i=i+1;
	}
	while(hp<0&&i==1)
	{
		printf("�������������ڼ򵥸�����������\n");
		i=i+2;
		getchar();
		printf("����ԭ�ظ���\n�ָ�hp,mp");
		hp=200+20*lv;
		mp=20+2*lv;
	}
 
}
 
//�ָ���ʷ��ķ
void slm1(void)
{
  printf("ʷ��ķ����\n");
 
  hpboss=100;//BOSS������ֵ
 
  tybosshp=hpboss;
}
void slm2(void)
{
if(i==2)
  {
	  printf("����20ex,50���\n");//���ﾭ����ȫ������ 
 
      ex=ex+20;
 
      gd=gd+50;
      
 	  printf("��ľ���Ϊ%d\n",ex);
  }
  else
  {
	  printf("����Ŭ����\n");
  }
}
 
void gbl1(void)//�粼��
{
  printf("�粼�ֳ���\n");
 
  hpboss=300;//BOSS������ֵ
 
  tybosshp=hpboss;
}
void gbl2(void)//end
{
if (i==2)
 {
     printf("����100ex,200���\n");
 
     ex=ex+100;
 
     gd=gd+200;
     
     printf("��ľ���Ϊ%d\n",ex);
  }
  else
  {
	  printf("����Ŭ����\n");
  }
  }
  void gr1(void)//����
{
  printf("���˳���\n");
 
  hpboss=800;//BOSS������ֵ
 
  tybosshp=hpboss;
}
void gr2(void)
{
	  if(i==2)
  {
	  printf("����300ex,500���\n");
 
      ex=ex+300;
 
      gd=gd+500;
      
      printf("��ľ���Ϊ%d\n",ex);
  }
  else
  {
	  printf("����Ŭ����\n");
  }
}
