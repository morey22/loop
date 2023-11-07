#include <stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c = c+1;
        }
    }
    if(c==2){
        printf("this is prime number");
    }
    else{
        printf("this is not prime number");
    }
    return 0;

}