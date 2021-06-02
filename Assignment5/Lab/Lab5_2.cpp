#include <stdio.h>
int main(){
	int n,f1,f2,f3;
	f1=1;
	f2=1;
	f3=1;
	printf("Nhap vao n = ");
	scanf("%d",&n);
	for(int i=3;i<=n;i++){
		f1=f2;
		f2=f3;
		f3=f2+f1;
	}
	if(n<=2){
		printf("So fibonaci thu %d la: ",n,f1);
	}else{
		printf("So fibonaci thu %d la: %d",n,f3);
	}
}
