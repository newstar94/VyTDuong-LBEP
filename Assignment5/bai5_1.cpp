#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao n = ");
	scanf("%d",&n);
	if(n<1){
	}else{
		printf("Cac so chan be hon %d la:\n",n);
		for(int i=0;i<n;i++){
			if(i%2==0){
				printf("%d\n",i);
			}
		}
	}

}

