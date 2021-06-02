#include <stdio.h>
#include <stdlib.h>
#include "thuvien.h"
int main(){
	int *arr;
	int n,m;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	arr = (int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",arr+i);
		int y=i;
		sapxep(y,arr);
	}
	printf("So lon nhat mang vua nhap la: %d\n",arr[n-1]);
	printf("Mang vua nhap la:\n");
	xuatmang(n,arr);
	printf("\nNhap so phan tu muon them: ");
	scanf("%d",&m);
	arr = (int *)realloc(arr,(n+m)*sizeof(int));
	for(int i=n;i<n+m;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",arr+i);
	}
	for(int i=0;i<(n+m);i++){
		int y=i;
		sapxep(y,arr);
	}
	printf("So lon nhat la: %d\n",arr[n+m-1]);
	printf("Mang vua nhap la:\n");
	xuatmang((n+m),arr);
	free(arr);
}
