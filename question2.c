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

int length_ll(struct Node *head){
    struct Node *ptr=head;
    int c = 0;
    while(ptr!=NULL){
        c++;
        ptr=ptr->next;
    }
    return c;
}

int sumofll(struct Node *h1,struct Node *h2){
    int n1 = length_ll(h1);
    int n2 = length_ll(h2);

    int arr1[n1];
    int arr2[n2];

    struct Node *ptr1=h1;
    struct Node *ptr2=h2;

    int i = 0;
    while(ptr1!=NULL){
        arr1[i]=ptr1->data;
        ptr1=ptr1->next;
        i++;
    }
    int j = 0;
    while(ptr2!=NULL){
        arr2[j]=ptr2->data;
        ptr2=ptr2->next;
        j++;
    }

    int k1=0;
    for(int i = 0;i<n1;i++){
        k1+=arr1[i]*pow(10,n1-i-1);
    }

    int k2=0;
    for(int i = 0;i<n2;i++){
        k2+=arr2[i]*pow(10,n2-i-1);
    }

    int sum=k1+k2;
    return sum;
}


int main(){

    struct Node *head1=NULL;
    struct Node *head2=NULL;
    struct Node *head3=NULL;

    push(&head1,3);
    push(&head1,6);
    push(&head1,5);

    push(&head2,2);
    push(&head2,4);
    push(&head2,8);

    lltrav(head1);
    lltrav(head2);

    int s = sumofll(head1,head2);
    int dupli=s;
    int numdigits=0;

    while(dupli!=0){
        dupli=dupli/10;
        numdigits++;
    }

    int arrdigits[numdigits];

    for(int i = 0;i<numdigits;i++){
        push(&head3,s%10);
        s=s/10;
    }

    lltrav(head3);
    return 0;
}
