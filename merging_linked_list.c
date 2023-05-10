#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void lltrav(struct Node *head){
    struct Node *ptr=head;

    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

void llelement(struct Node *one,int d,struct Node *two){
    one->data=d;
    one->next=two;
}

struct Node *merging(struct Node *head1,struct Node *head2){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p1=head1;
    struct Node *p2=head2;

    struct Node *p3=ptr;

    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data){
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }else{
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
    }

    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return ptr->next;
}

int main()
{
    struct Node *head;
    struct Node *sec;
    struct Node *thi;
    struct Node *fou;

    struct Node *head2;
    struct Node *sec2;
    struct Node *thi2;
    struct Node *fou2;

    head=(struct Node*)malloc(sizeof(struct Node));
    sec=(struct Node*)malloc(sizeof(struct Node));
    thi=(struct Node*)malloc(sizeof(struct Node));
    fou=(struct Node*)malloc(sizeof(struct Node));

    head2=(struct Node*)malloc(sizeof(struct Node));
    sec2=(struct Node*)malloc(sizeof(struct Node));
    thi2=(struct Node*)malloc(sizeof(struct Node));
    fou2=(struct Node*)malloc(sizeof(struct Node));

    llelement(head,1,sec);
    llelement(sec,23,thi);
    llelement(thi,34,fou);
    llelement(fou,67,NULL);

    llelement(head2,2,sec2);
    llelement(sec2,16,thi2);
    llelement(thi2,21,fou2);
    llelement(fou2,41,NULL);

    lltrav(head);
    lltrav(head2);

    struct Node *head3=merging(head,head2);

    lltrav(head3);
    return 0;
}
