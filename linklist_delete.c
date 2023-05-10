#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void lltrav(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

struct Node *deletefirst(struct Node *head){
    struct Node * ptr=head;
    head = head->next;
    free(ptr);
    return head;
};

struct Node *deleteindex(struct Node *head,int index){
    struct Node *p=head;
    struct Node *q=head->next;

    for(int i = 0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;

    free(q);
    return head;
};

struct Node *deleteend(struct Node *head){
    struct Node *p=head;
    struct Node *q=head->next;

    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
};

struct Node *deletevalue(struct Node *head,int value){
    struct Node *p=head;
    struct Node *q=head->next;

    while(q->data != value && q->next != NULL){
        p=p->next;
        q=q->next;
    }

    if(q->data == value){
        p->next=q->next;
        free(q);
    }

    return head;
};
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data=89;
    head->next=second;

    second->data=108;
    second->next=third;

    third->data=200;
    third->next=NULL;

    lltrav(head);
    head = deletevalue(head,108);
    printf("\n");
    lltrav(head);

    return 0;
}
