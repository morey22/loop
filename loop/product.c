#include <stdio.h>
int main(){
    int n,p=1,a;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        p = p*i;
    }
    a = p/n;
    printf("%d\n", p);
    printf("%d", a);
    return 0;

}