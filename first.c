
#include <stdio.h>
#include <stdlib.h>

struct comp{
    int real;
    int imag;
};

int main() {
    struct comp *c1;
    c1=(struct comp *)malloc(sizeof(struct comp));

    scanf("%d",&c1->real);
    scanf("%d",&c1->imag);
    printf("%d",c1->real);

    return 0;
}
