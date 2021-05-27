#include <stdio.h>
int main(){
	int n,i,min,c;
	int a[n];
	printf("Nhap so phan tu muon tao: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		if(a[i]<0){
			c++;
		}
	}
	if(c+1==n){
		printf("Mang vua nhap khong co so duong");
	}else{
		for (i=0;i<n;i++){
			if(a[i]>0&&min>a[i]){
				min=a[i];
			}
		}
		printf("So nguyen duong nho nhat la: %d",min);
	}
}

