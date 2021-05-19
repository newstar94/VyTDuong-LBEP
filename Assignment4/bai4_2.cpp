#include <stdio.h>
#include <math.h>
int main(){
	float s,n;
	s=0;
	n=1;
	while (n<1001){
		s=s+1/n;
		n++;
	}
	printf("Tong day so la: %f",s);

}

