#include<stdio.h>
#include<math.h>
int main() {
    int T;
    scanf("%d",&T);
    while(T--){
        long long A,B;
        long count = 0;
        scanf("%lld%lld",&A,&B);
        long long s = sqrt(A);
           if( s*s != A)
            s = s+1;
         for(long long i = s; i * i <= B; i++){
            count++;
        }
         printf("%ld\n",count);
    }
    return 0;
}