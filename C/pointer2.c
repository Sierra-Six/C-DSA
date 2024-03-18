//pointers to function call
#include<stdio.h>

// void square(int n);
// void _square(int* n);

// int main(){
//     int n=7;
//     square(n);
//     printf("number is %d\n",n);

//     _square(&n);
//     printf("number is %d\n",n);  
//     return 0;
// }
// //call by value (only copied value of n is passed as argument after call, so value of number not changed)
// void square(int n){
//     n =n * n;
//     printf("square is  %d\n",n);
// }

// //call by reference (here the value in address changed so real value of number changed)
// void _square(int* n){
//     *n = (*n) * (*n);
//     printf("square is %d\n",*n);
// } 


//swap two numbers
// void swap(int a,int b);
void _swap(int *a,int *b);

int main(){
    // int x=6,y=9;
    // swap(x,y);
    // printf("x= %d & y= %d\n",x,y);

    int x=6,y=9;
    _swap(&x,&y);
    printf("x= %d & y= %d\n",x,y);
    return 0;
}
// //call by value
// void swap (int a,int b){
//    int t=b;                 //t is temporary variable
//     b=a;
//     a=t;
//     printf("a= %d & b= %d\n",a,b);
// }
//call by reference
void _swap (int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a= %d & b= %d\n",*a,*b);
}