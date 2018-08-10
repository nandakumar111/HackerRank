#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    for(int a = 0; a < n; a++){
        int grade,temp=0; 
        scanf("%d",&grade);
        temp=grade%5;
         if(grade<38||temp<3)
            printf("%d\n",grade);
         else
         {
            if(temp==3)
             printf("%d\n",grade+2);
            else
             printf("%d\n",grade+1);
         }
        //printf("grade=%d\ttemp=%d\n",grade,temp);
    }
    return 0;
}
