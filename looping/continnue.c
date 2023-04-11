#include<stdio.h>
int main(){
    long long int sum = 0;
    int i;
    for(i=1;i<=10;i+=1){
         if(i==5){
            continue;
        }
        printf("%d\n",i);
       
    }
    return 0;
}