#include <stdio.h>
int main(){
    int a,f=1;
    scanf("%d", &a);
    for(int n=a;n>0;n--){
        f = f*n;
        printf("%d\n", f);
    }
    return 0;
}