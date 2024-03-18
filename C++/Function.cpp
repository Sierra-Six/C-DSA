#include<iostream>
using namespace std;

// //write two functions to add two numbers & 3 numbers respectively
// int add(int num1,int num2){
//     return num1+num2;
// }
// float add(float num1,float num2,float num3){
//     return num1+num2+num3;
// }

// int main(){
//     int a=7;
//     int b=8;
//     cout<<"sum is : " <<add(a,b) <<endl;
//     cout<<"sum is : " <<add(3.4,7.2,2.3);
//     return 0;
// }




// //in another way
// int add(int num1,int num2);        //function prototype
// float add(float num1,float num2,float num3);     //function prototype

// int main(){
//     int a=7,b=8;                    //Actual parameter
//     cout<<"sum is : " <<add(a,b) <<endl;
//     cout<<"sum is : " <<add(3.4,7.2,2.3);
//     return 0;
// }

// int add(int num1,int num2){           //Formal parameter
//     return num1+num2;
// }
// float add(float num1,float num2,float num3){
//     return num1+num2+num3;
// }






// call by value & call by reference
// void changevalue(int z){
//     z = 100;
// }

// int main(){
//     int a=5;
//     changevalue(a);
//     cout<<a <<endl;
//     return 0;
// }

// //call by reference
// void changevalue(int &z,int &y){
//     z = 100;
//     y = 90;
// }

// int main(){
//     int a=5,b=8;
//     changevalue(a,b);
//     cout<<a << " " <<b <<endl;
//     return 0;
// }





//Default parameter value 
int add(int a,int b=1,int c=2){            // 1 & 2 are default values of b & c respectively,if no value will assigned in main function then default value will assign automatically.
    return a+b+c;
}

int main(){
    cout<<add(2) <<endl;
    cout<<add(2,2) <<endl;
    cout<<add(2,2,3) <<endl;
}