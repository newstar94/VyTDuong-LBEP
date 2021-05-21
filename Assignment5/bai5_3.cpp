#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap vao so a= ");
	scanf("%d",&a);
	printf("Nhap vao so b= ");
	scanf("%d",&b);
	if(a<=0||b<=0){
	}else{
		printf("UCLN (%d, %d)= ",a,b);
		while (a != b){
	        if (a > b){
	            a -= b;
	        }else{
	            b -= a;
	        }
	    }
		if(a==b){
			printf("%d",a);
		}
	}
	
}

