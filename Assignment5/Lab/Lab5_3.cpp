#include <stdio.h>
int main(){
	int n,f1,f2,f3;
	f1=1;
	f2=1;
	printf("Nhap vao n=");
	scanf("%d",&n);
	if( n<=2)
	{
		printf("So fibonaci nho hon %d la %d",n,f1);
	}else
	
		printf("So fibonaci nho hon %d la: ",n);
		for(int i=0;;i++)
	{
		f1=f2;
		f2=f3;
		f3=f2+f1;
		if(f3>=n){
			break;
		}
	}
	printf("%d\n",f2);
}
