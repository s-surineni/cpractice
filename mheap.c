#include <stdio.h>
int Parent(int);
int Left(int);
int Right(int);
void Maxheap(int Arr[],int);
void Exg(int,int);
void Display(int Arr[]);
void Buildheap(int Arr[]);


int Hesize=13;
int Arr[]={27,17,3,16,13,10,1,5,7,12,4,8,9,0};
int sorted[14];

void Buildheap(int Arr[]){
	int trk;
	int hsz=14;
	for(trk=(14-1)/2;trk>=0;trk--){//there is an error when I took trk=13/2
		Maxheap(Arr,trk);
		printf("trk %d \n",trk);
		Display(Arr);
	}
}

void Display(int Arr[])
{
	int trk;
	for(trk=0;trk<14;trk++)
{
	printf(" %d ",Arr[trk]);
}
printf("\n");
}
void Exg(int to,int from){
int temp=Arr[to];
Arr[to]=Arr[from];
Arr[from]=temp;
}

int main(){


printf("array b4 heapify\n");
Display(Arr);
//Buildheap(Arr);
Maxheap(Arr,6);

printf("array after heapify\n");
Display(Arr);
return 0;
}
void Maxheap(int Arr[],int ind){
	//printf("came\n");
int lt=Left(ind)-1;
//printf(" ld %d\n",lt);
int largest;
int rt=Right(ind)-1;
//printf(" rd %d\n",rt);
//printf(" heapsize %d\n",Hesize);
if(lt<=Hesize)  {
	//printf("if ld %d\n",lt);
	if(Arr[lt]>Arr[ind]){
	largest=lt;}
}
else
largest=ind;
if(rt<=Hesize  ){
	//printf("if rd %d\n",rt);
	if(Arr[rt]>Arr[largest])
	{
	largest=rt;}
}
if(largest!=ind)
{
	Exg(ind,largest);
	Maxheap(Arr,largest);
}
}
int Parent(int node){
return (node+1)/2;
}
int Left(int node){
return 2*(node+1);
}
int Right(int node){
return (2*(node+1))+1;
}
