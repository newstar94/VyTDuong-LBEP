#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap vao so can nghich dao: ");
	scanf("%d",&a);
	if(a<=0||a>9999){
		printf("So ban nhap khong dung");
	}else{
		printf("So nghich dao cua %d la: ",a);
			b=b*10+a%10;
			a=a/10;
		if(a!=0){
			b=b*10+a%10;
			a=a/10;
		}
		if(a!=0){
			b=b*10+a%10;
			a=a/10;
		}
		if(a!=0){
			b=b*10+a%10;
			a=a/10;
		}
		printf("%d",b);
	}

}

