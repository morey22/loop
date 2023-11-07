#include <stdio.h>
int main(){
    int n,max=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d", &a);
        if(a>max){
            max = a;
        };
    }
    printf("max is %d", max);
    return 0;
}