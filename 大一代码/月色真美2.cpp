#include<stdio.h> 
void a(int aa)
{for(int i=0;i<aa;i++)
printf(" ");}
void b()
{printf ("*");}
char c(int cc)
{printf("%c",cc);return 0;}
int main()
{a(6);b();a(3);b();a(5);b();a(3);b();
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
printf ("\n");return 0;
}
