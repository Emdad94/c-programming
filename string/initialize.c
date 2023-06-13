#include<stdio.h>
int main(){
    //char a[6] = {'E','M','D','A','D'}; // no garantee
    char a[8] = "EMDADUL"; // garantee 
    // int sz = sizeof(a)/sizeof(char);
    // printf("%d\n",sz);
    /*for (int i=0;i<5;i++)
    {
        printf("%c\n",a[i]);
    }*/
    printf("%s",a);
    return 0;
}