#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* getRecord(int s_size, int* s){
    int tempH =s[0],hScore = 0,lScore = 0,tempL = s[0],result[2];
    for(int i=0 ; i< s_size ; i++){
        if(tempH < s[i]){
            tempH = s[i];
            hScore++;
        }else if(tempH <  tempL ){
            tempL = tempH;
            lScore++;
        }else if(s[i] <  tempL ){
            tempL = s[i];
            lScore++;
        }
        
    }
    result[0] = hScore;
    result[1] = lScore;
    for(int i = 0; i < 2; i++) {
        if (i) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    
    return lScore;
}

int main() {
    int n; 
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    getRecord(n, s);
    return 0;
}
