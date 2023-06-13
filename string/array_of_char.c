#include<stdio.h>
int main(){
    char a[11];
    for (int i=0;i<11;i++)
    {
        scanf("%c",&a[i]);
    }
    for(int i=0;i<11;i++)
    {
        printf("%c\n",a[i]);
    }
    return 0;
}