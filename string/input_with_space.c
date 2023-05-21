#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    //gets(a);
    fgets(a,14,stdin);
    a[15] = '\0';
    printf("%s",a);
    return 0;
}