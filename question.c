//reverse linked list in groups of sizes
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void push(struct Node** head,int val){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));

    ptr->next = *head;
    ptr->data=val;
    *head=ptr;
}

void lltrav(struct Node *head){
    struct Node * p=head;

    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

struct Node *reversal(struct Node *head){
    struct Node *curr=head;
    struct Node *prev=NULL;
    struct Node *nextn=head->next;

    while(curr->next!=NULL){
        curr->next = prev;
        prev=curr;
        curr=nextn;
        nextn=curr->next;
    }
    curr->next = prev;
    head=curr;
    return head;
}

struct Node *reverselengths(struct Node *head,int k){
    struct Node *current=head;
    struct Node *next=NULL;
    struct Node *prev = NULL;
    int count = 0;

    while(current!=NULL && count < k){
        next = current->next;
        current->next = prev;
        prev=current;
        current=next;
        count++;
    }
    if(next!=NULL){
        head->next = reverselengths(next,k);
    }

    return prev;

};

int main(){

    struct Node *head=NULL;

    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    push(&head,1);

    lltrav(head);
    head=reverselengths(head,3);
    lltrav(head);

    return 0;
}

