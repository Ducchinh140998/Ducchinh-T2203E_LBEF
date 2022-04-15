#include<stdio.h>
int main(){
	int n; 
	printf(" hay nhap mang n: ");
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){// duyet mang
		scanf("%d",&A[i]);
	}
	int s=0;
	float tb;
	int dem=0;
	for(int i=0;i<n;i++){
		if(A[i]%2!=0){
			s+=A[i];
			dem++;
		}
		tb=((float)s)/dem;
	}
	printf(" trung binh cac so le la %f",tb);
	
}
