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
void nhapmang(int n, int a[]){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
}
//Xuat mang
void xuatmang (int n, int a[]){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
//Xoa phan tu cua mang
void xoa(int a[],int &n, int vitri){
	for(int i=vitri+1;i<n;i++){
		a[i-1]=a[i];
	}
	n--;
}
void xoatrung(int a[],int &n){
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
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return true;
		}	
	}
	return false;
}
// Kiem tra so le
bool sole(int x){
	if(x%2==1||x%2==-1){
		return true;
	}else{
		return false;
	}
}
//Kiem tra so nguyen to
bool songuyento(int x){
	int count = 0;
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                count++;
            }
        }
        if (count == 0&&x>1){
            return true;
		}else{
			return false;
		}	
}
// Dao nguoc so
int daonguoc(int a){
	int b=0;
	while(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	return b;
}
//fibonaci
int fibonaci(int n){
	int f1,f2,f3;
	f1=1;
	f2=1;
	f3=1;
	for(int i=3;i<=n;i++){
		f1=f2;
		f2=f3;
		f3=f2+f1;
	}
	if(n<=2){
		return f1;
	}else{
		return f3;
	}
}
// Sap xep
void sapxep(int n, int arr[]){
	for(int i=1;i<=n;i++){
			int j=i-1;
			int temp=arr[i];
			for(;j>=0&&temp<arr[j];j--){
	           	arr[j+1] = arr[j];
	        }
	        arr[j+1]=temp;
		}
}
