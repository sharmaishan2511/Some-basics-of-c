#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;   //stack size
    int top;    //stack's top point -1 when empty
    int *arr;   //an array
};

int isEmpty(struct stack *ptr){ //to check if the stack is empty
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct stack *ptr){  //to check if stack is full
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack *ptr,int val){   //pushing a value in the stack
    if(isFull(ptr)){
        printf("Stack Overflow");
    }else{
        ptr->top++; //increase top by 1
        ptr->arr[ptr->top]=val;     //add a value to that top
    }
}

int pop(struct stack *ptr){     //remove an element from stack
    if(isEmpty(ptr)){
        printf("Stack Underflow");
    }else{
        int val = ptr->arr[ptr->top];   //the value to be removed is on top
        ptr->top--; //decrease the top by one
        return val;
    }
}
int main(){

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));    //a pinter stack creeated
    sp->size = 3;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));

    push(sp,78);
    push(sp,90);
    push(sp,89);

    printf("%d",pop(sp));

    return 0;
}
