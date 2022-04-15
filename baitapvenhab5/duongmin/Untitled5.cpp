#include<stdio.h>
int main(){
	int n;
	printf(" hay nhap mang n: ");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[n]);
	}
	int min;
	for(int i=0;i<n;i++){
		if(A[i]>0){
			min=A[i];
		}
	}
	int j;
	for(j=0;j<n;j++){
		if(A[j]>0&&A[j]<min){
			min=A[j];
		}
	}
	printf(" so nguyen duong nho nhat la: %d",j);
	
}
