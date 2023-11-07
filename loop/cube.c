#include <stdio.h>
int main(){
    int n,c;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        c = i*i*i;
        printf("%d\n", c);

    }
    return 0;
}