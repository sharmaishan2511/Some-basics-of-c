// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct frac{
    int n;
    int d;
};

int gcdcalc(int a,int b){
    int gcd;
    int c = abs(a);
    int d = abs(b);
    for(int i = 1;i<=c && i<= d;i++){
        if(c%i==0 && d%i==0){
            gcd=i;
        }
    }

    return gcd;
}

void Add(struct frac *f1,struct frac *f2){
    int a = (f1->n * f2 ->d) + (f2->n * f1->d);
    int b = f1->d*f2->d;

    switch(b){
        case 0:
                printf( "DIVIDE BY ZERO ERROR!!!");
                break;
    }
    int m=gcdcalc(a,b);
    int num=a/m;
    int deno=b/m;
    int nnum,ndeno;
    if(num<0 && deno<0){
        nnum=abs(num);
        ndeno=abs(deno);
    }
    if(num>0 && deno<0){
        nnum=-num;
        ndeno=abs(deno);
    }
    printf("%d/%d\n",nnum,ndeno);

}

void Sub(struct frac *f1,struct frac *f2){
    int a = f1->n * f2 ->d - f2->n * f1->d;
    int b = f1->d*f2->d;

    switch(b){
        case 0:
                printf( "DIVIDE BY ZERO ERROR!!!");
                break;
    }
    int m=gcdcalc(a,b);
    int num=a/m;
    int deno=b/m;
    int nnum,ndeno;
    if(num<0 && deno<0){
        nnum=abs(num);
        ndeno=abs(deno);
    }
    if(num>0 && deno<0){
        nnum=-num;
        ndeno=abs(deno);
    }
    printf("%d/%d\n",nnum,ndeno);

}

void Mul(struct frac *f1,struct frac *f2){
    int a = f1->n * f2->n;
    int b = f1->d*f2->d;

    switch(b){
        case 0:
                printf( "DIVIDE BY ZERO ERROR!!!");
                break;
    }
    int m=gcdcalc(a,b);
    int num=a/m;
    int deno=b/m;
    int nnum,ndeno;
    if(num<0 && deno<0){
        nnum=abs(num);
        ndeno=abs(deno);
    }
    if(num>0 && deno<0){
        nnum=-num;
        ndeno=abs(deno);
    }
    printf("%d/%d\n",nnum,ndeno);

}

void Div(struct frac *f1,struct frac *f2){
    int a = f1->n * f2->d;
    int b = f1->d*f2->n;

    switch(b){
        case 0:
                printf( "DIVIDE BY ZERO ERROR!!!");
                break;
    }
    int m=gcdcalc(a,b);
    int num=a/m;
    int deno=b/m;
    int nnum,ndeno;
    if(num<0 && deno<0){
        nnum=abs(num);
        ndeno=abs(deno);
    }
    if(num>0 && deno<0){
        nnum=-num;
        ndeno=abs(deno);
    }
    printf("%d/%d\n",nnum,ndeno);

}
int main() {
    struct frac *f1=(struct frac*)malloc(sizeof(struct frac));
    struct frac *f2=(struct frac*)malloc(sizeof(struct frac));

    scanf("%d",&f1->n);
    scanf("%d",&f1->d);
    scanf("%d",&f2->n);
    scanf("%d",&f2->d);

    Add(f1,f2);
    Sub(f1,f2);
    Mul(f1,f2);
    Div(f1,f2);
    return 0;
}
