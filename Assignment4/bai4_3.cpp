#include <stdio.h>
#include <math.h>
int main(){
	double n,a,s;
	printf("Nhap vao n: ");
	scanf("%lf",&n);
	s=1;
	a=1;
	while (a<=n){
		s=s*a;
		a=a+1;
	}
	printf("%.0lf! la: %.0lf",n,s);

}

