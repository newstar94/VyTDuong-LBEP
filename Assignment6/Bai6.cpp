#include<stdio.h>
int main(){
	int c,s;
	c=1;
	s=0;
	while(c==1){
		int a,b;
		printf("1. Chon mon an\n");
		printf("2. Goi do uong\n");
		printf("3. Thanh toan\n");
		printf("4. Thoat\n");
		printf("Moi chon menu: ");
		scanf("%d",&a);
		while (a<1||a>4){
			printf ("Vui long nhap so tu 1 den 4: ");
			scanf("%d",&a);
		}
		if(a==1){
			//printf("Moi chon mon an:\n");
			printf("1. Com ga\n");
			printf("2. Pho\n");
			printf("3. Bun\n");
			printf("4. Quay lai\n");
			printf("Moi chon mon an: ");
			scanf("%d",&b);
			while (b<1||b>4){
			printf ("Vui long nhap so tu 1 den 4: ");
			scanf("%d",&b);
			}
			if(b==1){
				printf("Cam on ban da chon Com ga\n");
				s+=50000;
			}else if(b==2){
				printf("Cam on ban da chon Pho\n");
				s+=30000;
			}else if(b==3){
				printf("Cam on ban da chon Bun\n");
				s+=25000;
			}
		}else if(a==2){
			//printf("Moi chon do uong:\n");
			printf("1. Nuoc ep\n");
			printf("2. Sinh to\n");
			printf("3. Cocacola\n");
			printf("4. Quay lai\n");
			printf("Moi chon do uong: ");
			scanf("%d",&b);
			while (b<1||b>4){
			printf ("Vui long nhap so tu 1 den 4: ");
			scanf("%d",&b);
			}
			if(b==1){
				printf("Cam on ban da chon Nuoc ep\n");
				s+=25000;
			}else if(b==2){
				printf("Cam on ban da chon Sinh to\n");
				s+=35000;
			}else if(b==3){
				printf("Cam on ban da chon Cocacola\n");
				s+=15000;
			}
		}else if(a==3){
			printf("So tien can thanh toan la: %d\n",s);
			printf("Cam on quy khach!");
			break;
		}else if(a==4){
			break;
		}
	}	
}
