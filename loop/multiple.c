#include <stdio.h>
int main(){
    int n,mul=1;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d", &a);
        mul = mul*i;
    }
    printf("%d", mul);
}