#include<iostream>
using namespace std;

int p=5;                //Global variable
int main(){
    int p=7;            //Local variable
    cout<<p <<endl;     //local >> global (precedence)
    p++;
    cout<<p <<endl;
    cout<<::p;          //scope resolution(::) is used to print global variable in main function over local variable
}