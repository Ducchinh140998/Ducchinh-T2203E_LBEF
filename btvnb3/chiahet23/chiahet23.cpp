#include<stdio.h>
#include<math.h>
int main(){
	int n; 
	printf(" hay nhap n: ");
	scanf("%d",&n);
	int i=0;
	while(i+6<n){
		i+=6;
	}if(n%6==0){
		printf(" la so chua chi het cho 2 va 3");
	}else{
		printf(" la so chia het cho 2 va 3");
	}
}
