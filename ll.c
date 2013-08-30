#include<stdlib.h>
#include<stdio.h>
struct node{
	int x;
	struct node *next;
};
void traverse(struct node *conductor);
int main(){
	struct node *root;
	root=malloc(sizeof(struct node));
	root->x=10;
	printf("%d\n",root->x);
	struct node *conductor;
	conductor=malloc(sizeof(struct node));
	conductor->x=20;
struct node s1;
	root->next=&s1;
s1.x=30;
	printf("%d\n",s1.x);
	struct node *ps1;
	ps1=&s1;
	printf("%d\n",(*ps1).x);
struct node s2;
s2.x=40;
s1.next=&s2;
struct node s3;
s3.x=50;
s2.next=&s3;
struct node s4;
s4.x=60;
s3.next=&s4;
s4.next=NULL;
traverse(root);
	return 0;
}
void traverse(struct node *conductor){

for(;conductor->next!=NULL;){
printf("%d \n ",conductor->x);
conductor=conductor->next;}}
