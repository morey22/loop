#include <stdio.h>
int main(){
    int n,sum=0,f=1;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        f = f*i;
        sum = sum+f;
        printf("%d\n", sum);
    }
    return 0;
}