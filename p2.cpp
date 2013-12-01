#include<stdio.h>
int main(){
	int v1;
	int a[10];
	int *p=&v1;
	printf("the address of v1 is %x \n",&v1);
	printf("the address in p is %x \n",p);
	printf("the value in v1 is %d \n",v1);
	printf("the value at p is %d \n",*p);
}
