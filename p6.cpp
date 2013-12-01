#include<stdio.h>

int main()
 {
   int a=10,i,j;
   
    int b[2]={1,2};
    int (*p)[2];
     int *q;
     p=&b;
     q=b;
     printf("value of p=%u\n",p);
     printf("value of b=%u\n",b);
     printf("value of &b=%u\n",&b);
     p++;
     q++;
    printf("value of p=%u\n",p);
    printf("value of q=%u\n",q);



            

 }
