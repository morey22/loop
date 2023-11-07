#include <stdio.h>
int main(){
    int n,f=0,r;
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        r = n%10;
        f = f+r*2;
        n = n/10;
    }
    printf("%d", f);
    return 0;

}