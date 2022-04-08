#include<stdio.h>
#include<math.h>
int main(){
	int n; 
	printf(" hay nhap n: ");
	scanf("%d",&n);
	int i=0;
	while(n>0){
		i=i*10+n%10;
		i++;
		n/=10;
	}
	printf(" so dao nguoc cua n:",i);
}
