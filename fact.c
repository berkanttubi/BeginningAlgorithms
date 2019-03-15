#include<stdio.h>


int main(){

    int number,fact=1,i;

    printf("Enter the number: ");
    scanf("%d",&number);

    for (i=0; i<number ; i++){

        fact=fact*number*(number-1);
        number-=2;
    }

    printf("%d",fact);


    return 0;
}
