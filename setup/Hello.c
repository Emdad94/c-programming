#include<stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    if(tk>=5000){
        printf("cox jabo\n");
        if(tk>=10000){
            printf("saint martin jabo\n");
        }
        else{
            printf("BACK\n");
        }
        
    }
    else{
            printf("no where to go");
        }
    return 0;
}