#include<stdio.h>
#include"b1s8.h"
int main(){
	int a,b;
	printf("hay nhap a: ");
	scanf("%d",&a);
	printf("hay nhap b: ");
	scanf("%d",&b);
	int s=tinhSomu(a,b);
	printf("so S la: %d \n",s);
}
