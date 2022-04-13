#include<stdio.h>
int main(){
	int n;
	int dv;
	int s;
	printf(" hay nhap n: ");
	scanf("%d",&n);
	for( ;n!=0; ){
		dv=n%10;
		s+=dv;
		n/=10;
	}
	printf(" tong cac chu so cua n la: %d",s);
}
