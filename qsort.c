/* 
 * File:   quicksort.c
 * Author: vinnu
 *
 * Created on August 17, 2013, 12:17 PM
 */

#include <stdio.h>
#include <stdlib.h>

int split(int num[],int, int);
void sort(int num[],int,int);
void swap(int num[],int,int);
void display(int num[]);
int main() {
    int trk;
    int num[]={4,7,1,2,9,0,5,6,3,8};
    sort(num,0,9);
    printf("the sorted array is\n");
    for(trk=0;trk<10;trk++){
        printf("%d\t",num[trk]);
        
    }
printf("\n");
    return 0;
}

void sort(int num[],int start,int end){
display(num);
    int pplace=0;
    if(start<end){
        pplace=split(num,start,end);
        sort(num,start,pplace-1);//was getting error here also bcoz just wrote pplace.
        sort(num,pplace+1,end);
    }
}

int split(int num[], int start, int end){
    int pplace,trak,pivot;
    pivot=num[end];
    pplace=start-1;
// printf("got here"); came here
    for(trak=start;trak<end;trak++){//got error here coz kept trak =pplace which contained -1
//       printf("got here"); checked
 if(num[trak]<pivot){
            pplace++;
            swap(num,pplace,trak);
        }
    }
    swap(num,pplace+1,end);
    return pplace+1;
}

void swap(int num[], int pplace, int trak){
//printf("got here"); checked
    int temp=num[pplace];
    num[pplace]=num[trak];
    num[trak]=temp;
}

void display(int num[])
{
int trk;
for(trk=0;trk<10;trk++){
        printf("%d\t",num[trk]);
        
    }
printf("\n");
}
