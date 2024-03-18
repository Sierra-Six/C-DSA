#include<iostream>           //iostream is header file which contain functions like(input/output) is included
using namespace std;
// int main(){                  //int is return type
//     cout<<"hello Losangeles "<<endl<<"hello\n";    //print Losangeles. cout<<"" is used to print something
//     //endl is used for next line

//     int apples;
//     cout<<"enter no. of apples";
//     cin>>apples;  //input taken from user
//     cout<<"numbers of apples are : " <<apples;        //output 
    
// }

// //swapping two numbers
// int main(){
//     int a,b;
//     cout<<"enter a : ";
//     cin>>a;
//     cout<<"enter b : ";
//     cin>>b;

//     int c;
//     c = a;
//     a = b;
//     b = c;
//     cout<<"a = "<<a <<endl;
//     cout<<"b = "<<b;
//     return 0;
// }


// //Arithmetic operators  & relational operator & logical operators & assignment operator.
// int main(){
//     int a=16,b=8;
//     cout<<a+b <<endl;
//     cout<<a-b <<endl;
//     cout<<a*b <<endl;
//     cout<<a/b <<endl;
//     cout<<a%b <<endl;

//     cout<<(a==b) <<endl;
//     cout<<(a!=b) <<endl;
//     cout<<(a>=b) <<endl;
//     cout<<(a<=b) <<endl;

//     //logical operator
//     bool exp1 = true;
//     bool exp2 = false;
//     cout<<(exp1 && exp2) <<endl;
//     cout<<(exp1 || exp2) <<endl;
//     cout<<!(exp1) <<endl;

//     //assignment operator
//     cout<<(a+=2) <<endl;   //a+=b = (a=a+b)
//     cout<<(b-=2) <<endl;
//     cout<<(a*=2) <<endl;
//     cout<<(b/=2) <<endl;
//     cout<<(a%=2) <<endl;
// }



// //Bitwise operator
// int main(){
//     int num1=5; //0101(in binary form)
//     cout<<(num1 << 1) <<endl;   // << means left shift
//     cout<<(num1 >> 1) <<endl;   // >> means right shift
//     cout<<(num1<<2)<<endl;
//     cout<<(num1>>2)<<endl;

//     //x<<y is equivalent to x*(2^y)
//     //x>>y is equivalent to x/(2^y)

//     int num2 = 8;  //1000(in binary form)
//     cout<<(num1 & num2) <<endl;  //&-bitwise AND
//     cout<<(num1 | num2) <<endl;  //|-bitwise OR

//     cout<<(num1 ^ num2)<<endl;   //Bitwise XOR(^) oprator(if two value different then it gives 1)

//     cout<<(~num1);    //Bitwise not(~) operator(it just inverts all binary number)
// }



// //sizeof operator
// int main(){
//     cout<<sizeof(int) <<endl;
//     cout<<sizeof(char) <<endl;


//     //ternary operator
//     int a=5;
//     char ch='a';
//     bool flag;
//     a == ch ? flag = true : flag = false;
//     cout<<flag <<endl;

//     //adress operator
//     cout<<(&a) <<endl;

// }


// //post increment and pre increment operator
// int main(){
//     int i=1;
//     cout<<(i++) <<endl;
//     cout<<i <<endl;

//     cout<<(++i) <<endl;
//     cout<<i <<endl;
//     //same in decrement also

//     int c=6;
//     cout<<(c++) <<endl;
//     int b=c+5;
//     cout<<(b) <<endl;
// }


//C++ operators precedence and associativity is same as C(only a few difference).


// int main(){
//     bool p = false;
//     bool q = false;
//     bool r = true;

//     cout<<(p==q==r);  //check left to right(associativity)
// }




// print adress of memory location
// int main(){
//     int a;
//     cout<<&a;
    
// }