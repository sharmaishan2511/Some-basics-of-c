#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*top=NULL;         //top is global variable

void lltrav(struct Node *ptr){

    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int isEmpty(struct Node *top){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct Node *top){
    struct Node *p=(struct Node *)malloc(sizeof(struct Node));      //if i cant allocate dynamic memory then it is full
    if(p==NULL){
        return 1;
    }else{
        return 0;
    }
}

struct Node *push(struct Node *top,int x){
    if(isFull(top)){
        printf("stack overflow\n");
    }else{
         struct Node *n=(struct Node *)malloc(sizeof(struct Node));
         n->data=x;         //put the value x in n's data
         n->next=top;       //n's next becomes top
         top=n;             //top becomes n
         return top;
    }
};

int pop(){
    struct Node *temp;
    temp=top;
    if(isEmpty(top)){
        printf("stack underflow");
    }
    int val=temp->data;
    top=top->next;
    free(temp);
    temp=NULL;
    return val;
}

int peek(int pos){
    struct Node *ptr = top;
    for(int i = 0;i<pos-1 && ptr!=NULL;i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }else{
        return -1;
    }
}
int main(){
    top=push(top,78);
    top=push(top,488);
    top=push(top,45);
    top=push(top,69);
    lltrav(top);

    int ele=pop();
    printf("element popped is %d\n",ele);
    lltrav(top);

    printf("%d",peek(2));
    return 0;
}
