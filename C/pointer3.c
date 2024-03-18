#include<stdio.h>
// //write a function to calculate the sum,product&average of two numbers.print that average in the main function
// void dowork(int a,int b,int *sum,int *prod,int *avg);

// int main(){
//     int a=7,b=4;
//     int sum,prod,avg;
//     dowork(a,b,&sum,&prod,&avg);

//     printf("sum= %d ,prod= %d,avg = %d\n",sum,prod,avg);
//     return 0;
// }

// void dowork(int a,int b,int *sum,int *prod,int *avg){
//     *sum=a+b;
//     *prod=a*b;
//     *avg=(a+b)/2;
// }


//increment & decrement of pointer
int main(){
    // int age=22;
    // int *ptr=&age;
    // printf("ptr= %u\n",ptr);
    // ptr++;                     //ptr++ =ptr+size of given datatype(int,float,char)
    // printf("ptr= %u\n",ptr);   // as integer datatype occupie 4 bytes so ptr increae by four
    // ptr--;                    //ptr-- = ptr-size of given datatype
    // printf("ptr= %u\n",ptr);



    //pointer arithmetic
    int age=22;
    int _age=34;
    int *ptr=&age;
    int *_ptr=&_age;

    printf("%u\n,%u\n,difference is = %u\n",ptr,_ptr,ptr-_ptr);  //difference is 4bytes i.e. one integer type
    _ptr=&age;
    printf("comparision is = %u\n",_ptr==ptr);  //1 for true & 0 for false
    return 0;
}