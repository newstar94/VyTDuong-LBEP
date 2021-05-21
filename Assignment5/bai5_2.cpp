#include <stdio.h>

int main(){
	int n,s;
	printf("Nhap vao n = ");
	scanf("%d",&n);
	if(n<=0){
	}else{
		printf("Cac uoc cua %d la:\n ",n);
		for(int i=1;i<=n;i++){
			if(n%i==0){
				printf("%d\n ",i);
				s+=i;
			}
		}
		printf("Tong cac uoc cua %d la: %d",n,s);
	}
	

}

