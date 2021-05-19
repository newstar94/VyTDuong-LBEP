#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float cv,p,S;
	printf("Nhap canh thu nhat:");
	scanf("%d",&a);
	printf("Nhap canh thu hai:");
	scanf("%d",&b);
	printf("Nhap canh thu ba:");
	scanf("%d",&c);
	while (a+b<=c||a+c<=b||b+c<=a){
		printf("So ban nhap chua dung, moi nhap lai\n");
		printf("Nhap canh thu nhat:");
		scanf("%d",&a);
		printf("Nhap canh thu hai:");
		scanf("%d",&b);
		printf("Nhap canh thu ba:");
		scanf("%d",&c);
	}
	cv=a+b+c;
	p=cv/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi tam giac la: %.0f\n",cv);
	printf("Dien tich tam giac la: %.2f",S);
	}

