#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,cv;
	float p,S;
	printf("Nhap canh thu nhat: ");
	scanf("%d",&a);
	printf("Nhap canh thu hai: ");
	scanf("%d",&b);
	printf("Nhap canh thu ba: ");
	scanf("%d",&c);
	if (a+b<=c||a+c<=b||b+c<=a){
		printf("Loi, so ban nhap khong phai ba canh cua tam giac!\n");
	}else{
		cv=a+b+c;
		p=cv/2.0;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Chu vi tam giac la: %d\n",cv);
		printf("Dien tich tam giac la: %.2f",S);
	}
}
