#include <stdio.h>
int main(){
	int n,x,b,i;
	int a[n];
	printf("Nhap so phan tu muon tao: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Nhap so muon tim: ");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(a[i]==x){
			b=1;
		}else{
			b=0;
		}	
	}
	if(b==1){
		printf("%d co trong mang ban vua nhap",x);
	}else{
		printf("%d khong co trong mang ban vua nhap",x);
	}
}

