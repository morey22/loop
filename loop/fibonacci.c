#include <stdio.h>
int main(){
    int n,a=0,b=1;
    scanf("%d", &n);
    for(int i=0;i<=n;i=a+b){
        printf("%d\n", i);
        a=b;
        b=i;
    }
    return 0;
}