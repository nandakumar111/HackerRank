#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,*a;
    scanf("%d",&n);
    a = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    for(int i=n-1;i>=0;i--)
        printf("%d ",*(a+i));
    return 0;
}