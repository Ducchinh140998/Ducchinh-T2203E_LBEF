#include<stdio.h>
int main(){
	int n;
	printf(" hay nhap mang n: ");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[n]);
	}
	int j;
	int s=A[n-1];
	for(j=n-1;j<n;j--){
		if(A[j]%2!=0){
			s=A[j];
			break;
		}
	}
	printf(" so le cuoi cung cua mang la: %d",s);
}

