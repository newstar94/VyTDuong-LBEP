#include<stdio.h>
int main(){
	int a,b,c,min;
	printf("Nhap so thu nhat:");
	scanf("%d",&a);
	printf("Nhap so thu hai:");
	scanf("%d",&b);
	printf("Nhap so thu ba:");
	scanf("%d",&c);
	min=a;
	if(min>b){
		min=b;
	}
	if(min>c){
		min=c;
	}
	printf("So nho nhat la: %d",min);
}

