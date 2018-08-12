 #include<stdio.h>  
 int main()  
   {  
   unsigned int n, t;  
   int width[100000],i;  
   scanf("%u %u",&n,&t);  
   for(i=0;i<n;i++)  
     {  
     scanf("%d",&width[i]);  
   }  
   while(t--)  
     {  
     int k,l,m,n;  
     scanf("%d %d",&k,&l);  
     n= width[k];  
     for(m=k;m<=l;m++){  
       if(n>width[m])  
         {  
         n = width[m];  
       }  
     }  
     printf("%d\n",n);  
   }  
   return 0;  
 }  