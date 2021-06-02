#include <stdio.h>
int main(){
	int n,count;
	count=0;
	printf("Nhap vao n = ");
	scanf("%d",&n);
	for( int i = 2 ; i < n ; i++){
		if (n % i == 0){
			count++;
		}
	}
	if (count == 0&&n>1){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong la so nguyen to",n);
	}	
}s
