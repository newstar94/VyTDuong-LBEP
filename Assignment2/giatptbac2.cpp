#include<stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float d,x,x1,x2;
	printf("Nhap he so thu nhat:");
	scanf("%d",&a);
	printf("Nhap he so thu hai:");
	scanf("%d",&b);
	printf("Nhap he so thu ba:");
	scanf("%d",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			x=-c/b;
			printf("Phuong trinh co nghiem x= %.2f",x);
		}
	}else{
		d=b*b-4*a*c;
		if(d<0){
			printf("Phuong trinh vo nghiem");
		}else{
			if(d==0){
				x=-b/2*a;
				printf("Phuong trinh co nghiem kep x= %.2f",x);
			}else{
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				printf("Phuong trinh co nghiem x1= %.2f\n",x1);
				printf("Phuong trinh co nghiem x2= %.2f\n",x2);
			}
		}
	}
}
