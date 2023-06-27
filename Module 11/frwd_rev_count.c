#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[6]);
    int forwardcount =0;
    int reversecount =0;
    for(int i =0; i<size;i++){
        forwardcount++;
    }
    for (int i= size-1;i>=0;i--){
        reversecount++;
    }
    printf("forward count %d\n",forwardcount);
    printf("reverse count %d\n",reversecount);
    return 0;
}