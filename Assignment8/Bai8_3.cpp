#include <stdio.h>
int main(){
	int n,y;
	y=0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
		y++;
		for(int i=1;i<y;i++){
			int j=i-1;
			int temp=a[i];
			for(;j>=0&&temp<a[j];j--){
	           	a[j+1] = a[j];
	        }
	        a[j+1]=temp;
		}
	}	
	printf("Mang vua nhap la:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
