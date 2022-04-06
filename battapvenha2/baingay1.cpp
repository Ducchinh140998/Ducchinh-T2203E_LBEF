#include<stdio.h>
int main(){
	int a;
	printf(" hay nhap a: ");
	scanf("%d",&a);
	if(a>=2&&a<=7){
		printf(" day la thu %d",a);
	}else{
		if(a==8){
			printf(" day la chu nhat");
		}else{
			printf(" day khong phai la ngay trong tuan");
		}
	}
}
