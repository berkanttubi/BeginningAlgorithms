/*
#include<stdio.h>

int main(){


    int i,j,count=0,temp,list[]={7,8,26,44,13,23,98,57};

    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            count+=1;
            if(list[i]>list[j]){
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }

    printf("COUNT: %d\n\n",count);

    for(i=0;i<7;i++)
        printf("%d\n",list[i]);


    return 0;
}
*/
/*
#include<stdio.h>

int main(){


    int i,j,count=0,temp,list[]={7,8,26,44,13,23,98,57};

    for (i = 1; i < 8; i++) {
       temp = list[i];

      for ( j=i; j>0 && temp < list[j-1]; j--){
         list[j] = list[j-1];
         count+=1;
      }
      list[j] = temp;
   }

        printf("COUNT: %d\n\n",count);

    for(i=0;i<7;i++){
        printf("%d \n",list[i]);
    }


    return 0;
}
*/
/*
#include<stdio.h>

int main(){


    int i,j,temp,count=0,min,list[]={7,8,26,44,13,23,98,57};

     for ( i = 0; i < 7; i++) {

    for ( j = i+1; j < 7; j++){
        count+=1;
       if (list[j] < list[i]){
        min = j;
        temp=list[i];
        list[i]=list[j];
        list[j]=temp;

       }
    }
  }



    for(i=0;i<8;i++){
        printf("%d \n",list[i]);
    }


    return 0;
}
*/
