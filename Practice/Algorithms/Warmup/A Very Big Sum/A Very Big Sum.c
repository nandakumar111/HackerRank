#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    int n,i;
    long a[1000],sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        scanf("%ld",&a[i]);
    }
    for(i=1;i<=n;i++)
        {
        sum+=a[i];
    }
    printf("%ld",sum);
    return 0;
}
