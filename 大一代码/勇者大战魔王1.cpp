#include<stdio.h>
#defind DECISION"你想去哪里？\n1 村庄\n2 冒险\n3 存档\n4 个人信息"
#defind DECISION2"你想挑战的的副本是\n1 1.史莱姆森林\n2 2.暗黑♂幻想乡\n3 3.魔王城堡\n4"
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
printf("在这里你可以进行存储和读取\n1 读取\n2 储存\n3 取消\n");
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
	printf("      个人信息      \n");
	printf("等级:%d   hp:%d   mp:%d   经验:%d   金币:%d   \n",lv,hp,mp,ex,gd);
	printf("技能伤害：1.攻击:%d   2.暗黑气流斩   3.终焉圣火:%d  \n",p,q);
	void lvup(void)
	{
		while(ex>100*lv)
		{
			printf("升级了，你的等级为%d\n",lv+1);
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
			printf("欢迎来到勇者村\n请选择目的地\n1武器店\n2防具店\n3退出\n");
			scanf("%d",&viz); 
			while(viz>=3)
			{
			printf("退出村庄\n");
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
			printf("欢迎来到武器店\n请问你需要什么？\n1短剑(+10攻击)500G\n2霸王魔剑（+30攻击）2000G\n3退出武器店\n");
			scanf("%d",&wq);
			if(wq>2)
			{
				while(wq>3)
				{
					printf("未开放\n");
					wq=0;
				}
				while(wq==3)
				{
					printf("你选择退出\n");
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
						printf("你购买了短剑，攻击力+10，重复无效\n");
						eak=10;
						p=p+eak;
						dj=0;
						wq=0;
					}
					else
					{
						printf("你已经欧买了哦\n");
					}
				}
				else
				{
					printf("金币不足\n");
				}
				wq=0;
			}
			while(wq==2)
			{
				if(gd>2000)
				{
					if(cj=1)
					{
						printf("你购买了长剑，伤害+30，重复无效\n");
						eak=30;
						p=p+eak;
						cj=0;
					}
					else
					{
						printf("你已经购买过了哦\n");
					}
				}
				else
				{
					printf("金币不足\n");
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
		printf("你好勇士，欢迎来到防具店\n");
		printf("你需要什么？\n1布甲500G\n2锁子甲1000G\n3退出商店\n");
		scanf("%d",&fj);
		if(fj>2)
		{
			while(fj>3)
			{
				printf("未开放\n");
				fj=0;
			}
			while(fj==3)
			{
				printf("你选择退出\n");
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
						printf("你购买了布甲，防御力4，重复购买无效\n");
						edf=4;bj=0; 
					}
					else
					{
						printf("金钱不足\n");
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
							printf("你购买了锁子甲，防御力7，重复购买无效\n");
							edf=7;szj=0;
						}
						else
						{
							printf("金币不足\n");
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
 		printf("未开放请重新选择\n");
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
 		printf("请选择技能\n1.攻击(造成%d点伤害，mp+1)\n2.暗黑气流斩     (造成当前生命值百分之八的伤害，mp-3)\n3.终焉圣火     (造成%d点伤害，mp-5)\n",p,q);
	 scanf("%d",&sp);
	 while(4<sp)
	 {
	 	printf("技能选择错误，请重新选择\n");
	 	sp=-1;
	  } 
	  while(sp==1)
	  {
	  tybosshp=tybosshp-p;
	  mp++;
	  printf("你使用的攻击对boss造成%d点伤害，恢复一点mp，boss还有%d血量,你的mp还有%d\n",p,tybosshp,mp);
	  sp=0;	
	  }
	 }while(sp==2)
	 {
	 	while(mp>=3&&sp==2)
	 	{
	 		sh==tybosshp*0.08;
	 		tybosshp=tybosshp*0.92；
			mp=mp-3;
			printf("你使用的技能对BOSS造成%d点伤害,BOSS还剩%d血量,你的血量还剩%d\n",sh,tybosshp,mp); 
			sp=0;
		 }
		 while(mp<3&&sp==2)
		 printf("mp不足3点,无法释放技能\n");
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
	 		printf("你使用技能终焉之火对BOSS造成%d点伤害,BOSS还有%d血量,你的mp还有%d\n",q,tybosshp,mp);
	 		while(mp<5&&sp==3)
	 		{
	 			printf("mp不足5点，无法释放\n");
				 sp==-1; 
			 }
		 }
		 while(tybosshp>0&&sp==0)
		 {
		 	if(tybosshp>hpboss*0.1)
		 	{
		 		sh=15+hp*0.01-edf;
		 		hp=hp-sh;
		 		printf("BOSS撞了你一下，你的血量减少了%d点，你还剩下%d点生命值\n",sh,hp);
		 		sp=-1;
			 }
			 else
			 {
			 	printf("boss变为狂暴阶段");
			 	sh=15+hpboss*0.1-edf;
			 	hp=hp-sh;
			 	printf("boss使用疯狂乱打,你的hp减少了%d，你还剩下…%d点生命值\n"sh,hp);
			 	sp=-1;
			 	
			 }
		 }
		 
	 }
	 while(tybosshp<=0&&i==1)
	 {
	 	printf("你已经击杀boss,恭喜通关\n");
	 	i=i+1;
	 }
	 while(hp<0&&i==1)
	 {
	 	printf("你已经阵亡，请回到新手村重新开始吧\n");
	 	i=i+2;
	 	getchar();
	 	printf("您已经原地复活\n");
	 	hp=200+20*lv;
	 	mp=20+2*lv;
	 }
 }
 void slm1(void)
 {
 	printf("史莱姆出现\n");
 	hpboss=100;
 	tybosshp=hpboss;
  } 
  void slm2(void)
  {
  	if(i==2)
  	{
  		printf("你获得20ex，50金币\n");
		  ex=ex+20;
		  gd=gd+50;
		  printf("你的经验为%d\n",ex);
		   
	  }
	  else
	  {
	  	printf("请继续努力吧\n");
	  	
	  }
  }
  void man1(void)
 {
   printf("那个男人出现了\n"); 
  hpboss=300;
  tybosshp=hpboss;
}
void man2(void)
 {
   printf("那个男人出现了\n"); 
  if(i==2)
  {
  	printf("你获得了200ex,500金币\n");
  	ex=ex+200;
  	gd=gd+500;
  	printf("你的经验为%d",ex);
  	
  }
  else
  {
  	printf("请继续努力吧\n");
  }
}
void mowang(void)
{
	printf("魔王出现了！！\n");
	hpboss=800;
	tybosshp=hpboss;
	
}
void mowang2(void)
{
	if(i==2)
	{
		printf("你获得了1000ex,1000金币\n");
		ex=ex+1000;
		gd=gd+1000;
		printf("你的经验为%d",ex);
	}
	else
	{
		printf("请继续努力吧！\n");
	}
}
void maoxian(void)
{
	
}
