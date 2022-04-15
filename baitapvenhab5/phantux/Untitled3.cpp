#include<stdio.h>
int main(){
	int n; 
	printf(" hay nhap mang n: ");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){// duyet mang
		scanf("%d",&A[i]);
	}
	int x;
	printf("hay nhap phan tu x: ");
	scanf("%d",&n);
	bool f=true;
	for(int i=0;i<n;i++){
		if(A[i]!=x){
			f=false;
			printf(" phan tu x co trong mang %d",x);
			break;
		}else{
			printf(" phan tu x ko co trong mang %d",x);
		}
	}
}
