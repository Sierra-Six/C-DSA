#include<iostream>
using  namespace std;
//print the sum of first n natural numbers,where n is the input.
int main(){
    // int n;
    // cout<<"enter no. : ";
    // cin>>n;
    // int sum=0,i=1;
    // while(i<=n){
    //     sum += i;   //sum =sum+i
    //     i++;
    // }
    // cout<<"sum is : "<<sum <<endl;


    // //using for loop
    // int n;
    // cout<<"enter no. : ";
    // cin>>n;
    // int sum=0,i=1;
    // for( ;i<=n;i++){
    //     sum += i;
    // }
    // cout<<"sum is : "<<sum <<endl;



    //using do while loop
    int n;
    cout<<"enter no. : ";
    cin>>n;
    int sum=0,i=1;
    do{
        sum += i;
        i++;
    }while(i<=n);
    cout<<"sum is : "<<sum <<endl;
}