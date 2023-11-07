#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d", &a);
        sum = sum+a;
    }
    printf("%d", sum);
    return 0;
}