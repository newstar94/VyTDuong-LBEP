#include <stdio.h>
int main(){
	int n,i,tong,max,ssh,count;
	count=0;
	ssh=0;
	max=0;
	tong=0;
	printf("Nhap so phan tu muon tao: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		if(a[i]>0){
			tong+=a[i];
			count++;
			if(tong>max){
				max=tong;
			}
			if(count>ssh){
				ssh=count;
			}
		}else{
			tong=0;
			count=0;
		}
	}
	if(ssh>1){
		printf("Chuoi so nguyen duong co tong lon nhat la: %d",max);
	}else{
		printf("Khong co chuoi nguyen duong lien tiep");
	}
}
