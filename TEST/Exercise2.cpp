#include<stdio.h>
#include<string.h>
#include"lib2.h"
int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    upperCase(s);
    printf("Upper Case: %s", s);
}
