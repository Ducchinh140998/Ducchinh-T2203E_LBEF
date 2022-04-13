#include<stdio.h>
#include<math.h>
int main(){
	int n; 
	printf(" hay nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(i%2==0&&i%3==0){
			printf(" so can tim la: %d\n",i);
		}
	}
}
