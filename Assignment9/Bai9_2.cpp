#include <stdio.h>
#include"thuvien.h"
int main(){
	int n;
	int c=0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	nhapmang(n,a);
	xoatrung(a,n);
	for(int i=0;i<n;i++){
		if(sole(a[i])){
			printf("%d\t",a[i]);
			c=1;
		}
	}
	if (c==0){
		printf("Mang vua nhap khong co so le");
	}
}
