#include<iostream>
using namespace std;
//even or odd
int main(){
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;

    // if(n%2 == 0){
    //     cout<<"even no.";
    // }else{
    //     cout<<"odd number";
    // }


    // //using loop
    // int n;
    // for(int i=1;i<=100;i++){
    //     cout<<"enter number : ";
    //     cin>>n;
    // if(n%2 == 0){
    //     cout<<"even no." <<endl;
    // }else{
    //     cout<<"odd number"<<endl;
    // }

    // }  



    // //else if(using loop)
    // int marks;
    // for(int i=1;i<=100;i++){
    //     cout<<"enter marks : ";
    //     cin>>marks;
    //     if(marks>=80){
    //         cout<<"A grade"<<endl;
    //     }else if(marks>=60){
    //         cout<<"B grade"<<endl;
    //     }else if(marks>=40){
    //         cout<<"C grade"<<endl;
    //     }else
    //     cout<<"Fail "<<endl;
    // }




    // //nested if-else statement(using loop)
    // int marks;
    // for(int i=1;i<=100;i++){
    //     cout<<"enter marks : ";
    //     cin>>marks;
    //     if(marks>33){
    //         if(marks>80){
    //             cout<<"Gracefully passed"<<endl;
    //         }else
    //         cout<<"only passed"<<endl;
    //     }else
    //     cout<<"fail"<<endl;
    // }



    // //ternary operator instead of if else
    // int marks;
    // for (int i=1;i<=100;i++){
    //     cout<<"enter marks : ";
    //     cin>>marks;
    //     marks>33 ? cout<<"passed"<<endl : cout<<"failed"<<endl; 
    // }



    // //write a program to print the value if it is even and divisible by 3
    // int num;
    // for (int i=1;i<=100;i++){
    //     cout<<"enter number : ";
    //     cin>>num;
    //     num%2 ==0 && num%3 == 0 ? cout<<num <<endl : cout<<"not"<<endl;
    // }




    //check viowels or consonants
    for(int i=1;i<=100;i++){
        char ch;
        cout<<"enter character : "<<endl;
        cin>>ch;
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            cout<<"Viowels"<<endl;
        }else
        cout<<"consonants"<<endl; 
    }
}