#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
struct node{
    int data;
    struct node* next;
}; 
struct node* head=NULL;
struct node* current=NULL;
int main(){
    int choice=10;
while(choice!=0){
    printf("enter 1 to insert\n");
    
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            insert();
            break;
    }
}
    return 0;
}
void insert(){
    int value;
    printf("enter the integer value you want to insert\n");
    scanf("%d",&value);
    if(head==NULL){
head=malloc(sizeof(struct node));
        head->data=value;
        head->next=NULL;
current=head;
        
    }
    else{
struct node *temp=malloc(sizeof(struct node));
temp->data=value;
temp->next=NULL;
current->next=temp;
current=temp;
}
display();
return;
}
void display(){
    int item = 1;
    if(head==NULL){
        printf("the list is emptly\n");
    }
    else
    {
struct node *print=head;
while(print!=NULL){
        printf("item %d \n",item);
        printf("%d\n",print->data);
print=print->next;
item++;}
    }
return;
}

