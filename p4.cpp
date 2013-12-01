#include<stdio.h>
int main(){
	int v1;
	int a[2]={1,2};
	printf("the address of v1 is %x \n",&v1);
	printf("the address of a is %x\n",a[1]);
	printf("the address of a is %x\n",1[a]);
	printf("the address of v1 is %d \n",&v1);//the address in integers
	printf("the address of v1 is %f \n",&v1);
}
