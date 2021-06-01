#include <stdio.h>
#include"thuvien.h"
int main(){
	int a,b;
	printf("Nhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);
	printf("UCLN(%d,%d) = %d",a,b,UCLN(a,b));
}
