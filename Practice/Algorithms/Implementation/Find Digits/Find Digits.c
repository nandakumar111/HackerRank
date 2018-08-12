#include<stdio.h>
#include<math.h>

int main() {

int T, m, i=0, num, a, count=0;

scanf("%d",&T);

while(i<T)

{   scanf("%d",&num);

m=num;

while(num)

{   a=num%10;

num=num/10;

if(a!=0)

if(m%a==0)

count++;

}

printf("%d\n",count);

count=0;

i++;

}

return 0;

}