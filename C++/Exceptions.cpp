#include<iostream>
using namespace std;

//try,throw,catch(reference:w3schools)
// int main(){
//     try{
//         int age=15;

//         if(age>=18){
//             cout<<"Access granted - you are old enough";
//         }else{
//             throw(age);
//         }
//     }
//     catch(int myNum){
//         cout<<"Access denied - you must be atleast 18 years old.\n";
//         cout<<"age is : "<<myNum;
//     }
//     return 0;

// }



//we can also use the *throw* keyword to output a reference number, like a custom error/code for organizing puposes:
// int main(){
//     try{
//         int age=15;

//         if(age>=18){
//             cout<<"Access granted - you are old enough";
//         }else{
//             throw 404;
//         }
//     }
//     catch(int myNum){
//         cout<<"Access denied - you must be atleast 18 years old.\n";
//         cout<<"Error number: "<<myNum;
//     }
//     return 0;

// }




//Handling any type of exceptions(...)
//if you do not know the throw type used in the try block,you can use 'three dots'syntax(...)inside the catch block,which will handle any type of exception:

int main(){
    try{
        int age=15;

        if(age>=18){
            cout<<"Access granted - you are old enough";
        }else{
            throw 404;
        }
    }
    catch(...){
        cout<<"Access denied - you must be atleast 18 years old.\n";
    }
    return 0;

}