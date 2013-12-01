//program for double pointers
#include<stdio.h>
int main(){
	
	int a=2,b=3;
	int *p[2];
	p[0]=&a;
	p[1]=&b;
	int** dp;
	int*** tp;
	dp=&p[0];
	tp=&dp;
	printf("the value in *p[0] is %d\n",*p[0]);
	printf("the value in p[0] is %d\n",p[0]);
	printf("the value in dp is %d\n",dp);
	printf("the value in *dp is %d\n",*dp);
	printf("the value in **dp is %d\n",**dp);
	printf("the value in tp is %d\n",tp);
	printf("the value in *tp is %d\n",*tp);
	printf("the value in **tp is %d\n",**tp);
	printf("the value in ***tp is %d\n",***tp);
	printf("the value in *p[1] is %d\n",*p[1]);
	printf("the value in p[1] is %d\n",p[1]);
	

}
