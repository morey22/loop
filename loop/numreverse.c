#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=n;i>0;i=i-7){
        printf("%d\n", i);
    }
    return 0;
}