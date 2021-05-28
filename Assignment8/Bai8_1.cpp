#include <stdio.h>
int main(){
	int n,x;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);	
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if (a[j] < a[j+1]){
           	int temp = a[j];
          	a[j] = a[j+1];
           	a[j+1] = temp;
        	}
		}
	}
	printf("Nhap so x can so sanh: ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]<x){
			printf("So nho gan x nhat la: %d",a[i]);
			break;
		}
	}
}
