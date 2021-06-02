#include <stdio.h>
#include"thuvien.h"
int main(){
	int n;
	printf("Nhap vao n= ");
	scanf("%d",&n);
	for (int i=n+1;;i++){
		if(songuyento(i)){
			printf("So nguyen to lon hon va gan %d nhat la: %d",n,i);
			break;
		}
	}
}

