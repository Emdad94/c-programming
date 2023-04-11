/*#include<stdio.h>
int main(){
    int i;
    for(i=10;i>=1;i=i-1){
        printf("%d\n",i);
    }
    return 0;
}
*/

#include<stdio.h>
int main(){
    long long int sum = 0;
    int i;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
        
    }
       printf("%lld\n",sum); 
    return 0;
}