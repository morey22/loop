#include <stdio.h>
int main(){
    int n,t;
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
        t = i*n;
        printf("%d\n", t);
    }
    return 0;
}