//nhap 1 mang N so nguyen va 1 so nguyen x.tim gia tri trong mang ma gan x nhat
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("nhap mang n: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x;
	printf("nhap phan tu x: ");
	scanf("%d",&x);
	int hieu=abs(arr[0]-x);
	int j;// vi tri phan tu xa x nhat
	for(int i=0;i<n;i++){
		if(arr[i]-x<hieu){
			hieu=arr[i]-x;
			j=i;
		}
	}
	printf("phan tu gan x nhat trong mang la: %d",arr[j]);
}
