#include<stdio.h>
int main(){

    int a=10;
    int *ptr1=NULL;
    printf("COntent a is %d\n",a);
    printf("Adress is %0x\n",&a);
    ptr1=&a;                                     //ptr stores address of a
    printf("Content of ptr1 is %0x\n",ptr1);
    printf("Address of ptr1 is %0x\n",&ptr1);

    *ptr1=100;                           //*ptr1=*(&a)=a so this is a = 100 this is de referencing
    printf("content of a is %d\n",a);
    printf("Content of a is (through pointer declaration) %d\n",*ptr1);

    int **ptr2;
    ptr2=&ptr1;
    printf("Content of ptr2 is %0x\n",ptr2);
    printf("address of ptr2 is %0x\n" ,&ptr2);


    return 0;
}
