#include<stdio.h>

// //print helloworld five times using recursive function
// void printhlw(int count);
// int main(){
//     printhlw(10);
//     return 0;
// }

// void printhlw(int count){
//     if(count==0){
//         return;
//     }
//     printf("hello world\n");
//     printhlw(count-1);  //function call(itself)
// }


//factorial of n
int fact(int n);
int main(){
    printf("factorial is : %d\n",fact(5));
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm1=fact(n-1);  //factorial of n-1
    int factN=factNm1*n;  //factorial of (n-1) * n
    return factN;
}