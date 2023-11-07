#include <stdio.h>
int main(){
    int n,a=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        a = a*10+2;
        printf("%d\n", a);
    }
    return 0;
}