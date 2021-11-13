#include <stdio.h>
void a(int aa)
{
	for(int i=0;i<aa;i++)
	printf(" ");
}
void b()
{
	printf ("*");
}
char c(int cc)
{
	printf("%c",cc);return 0;
}

int main()
{
	int i;
	float x,y,z; 
	printf("偷偷告诉你一个秘密哦！\n");
	printf("1.YES        2.NO   \n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			for(x=1.2f;x>-1.0f;x-=0.1f)
			{
				for(y=-1.5f;y<1.5f;y+=0.05f)
				{
					z=x*x+y*y-1;
					putchar(z*z*z-x*x*x*y*y<0.0f?'9':' ');
				}
				putchar('\n');
			} 
			printf("\n              It's a beautiful moon tonight\n\n");
			return 0;
		case 2:
			a(6);b();a(3);b();a(5);b();a(3);b();
			printf ("\n");
			a(4);b();a(8);b();a(8);b();
			printf ("\n");
			a(3);b();a(19);b();
			printf ("\n");
			a(3);b();a(4);c(73);a(1);c(76);c(111);c(118);
			c(101);a(1);c(89);c(111);c(117);a(5);b();
			printf ("\n");
			a(4);b();a(17);b();
			printf ("\n");
			a(6);b();a(13);b();
			printf ("\n");
			a(8);b();a(9);b();
			printf ("\n");
			a(10);b();a(5);b();
			printf ("\n");
			a(13);b();
			printf ("\n");
			printf("即便如此，这份心意依旧想要传达给你！"); 
			return 0;
	}
}   
