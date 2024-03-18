#include<stdio.h>
int main()
{
    //print the table of a number input by the user
    // int n;
    // printf("enter numbr : ");
    // scanf("%d",&n);
    // for(int i=1;i<=10;i++){
    //     printf("%d\n",n*i);
    // }

    //  //break
    // for(int i=1;i<=5;i++){
    //     if(i==3){
    //         break;
    //     }
    //     printf("%d\n",i);
    // }

    // //keep taking numbers as input from user until user enters an odd number
    // int n;
    // do{
    //     printf("enter a number");
    //     scanf("%d",&n);
    //     printf("%d\n",n);

    //     if(n%2!=0){
    //         break;
    //     }
    // }while(1);
    // printf("thank u");

    // //continue(skip to next iteration)//print all numbers from 1 to 10 except for 6
    // for(int i=1;i<=10;i++){
    //     if(i==6){
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }

    // //print all the odd numbers from 5 to 50
    // for(int i=5;i<=50;i++){
    //     if(i%2==0){
    //         continue;
    //     }
    //     printf("%d\n",i);
    // }
    // // in another way
    // for(int i=5;i<=50;i++){
    //     if(i%2!=0){
    //         printf("%d\n",i);
    //     }
    // }

    //print the factorial of a number n
    int n;
    printf("enter number");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial is %d\n",fact);

   
    return 0;
}