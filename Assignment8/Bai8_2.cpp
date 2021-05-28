#include <stdio.h>
int main(){
	int n,y;
	y=0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		int x;
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&x);
		y++;
		for(int i=0;i<y-1;i++){
			while(a[i]==x){
				printf("Nhap lai phan tu thu %d: ",y);
				scanf("%d",&x);
				i=0;
			}
		}
		a[i]=x;
	}
	printf("Mang da nhap la:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
