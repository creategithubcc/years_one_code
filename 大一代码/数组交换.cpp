#include<stdio.h>
main()
{
	int i=0,j=0,k=0,a[3]={5,9,19},b[5]={12,24,26,37,48},c[10];
	while(i<3&&j<5)
		if(a[i]>b[j]){c[k]=b[j];k++;j++;}
		else{c[k]=a[i];k++,i++;}
	while(i<3){c[k]=a[i];k++;i++;}
	while(j<5){c[k]=b[j];k++;j++;}
	for(i=0;i<k;i++)printf("%3d",c[i]);
}
