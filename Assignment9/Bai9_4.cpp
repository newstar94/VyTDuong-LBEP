#include <stdio.h>
#include"thuvien.h"
int main(){
	int a,b;
	printf("Nhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);
	printf("BCNN(%d,%d) = %d",a,b,BCNN(a,b));
}
