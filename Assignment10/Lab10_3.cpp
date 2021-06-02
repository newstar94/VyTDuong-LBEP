#include<stdio.h>
#include<string.h>
int main() {
	int n;
	printf("Nhap so chuoi:");
    scanf("%d",&n);
    char s[n][100];
    for(int i=0; i<n; i++){
    	printf("Nhap chuoi thu %d: ",i+1);
    	scanf("%s",s[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(s[j],s[j+1])>0){
				char temp[100];
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	for(int i=0; i<n; i++){
    	printf("%s\n",s[i]);
	}
}
