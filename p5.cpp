//program is about pointers to array
#include<stdio.h>
int main(){
	int a[2]={1,2};
	int (*p)[2];
	p=&a;
	printf("the value in a is %d\n",a);
	printf("the value in *a is %d\n",*a);
	printf("the value in p is %d\n",p);
	printf("the value in *p is %d\n",*p);
	printf("the value in p[0] is %d\n",p[0]);
	printf("the value in *p[0] is %d\n",*p[0]);
	printf("the value in p[1] is %d\n",p[1]);
	printf("the value in *p[1] is %d\n",*p[1]);

}
