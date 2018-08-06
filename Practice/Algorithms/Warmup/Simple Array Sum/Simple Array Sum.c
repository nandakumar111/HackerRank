#include <stdio.h>
int main() 
{
    int n,i,a[1000];
    long sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
        {
        sum+=a[i];
    }
    printf("%ld",sum);
    return 0;
}
