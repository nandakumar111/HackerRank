#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long N,K,p,q,sum,i,j,max=0,x=0;

    scanf("%ld%ld",&N,&K);
    long *a = (long *)malloc((N+1)* sizeof(long));

    for(i=0;i<K;i++)
    {
        scanf("%ld%ld%ld",&p,&q,&sum);
        *(a+p)+=sum;
        if((q+1)<=N) *(a+q+1)-=sum;
    }
    for(i=1;i<=N;i++)
    {
       x=x+ (*(a+i));
       if(max<x) max=x;
    }
    printf("%ld",max);
    return 0;
}
