#include<stdio.h>
int main() {
  int a;
  long b;
  long long c;
  char d;
  float e;
  double f;
    scanf("%d%ld%lld %c%f%lf",&a,&b,&c,&d,&e,&f);
    printf("%d\n%ld\n%lld\n%c\n%.2f\n%.5lf",a,b,c,d,e,f);
    return 0;
}
