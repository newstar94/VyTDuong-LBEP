#include <stdio.h>
//Tim UCLN
int UCLN(int a, int b){
	if(a<=0||b<=0){
	}else{
		while (a != b){
	        if (a > b){
	            a -= b;
	        }else{
	            b -= a;
	        }
	    }
		if(a==b){
			return a;
		}
	}
}
//Tim BCNN
int BCNN(int a, int b){
	return a*b/UCLN(a,b);
}
//Nhap mang
int nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
}
//Xuat mang
int xuatmang (int n, int a[]){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
//Xoa phan tu cua mang
int xoa(int a[],int &n, int vitri){
	for(int i=vitri+1;i<n;i++){
		a[i-1]=a[i];
	}
	n--;
}
int xoatrung(int a[],int &n){
	for(int i=0; i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				xoa(a,n,j);
				i--;
			}
		}
	}
}
//Tim kiem
bool timkiem(int x,int n, int a[]){
	int b;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			b=1;
			break;
		}else{
			b=0;
		}	
	}
	if(b==1){
		return true;
	}else{
		return false;
	}
}
// Kiem tra so le
bool sole(int x){
	if(x%2==1||x%2==-1){
		return true;
	}else{
		return false;
	}
}

