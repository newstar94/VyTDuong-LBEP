#include<stdio.h>
#include<string.h>
int main() {
	int count=0;
    char s[100];
    printf("Nhap chuoi:");
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'a' || s[i] == 'e'|| s[i] == 'u'|| s[i] == 'o'|| s[i] == 'i'||s[i] == 'A' || s[i] == 'E'|| s[i] == 'U'|| s[i] == 'O'|| s[i] == 'I') {
            count++;
        }
    }
    printf("So nguyen am trong chuoi la: %d\n",count);
    printf("So ky tu khac trong chuoi la: %d", strlen(s)-count);
}
