#include<stdio.h>
int main(){
    // int age=34;
    // int *ptr=&age;  //pointer
    // int _age=*ptr;

    // printf("%d\n",_age);
    // printf("%d\n",&age);
    // printf("%d\n",*(&age));
    // printf("%d\n",*ptr);
    // printf("%p\n",&age); // print adress of age
    // printf("%p\n",ptr);
    // printf("%p\n",&ptr);  //print address of pointer
    // //%u is used to print easy value of adress
    // printf("%u\n",&age);
    // printf("%u\n",ptr);
    // printf("%u\n",&ptr);
    // //%d & %u is used to print address value 
    // return 0;


    // int *ptr;
    // int x;
    // ptr=&x;
    // *ptr=5;

    // printf("x = %d\n",x);  //indirectly x=5
    // printf("*ptr = %d\n",*ptr);

    // *ptr +=5;
    //  printf("x = %d\n",x);  //indirectly x=x+5
    // printf("*ptr = %d\n",*ptr);

    // (*ptr)++;
    //  printf("x = %d\n",x);
    // printf("*ptr = %d\n",*ptr);


    //pointer to pointer
    float price=100.00;
    float *ptr=&price;
    float **pptr=&ptr;

    printf("%f\n",**pptr);

     return 0;
}