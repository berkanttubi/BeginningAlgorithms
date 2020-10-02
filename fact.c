#include<stdio.h>

int main()
    {

    int fact,i,n;
    fact = 1;

    printf("Enter the number: ");
    scanf("%d",&n);

    for (i=0; i<n ; i++){

       fact = fact*i;
    }

      printf("Factorial of %d is %d", n , fact);

    return 0;
}
