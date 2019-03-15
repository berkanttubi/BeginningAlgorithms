#include<stdio.h>

int main(){


    int nth,i,fibo,x=0,y=1;

    printf("Please enter the nth number: ");
    scanf("%d",&nth);

    for (i=0 ; i<nth ; i++){

        if (i<=1)
            fibo=i;
        else{
            fibo= x + y ;
            x=y;
            y=fibo;
        }
    }
    printf("%d",fibo);


    return 0;
}
