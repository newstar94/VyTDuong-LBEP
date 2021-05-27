#include <stdio.h>
int main(){
	int n,s,ssh,i;
	ssh=0;
	float tbc;
	printf("Nhap so phan tu muon tao: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		if((i+1)%2==1){
			if (a[i]%2==1){
			s+=a[i];
			ssh++;
			}
		}
	}
	tbc=float(s)/ssh;
	printf("Trung binh cong cac so le o vi tri chan cua day la: %f",tbc);
}

