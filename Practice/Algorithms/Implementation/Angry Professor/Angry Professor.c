#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t,j,n[1000],k[1000],i,count[1000],at[1000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        count[i]=0;
        scanf("%d%d",&n[i],&k[i]);
        for(j=1;j<=n[i];j++)
        {
            scanf("%d",&at[j]);
            if(at[j]<=0) ++count[i];
        }
    }
    for(i=1;i<=t;i++)
    {
        if(count[i]>=k[i]) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
