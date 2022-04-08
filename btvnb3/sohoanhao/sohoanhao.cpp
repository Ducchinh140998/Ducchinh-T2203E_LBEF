#include<stdio.h>
#include<math.h>
int main(){
	int n; 
	printf(" hay nhap n: ");
	scanf("%d",&n);
	int i=1;
	int s=0;
	while(n%i==0){
		if(i<n){
			s+=i;
		    i++;
		}
	}
	if(s==n){
		printf(" la so hoan hao",n);
	}else{
		printf("ko la so hoan hao",n);
	}
}
