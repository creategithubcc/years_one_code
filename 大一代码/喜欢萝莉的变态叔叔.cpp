#include<stdio.h>
int main()
{
int age,money;
printf("嘿嘿嘿，小妹妹叔叔我这里有便宜的票票哦！快告诉叔叔你多大了，叔叔可以把票票低价卖给你哦\n");
scanf("%d",&age);
money=(age<12)?20:(age>80)?0:80;
printf("什么！？你说你已经%d了？",age);
printf("哇靠老妖婆你根本就不是萝莉！你这个老太婆！切！票不卖你了，自己去买成人票吧老人家！\n");
printf("你要花%d元买票了。。。",money); 
return 0; 
}
/*这个怪叔叔到底认为多大年龄才能算是少女。。。*/
