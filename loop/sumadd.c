#include <stdio.h>
int main(){
    int n,sum=0,add=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum = sum+i;
        }
        else{
            add = add+i;
        }
    }
    printf("even no sum %d\n", sum);
    printf("add no sum %d", add);
    return 0;
}