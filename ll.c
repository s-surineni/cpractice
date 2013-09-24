#include<stdio.h>
<<<<<<< HEAD
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
=======
void insert(void);

struct node {
    int x;
    struct node *next;
};
void traverse(struct node *conductor);

int main() {
    char wtd;
    struct node *root;
    while(wtd!='1'){
        printf("hi user\n");
        printf("enter\n");
        printf("\t i to insert\n");
        switch(wtd){
            case 'i':
                insert();
                break;
        }
        
    }
    
    root = malloc(sizeof (struct node));
    root->x = 10;
    printf("%d\n", root->x);
    struct node *conductor;
    conductor = malloc(sizeof (struct node));
    conductor->x = 20;
    struct node s1;
    root->next = &s1;
    s1.x = 30;
    printf("%d\n", s1.x);
    struct node *ps1;
    ps1 = &s1;
    printf("%d\n", (*ps1).x);
    struct node s2;
    s2.x = 40;
    s1.next = &s2;
    struct node s3;
    s3.x = 50;
    s2.next = &s3;
    struct node s4;
    s4.x = 60;
    s3.next = &s4;
    s4.next = NULL;
    traverse(root);
    return 0;
}

void traverse(struct node *conductor) {

    for (; conductor->next != NULL;) {
        printf("%d \n ", conductor->x);
        conductor = conductor->next;
    }
}
void insert(){
    struct node create,*pcreate;
    *pcreate=&create;
    int enter;
    printf("enter the valued to be inserted ");
    scanf("%d",&enter);
    create.x=enter;
    create.next=NULL;
    
}
>>>>>>> 9143bd16b3ac1e2e96b4fdeebb057a9c848f5798
