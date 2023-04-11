/*#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if(i%2==0){
            printf("%d-number is even\n",i);
        }
        else{
            printf("%d-number is odd\n",i);
        }
    }
    return 0;
}
*/
#include<stdio.h>
int main(){

    int i,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            printf("%d-number in even\n",i);
        }
        else{
            printf("%d-number is odd\n",i);
        }
    }
    return 0;
}