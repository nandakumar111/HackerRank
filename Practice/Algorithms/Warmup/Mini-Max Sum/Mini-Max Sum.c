#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long long sum[5]={0},flag=0,min=0,max=0;
    sum[0]=b+c+d+e;
    sum[1]=a+c+d+e;
    sum[2]=a+b+d+e;
    sum[3]=a+b+c+e;
    sum[4]=a+b+c+d;
    for(int i=0;i<5;i++)
        {
        if(flag<sum[i])
            flag=sum[i];
    }
    max=flag;
    //printf("%lld ",flag);
    for(int i=0;i<5;i++)
        {
        if(flag>sum[i])
            flag=sum[i];
    }
    min=flag;
    printf("%lld %lld",min,max);
    return 0;
}
