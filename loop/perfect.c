#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(n%1==0){
            sum = sum+i;
        }
    }
    if(sum==n){
        printf("this is perfect no. %d", n);
    }
    else{
        printf("this is not perfect no. %d", n);
    }
    return 0;
}