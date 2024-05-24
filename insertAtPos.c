#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head=NULL,*temp = NULL, *newnode = NULL, *innode=NULL;
    int choice, count=0, pos;
    printf("Enter the position: \n");
    scanf( "%d", &pos);
    printf("Enter choice 0/1: \n");
    scanf("%d",&choice);

    while(choice==1){
        newnode=(struct node*) malloc(sizeof(struct node));
        if (newnode==NULL){
            printf("memory not allocated.");
            return 1;
        }
        printf("Entne r new node data: ");
        scanf("%d",&newnode->data);
        newnode->next= NULL;


        if( head == NULL) {
            head=temp=newnode;

        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Enter the choide again: 0/1: \n");
        scanf("%d",&choice);
        count++;
        
    }
    if (pos>count){
        printf("invalid position: ");

    }
    else{
        innode=(struct node*)malloc(sizeof(struct node));
        if (innode==NULL){
            printf("allocation failed.");
            return 1;
        }
        printf("Enter the data to be inserted: ");
        scanf("%d",&innode->data);
        innode->next=NULL;

        temp=head;
        int i=1;

        while(i<pos){
            temp=temp->next;
            i++;
        }
        innode->next=temp->next;
        temp->next=innode;

    }
    temp=head;

    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;

    }
    while(head !=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
    return 0;


}