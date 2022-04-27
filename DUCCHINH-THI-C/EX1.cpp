#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Import N: ");
	scanf("%d",&n);
	float S=0;
	int i;
	if(n>0){
		for(i=1;i<=n;i++){
			S+=(float)1/i;
		}
		printf("SUM S= %f",S);
	}else{
		printf("ERROR");
	}
}
