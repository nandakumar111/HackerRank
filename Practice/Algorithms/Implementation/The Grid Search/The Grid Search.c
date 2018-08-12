 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int t,r,c,R,C,i,j,count,pos,k;
char *ptr;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&R,&C);
char mat[R+2][C+2];
for(i=0;i<R;i++)
scanf("%s",mat[i]);
scanf("%d %d",&r,&c);
char smat[r+2][c+2];
for(i=0;i<r;i++)
scanf("%s",smat[i]);
for(i=0;i<R;i++)
{
count=1;
ptr=strstr(mat[i],smat[0]);
if(ptr!=0)
{
pos=ptr-mat[i];
k=i+1;
for(j=1;j<r&&k<R;j++,k++)
{
ptr=strstr(mat[k],smat[j]);
if(pos==ptr-mat[k])
count++;
}
if(count==r)
{
printf("YES\n");
break;
}
}
}
if(i==R)
printf("NO\n");
}
return 0;
}