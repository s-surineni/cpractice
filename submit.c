#include<stdio.h>
int main()
{
int T;
//printf("enter number of test cases \n");
scanf("%d",&T);
int trk0;
for( ;trk0<2;trk0++)
{
int N;
//printf("enter the size of the array \n");
scanf("%d",&N);
int A[N];
//int A[N]={2,2,3,3,1,1};
int trk;

int i;
int j;
int max;
int maxi=0;
int elp=0;

for(trk=0;trk<N;trk++)
{
	//printf("enter the %d element of the array \n",trk+1);
	scanf("%d",&A[trk]);
	
}
for(i=0;i<N;i++)
{
	max=0;
for(j=0;j<N;j++){
if(A[i]==A[j])
{
max++;
}
//printf("inner loop %d \n",j);
}
//max--;
printf("max %d \n",max);
if(maxi<max)
{
maxi=max;
elp=i;
}
else if(maxi==max)
{
if(A[elp]>A[i])
{
elp=i;
}
}
//printf("outer loop %d \n",i);
}
//printf("element %d \n",A[elp]);
//printf("max times repeated %d \n",maxi);
printf("%d %d",A[elp],maxi);
}
return 0;
}

