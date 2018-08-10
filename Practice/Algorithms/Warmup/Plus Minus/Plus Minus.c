#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,a[1000],i,p=0,nn=0,z=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
        {
        if(a[i]==0) z++;
        else if(a[i]<0) nn++;
            else p++;
    }
    printf("%.3f\n%.3f\n%.3f",(float)p/(float)n,(float)nn/(float)n,(float)z/(float)n);
   return 0;
}
