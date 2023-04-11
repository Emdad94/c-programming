#include<stdio.h>
int main(){
    long long int sum = 0;
    int i;
    for(i=1;i<=10;i+=1){
        
        printf("%d\n",i);
        if(i==5){
            break;
        }
    }
    return 0;
}