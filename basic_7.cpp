#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n;    //n�� 
	int sum=0;//�إ�int�ܼ�sum�`�M 
	printf("��Jn:\n");
	scanf("%d",&n);
	sum=(n*(1+n))/2;   //�`�M����n(1+n)/2 
	printf("�`�M:%d\n",sum);
	system("pause");
	return 0;
} 
