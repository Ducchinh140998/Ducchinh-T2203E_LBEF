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
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if (arr[j] > arr[j+1])
	        {
	           int temp = arr[j];
	           arr[j] = arr[j+1];
	           arr[j+1] = temp;
	        }

		}
	}
	int a,b;
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
		a=arr[0];
		b=arr[n-1];
		
	}
	printf("a la: %d\n",a);
	printf("b la: %d",b);
}
