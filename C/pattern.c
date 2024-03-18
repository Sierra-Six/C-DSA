#include<stdio.h>
int main()
{
    // //nested loop(patterns)
    // int i,j,k;
    // for(i=1;i<=5;i++){ //row
    //     for(k=1;k<=i;k++){  //space
    //         printf(" ");
    //     }
    //     for(j=5;j>=i;j--){  //column
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // int i,j,k;
    // for(i=1;i<=5;i++){ //row
    //     for(j=1;j<=5;j++){  //column
    //     if(i==1||i==5||j==1||j==5)
    //         printf("*");
    //         else
    //         printf(" ");
    //      }
    //     printf("\n");
    // }




    // int i,j,k;
    // for(i=1;i<=5;i++){
    //     for(j=5;j>i;j--){
    //         printf(" ");
    //     }
    //     for(k=1;k<=i;k++){
    //         printf("* ");    //give a little space after '*' to print pyramid
    //     }
    //     printf("\n");
    // }



    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=9;j>i;j--){
            printf(" ");
        }
        for(k=1;k<2*i;k++){     //or k <= i*2-1
            printf("*");    
        }
        printf("\n");
    }
}