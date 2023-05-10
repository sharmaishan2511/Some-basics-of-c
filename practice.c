#include<stdio.h>

struct frac{
    int n;
    int d;
};

void Add(struct frac *f1,struct frac *f2){
    int a = (f1->n * f2 ->d) + (f2->n * f1->d);
    int b = f1->d*f2->d;
    printf("%d / %d",a,b);
}


int main() {
    struct frac *f1;
    struct frac *f2;

    scanf("%d\n", &(f1->n));
    scanf("%d\n", &(f1->d));
    scanf("%d\n", &(f2->n));
    scanf("%d\n", &(f2->d));

    Add(f1,f2);
    return 0;
}
