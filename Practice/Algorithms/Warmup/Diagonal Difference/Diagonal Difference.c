#include<stdio.h>
#include<stdlib.h>
int main()
    {
    int n,i,j,a[1000][1000],sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
        for(j=1;j<=n;j++)
            {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1,j=1;i<=n,j<=n;i++,j++)
            {
            sum1+=a[i][j];
        }
    for(i=1,j=n;i<=n,j>=1;i++,j--)
        {
        sum2+=a[i][j];
    }
    printf("%d",abs(sum1-sum2));
    return 0;
}