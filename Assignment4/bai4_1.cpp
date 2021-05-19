#include <stdio.h>
#include <math.h>
int main(){
	double s,n;
	s=0;
	n=0;
	while (n<100001){
		s=s+n;
		n++;
	}
	printf("Tong day so la: %.0lf",s);

}

