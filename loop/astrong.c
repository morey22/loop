#include <stdio.h>
#include<math.h>
int main()
{
    int n,r,d;
    int sum=0;
    scanf("%d", &n);
    int i=n;
    while(i>0)
    {
        r=i%10;
        d=d+1;
        i=i/10;
    }
    int a=n;
    while(a>0)
    {
        int p=a%10;
        int k=pow(p,d);
        sum=sum+k;
    }
    if(sum==n)
    {
        printf("Armstrong");
    }
    else
    {
        printf("not armstong");
    }   
    return 0;
}