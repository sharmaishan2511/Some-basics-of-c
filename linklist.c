#include <stdio.h>
#include <stdlib.h>



struct Node{                //struct named node
    int data;                               //data of the linked list
    struct Node *next;                      //pointer of type struct node that points to next node
};

void lltrav(struct Node *ptr){                  //linked list traversal
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    //below we have allocated struct node* caste type pointer which has byte sizeof of struct node.
    //since struct node stores data and pointer to next so it also stores that

    head = (struct Node *)malloc(sizeof(struct Node));          //dynamic memory allocation using malloc
    second = (struct Node *)malloc(sizeof(struct Node));        //malloc is x=(caste type*)malloc(byte size)
    third = (struct Node *)malloc(sizeof(struct Node));         //for example int *x; x=(int *)malloc(n*sizeof(int))

    head->data=89;
    head->next=second;

    second->data=108;
    second->next=third;

    third->data=200;
    third->next=NULL;

    lltrav(head);
    return 0;
}
