#include<stdio.h>
#include<math.h>
int main(){
	int a,b,UCLN,BCNN;
	printf(" Hay nhap a: ");
	scanf ("%d",&a);
	printf(" Hay nhap b: ");
	scanf("%d",&b);
	for(UCLN=a;UCLN>0;UCLN--){
		if(a%UCLN==0&&b%UCLN==0){
			printf("UCLN la: %d\n",UCLN);
			break;
		}
	}
	for(BCNN=a;BCNN<a*b;BCNN++){
		if(BCNN%a==0&&BCNN%b==0){
			printf("BCNN la: %d\n",BCNN);
			break;
		}
	}
}
