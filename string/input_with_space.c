#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    //gets(a);
    fgets(a,25,stdin);
    //a[25] = '\0';
    printf("%s",a);
    return 0;
}