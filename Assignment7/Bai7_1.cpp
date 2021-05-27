#include <stdio.h>
int main(){
	int n,i,le,c;
	c=0;
	printf("Nhap so phan tu muon tao: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		if(a[i]%2==0){
			c++;
		}
	}
	if(c==n){
		printf("Day vua nhap khong co so le");
	}else{
		for (i=0;i<n;i++){
			if(a[i]%2==1){
				le=a[i];
			}
		}
		printf("So le cuoi cung cua mang la: %d",le);
	}
}

