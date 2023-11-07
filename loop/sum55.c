#include <stdio.h>
int main(){
    int n,sum=0,a=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        a = a*10+5;
        printf("%d\n", a);
    }
    return 0;
}