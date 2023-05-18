#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (a%b==0){
        printf("multiples");
    }
    else if(b%a==0){
        printf("multiples");
    }
    else{
        printf("no multiples");
    }
    return 0;
}