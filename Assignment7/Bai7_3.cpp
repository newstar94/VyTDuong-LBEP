#include <stdio.h>
int main(){
	int n,i,count,max;
	max=0;
	count=0;
	printf("Nhap so phan tu muon tao: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		if(a[i]>0){
			count++;
			if(count>max){
				max=count;
			}
		}else{
			count=0;
		}
	}
	if(max>1){
		printf("So cac so nguyen duong lien tiep nhieu nhat la: %d",max);
	}else{
		printf("Khong co chuoi nguyen duong lien tiep");
	}	
}
