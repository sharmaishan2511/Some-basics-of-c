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

int pop(struct stack *ptr,int val){     //remove an element from stack
    if(isEmpty(ptr)){
        printf("Stack Underflow");
    }else{
        int val = ptr->arr[ptr->top];   //the value to be removed is on top
        ptr->top--; //decrease the top by one
        return val;
    }
}

int peek(struct stack *sp,int i){           //peek means to see an element (i is from the top)
    if(sp->top-i+1<0){                              //   i   |  array index |
        printf("Not a valid position");             //   1   |      2       |       array index in terms of i is top-i+1
    }else{                                          //   2   |      1       |
        return sp->arr[sp->top-i+1];                    //   3   |      0       |
    }

}
int main(){

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));    //a pointer stack created
    sp->size = 4;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size*sizeof(int));

    push(sp,9);
    push(sp,88);
    push(sp,2);
    push(sp,4);

    for(int j = 1;j<=sp->top+1;j++){
        printf("%d\n",peek(sp,j));
    }
    return 0;
}
