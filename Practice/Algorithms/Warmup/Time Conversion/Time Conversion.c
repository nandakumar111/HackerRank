#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int h,m,s;
    char n[2];
    scanf("%d:%d:%d%s",&h,&m,&s,n);
    if(n[0]=='P'&&h<12) h+=12;
    else if(h==12&&n[0]=='A') h=0;
        printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
