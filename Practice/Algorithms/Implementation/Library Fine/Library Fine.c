#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <math.h>  
  
int main() {  
 int d,m,y,dd,mm,yy;  
 scanf("%d %d %d",&d,&m,&y);  
 scanf("%d %d %d",&dd,&mm,&yy);  
 if(((y-yy)<=0 && (m-mm)<=0 && (d-dd)<=0)||((y-yy)==0&&(m-mm)<0&&(d-dd)>=0))
 {  
  printf("0");  
 }  
 else if(abs(yy-y)==0 && abs(mm-m)==0)  
 {  
  printf("%d",(abs(dd-d)*15));  
 }  
 else if(abs(yy-y)==0 && abs(mm-m)!=0)  
 {  
  printf("%d",(abs(mm-m)*500));  
 }  
 else if(abs(yy-y)!=0 && (y-yy)>0)  
 {  
  printf("10000");  
 }  
 else  
 {  
  printf("0");  
 }  
 return 0;  
}