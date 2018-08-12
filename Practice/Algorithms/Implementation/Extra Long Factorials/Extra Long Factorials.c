#include <math.h>
#include <stdio.h>
#include <string.h>

void multd(char * s, size_t len, unsigned n)
{
    unsigned values[len];
    memset(values, 0, sizeof(unsigned) * len);
    for(size_t i = len; i--; )
    {
        unsigned x = values[i] + (s[i] - '0') * n;
        s[i] = '0' + x % 10;
        if(i) values[i - 1] += x / 10;
    }
}

void factd(char * s, size_t len, unsigned n)
{
    memset(s, '0', len - 1);
    s[len - 1] = '1';
    for(; n > 1; --n) multd(s, len, n);
}

int main(void)
{
    unsigned n;
    scanf("%u",&n);
    if(n!=1)
    {
    size_t len = ceill(log10l(tgammal(n + 1)));
    char dstr[len + 1];
    dstr[len] = 0;
    factd(dstr, len, n);
    puts(dstr);
    }
    else printf("%d",n);
}