#include<stdio.h>

int main(){
    int i,j,k=1,n=0;
    int a[3][2],b[2][4],c[3][4];
    printf("���������a��Ԫ��:\n");
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
            a[i][j]=++n+1;
    printf("���������b��Ԫ��:\n");
    n=0;
    for(i=0;i<2;i++)
        for(j=0;j<4;j++)
            b[i][j]=++n+2;
    printf("��������ľ���a��Ԫ��Ϊ:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++)
            printf("%-5d",*(a[i]+j));
        printf("\n");
    }
    printf("��������ľ���a��Ԫ��Ϊ:\n");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++)
            printf("%-5d",*(b[i]+j));
        printf("\n");
    }
    for(i=0;i<3;i++)//���������
        for(j=0;j<4;j++){
            c[i][j]=0;
            for(k=0;k<2;k++)
                c[i][j]+=a[i][k]*b[k][j];
        }

        printf("������˵Ľ��Ϊ:\n");
        for(i=0;i<3;i++){
            for(j=0;j<4;j++)
                printf("%-5d",c[i][j]);
            printf("\n");
        }
}

