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

struct Node * insertatfirst(struct Node *head,int data){                    //function of struct node* to inser at first
    //create a pointer
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));            //inserting at first

    ptr->next=head;     //pointers next is head so that it becomes the head
    ptr->data=data;     //pointers data
    return ptr;         //ptr which is the new head
};

struct Node * insertatindex(struct Node *head,int data,int index){          //insert at index
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;                        //start p from head for traversal
    int i = 0;                                  //counter variable

    while(i!=index-1){                          //bringing p before the index we need to insert at
        p=p->next;
        i++;
    }
    ptr->next=p->next;                  //ptr next becomes p next
    p->next=ptr;                        //p next becomes ptr
    ptr->data=data;                     //ptr data
    return head;                    //because from head we get all the values including the one inserted
};


struct Node *insertatend(struct Node *head,int data){                       //insert at end
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    //traverse p to the end
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;         //self explanatory
    ptr->data=data;
    return head;

};

struct Node *insertafternode(struct Node *head,struct Node *prevNode,int data){     //insert after a node
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));

    ptr->next=prevNode->next;
    prevNode->next=ptr;
    ptr->data=data;
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
    head=insertafternode(head,second,45);
    printf("\n");
    lltrav(head);
    return 0;
}
