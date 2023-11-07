#include <stdio.h>
int main(){
    int n,a,sum=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    a = sum / n;
    printf("%d", a);
    return 0;
}