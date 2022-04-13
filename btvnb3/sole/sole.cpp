#include<stdio.h>
int main(){
	int n;
	printf(" hay nhap N: ");
	scanf("%d",&n);
	for(int i=1;i<n;i+=2){
		if(i%2!=0){
			printf(" cac gia tri le nho hon: %d \n",i);
	}
  }
}
