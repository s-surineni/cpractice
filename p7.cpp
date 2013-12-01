//this is for array of pointers
#include<stdio.h>
int main(){
	
	int a=2,b=3;
	int *p[2];
	p[0]=&a;
	p[1]=&b;
	printf("the value in *p[0] is %d\n",*p[0]);
	printf("the value in p[0] is %d\n",p[0]);
	printf("the value in *p[1] is %d\n",*p[1]);
	printf("the value in p[1] is %d\n",p[1]);
	

}
