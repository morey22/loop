#include <stdio.h>
int main(){
    int n,a=10;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
         printf("%d\n", a);
         a = a+10;
    }
    return 0;
}