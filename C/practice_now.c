#include<stdio.h>
int main(){
    double a,b;
    char op;
    printf("Enter any two number");
    scanf("%f%f",&a,&b);
56
    printf("Enter operators like +,-,*,/");
    scanf("%c",&op);

    if(op=='+'){
        printf("sum is %d",a+b);
    }
    else if(op=='-'){
        printf("Difference is %d",a-b);
    }
    else if(op=='*'){
        printf("multiplication is %d",a*b);
    } 
    else if(op=='/'){
        printf("division is %f",a/b);
    }  
    else{
        printf("Invalid operator");
    } 
}