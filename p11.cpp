//pointers to multidimensional arrays
#include<stdio.h>
int main(){
	
	int A[2][2]={0,0,0,0};
	//int *p=NULL;
	int (*p)[2];
	p=&A[0];
	
	printf("the value in A[0] is %d\n",A[0]);
	printf("the value in A[1] is %d\n",A[1]);
	printf("the value in p is %d\n",p);
	p++;
	printf("the value in p+1 is %d\n",p);
}
