#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,*a,r,temp=0;
    scanf("%d%d",&n,&r);
    a = (int *)malloc(n*sizeof(int));
   for(int i = 0; i < n; i++){
        temp = i - r;
        if(temp < 0){
            temp = temp + n;
        }
        scanf("%d", a+temp);
    }
    for(int i=0;i<n;i++)
        printf("%d ",*(a+i));
    return 0;
}