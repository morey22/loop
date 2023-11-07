#include <stdio.h>
int main(){
    int n,max,smax;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d", &a);
        if(a>max){
            max = a;
            smax = max;
        }
        else if(a<smax){
            smax = a;
        }
    }
    printf("smax is %d", smax);
    return 0;
}