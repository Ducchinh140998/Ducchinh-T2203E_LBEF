#include<stdio.h>
#include<math.h>
int main(){
	int n; 
	printf(" hay nhap n: ");
	scanf("%d",&n);
	int i=1;
	int s=0;
	while(i<n){
	        n%i==0;
	    	s+=i;
	    	i++;
	}
	if(s==n){
		printf(" la so hoan hao %d",n);
		
	}else{
		printf("ko la so hoan hao %d",n);
	}
}
