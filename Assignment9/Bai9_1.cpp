#include <stdio.h>
#include"thuvien.h"
int main(){
	int n,x;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	nhapmang(n,a);
	printf("Nhap so can tim: ");
	scanf("%d",&x);
	if(timkiem(x,n,a)){
		printf("%d co trong mang vua nhap",x);
	}else{
		printf("%d khong co trong mang vua nhap",x);
	}
}
