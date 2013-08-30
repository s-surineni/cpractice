#include <stdio.h>
void sort(int num[]);
void set(int num[]);
int main(){
int num[]={4,1,8,0,2,6,3,9,5,7};
sort(num);
}
void sort(int num[]){
int trk=1,comp;
for(;trk<10;trk++){
comp=trk-1;
for(;comp!=0;comp--)
{
if(trk<comp)
{
set(num,trk,comp);
}
}
}
}
void set(int num[],int pos,int nom){
}
