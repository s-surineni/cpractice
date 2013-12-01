#include<stdio.h>
int main(){
	int a[2]={1,2};
	int b=5;
	int *p;
	p=a;
	int *q;
	q=&b;
	int (*s)[2];
	s=&a;
	int **t;
	t=&q;
	printf("the value in t is %d\n",t);
	printf("the value in *t is %d\n",*t);
	printf("the value in **t is %d\n",**t);
	printf("the value in a %d\n",a);
	printf("the value in &a %d\n",&a);
	printf("the value in p %d\n",p);
	printf("the value in b is %d\n",b);
	printf("the value in q is %d\n",q);
	printf("the value in &b is %d\n",&b)	;
	printf("the value in s is %d\n",s);
	printf("the value in &a is %d\n",&a);
}
