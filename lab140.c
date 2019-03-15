#include<stdio.h>


int main(){

    int number,i,tempnumber,counter=0;
    double e=0,fact=1;

    printf("Enter the number: ");
    scanf("%d",&number);

    tempnumber=number;
    while (counter<number-1){
    fact=1;

    if (tempnumber==1)
        fact=1;
    else{
    for (i=0; i<tempnumber ; i++){

        fact=fact*tempnumber*(tempnumber-1);
        tempnumber-=2;
    }
    e=e+(1/fact);
    tempnumber=number-1;
    counter++;
    }
    }
    e+=1;

    printf("%f",e);



    return 0;
}
