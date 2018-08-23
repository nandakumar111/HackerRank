#include<stdio.h>
#define arr_len 6
int main(){
    int a[arr_len][arr_len];
    for(int i=0;i<arr_len;i++){
        for(int j=0;j<arr_len;j++)
            scanf("%d",&a[i][j]);
    }
    int max;
    for(int i=0;i+3<=arr_len;i++){
        for(int j=0;j+3<=arr_len;j++){
            int t;
            t=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if((i==0&&j==0)||max<t)
                max = t;
        }
    }
    printf("%d",max);
    return 0;
}