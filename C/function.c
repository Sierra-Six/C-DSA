// //declaration/prototype
// #include<stdio.h>
// void printHello();

// int main(){  
//     printHello();  //function call
//      printHello(); 
//       printHello(); 
//     return 0;
// }
// void printHello(){  //function definition
//     printf("hello!\n");
//     printf("my name is satya\n");
// }


// //write a function that prints namaste if user is indian & bonjour if the user is french
// void namaste();
// void bonjour();
// void nomatch();

// int main(){  
//     printf("enter i for indian and f for french : ");
//     char ch;
//     scanf("%c",&ch);
//     if(ch=='i'){
//         namaste();  //function call
//     }else if(ch == 'f'){
//         bonjour();  //function call
//     }else{
//         nomatch();  //function call
//     } 
//     return 0;
// }
// void namaste(){ 
//     printf("namaste\n");
// }
// void bonjour(){
//     printf("bonjour\n");
// }
// void nomatch(){
//     printf("No match");
// }


// //sum
// int sum(int a,int b); //int is return type

// int main(){
//     int a,b;
//     printf("enter first number : ");
//     scanf("%d",&a);
//     printf("enter second number : ");
//     scanf("%d",&b);

//     int s=sum(a,b);  // the return x+y value is assigned to s
//     printf("sum is %d\n",s);

//     return 0;
// }
//    int sum(int x,int y){  //a value is assigned to x & b value is assigned to y
//     return x+y;  //return must be integer type
// }


// //print table of a number given(n)
// void printtable(int n);

// int main(){
//     int n;
//     printf("enter number : ");
//     scanf("%d",&n);

//     printtable(n);  //argument/actual parameter
//     return 0;
// }
// void printtable(int n){  //parameter/formal parameter
//     for (int i=1;i<=10;i++){
//         printf("%d\n",i*n);
//     }
// }


// //write a function to convert celsius to farenheit
// float converttemp(float celcius);

// int main(){
//    float far=converttemp(37);
//    printf("far : %f\n",far);
//     return 0;
// }

// float converttemp(float celcius){
//     float far=celcius*1.8+32;
//     return far;
// }



// //write a function to calculate percentage of a student from marks in science,math, sanskrit
// int calpercentage(int science,int math,int sanskrit);
// int main(){
//     int sc=89;
//     int math=94;
//     int sans=98;
//     printf("percentage is : %d\n",calpercentage(sc,math,sans));
//     return 0;
// }

// int calpercentage(int science,int math,int sanskrit){
//     return (science+math+sanskrit)/3;
// }


//print nth   number of  fibonacci sequence
int fib(int n);

int main(){
    printf("%d\n",fib(7));
    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
   
    int fibN=fib(n-1)+fib(n-2);
    return fibN;
}