#include<stdio.h>
int main(){
	int n;
	int s=0;
	printf(" hay nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0){
			printf(" cac uoc cua n la: %d\n",i);
			s+=i;
		}
	}
	printf(" tong cac uoc cua n la ; %d\n", s);
}
