#include<stdio.h>
#include<math.h>
void nhapMang (int ary[],int n){
	for(int i=0;i<n;i++){
		printf("import element :");
		scanf("%d",&ary[i]);
	}
}
void inNguoc(int ary[],int n){
	for(int i=n-1;i>=0;i--){
		printf("reverse array: %d\n",ary[i]);
	}
}
int main(){
	int n;
	do{
		printf("Import size array N:");
		scanf("%d",&n);
	}while(n<=0);
	int arr[n];
	nhapMang (arr,n);
	inNguoc (arr,n);	
}
