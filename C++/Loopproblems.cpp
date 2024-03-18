#include<iostream>
using namespace std;

// //count the number of digits for a given no. n
// int main(){
//     int n;
//     cout<<"Enter no. : ";
//     cin>>n;

//     int count=0;
//     while(n>0){
//         count++;
//         n = n/10;
//     }
//     cout<<"No. of digits are : "<<count <<endl;
//     return 0;
// }



// //Find the sum of digits in a given number n
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     int sum = 0;
//     while(n > 0){
//         int lastdigit = n%10;
//         sum = sum+lastdigit;
//         n = n/10;
//     }
//     cout<<"sum of digits are : "<<sum <<endl;
// } 




// //Reverse the digits of a number
// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     while(n>0){
//         int m = n%10;
//         cout<<m;
//         n = n/10;
//     }


//     //in another way
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int reverse = 0;
//     while(n>0){
//         int lastdigit = n%10;
//         reverse = reverse*10 + lastdigit;
//         n = n/10;
//     }
//     cout<<"reverse number is : "<<reverse;

// }




// //Find the sum of the following series (s = 1-2+3-4...n)
// int main(){
//     int n;
//     cout<<"Enter last number : ";
//     cin>>n;
//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         if(i%2 != 0){
//             sum+=i;
//         }else
//         sum-=i;
//     }
//     cout<<"Total sum is : "<<sum;
// }





// //Print first n factorial numbers
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//         cout<<fact <<endl;
//     }
//     return 0;
// }




// //Given 2 numbers a & b .find a raise to the power b.
// int main(){
//     int a,b;
//     cout<<"Enter numbers a&b : ";
//     cin>>a>>b;
//     int pow = 1;
//     for(int i=1;i<=b;i++){
//         pow = pow*a;
//     }
//     cout<<"power is : "<<pow <<endl;
//     return 0;
// }





// //Convert binary to decimal
// int main(){
//     int n;
//     cout<<"Enter binary no. : ";
//     cin>>n;
//     int sum = 0;
//     int pow = 1;
//     while(n>0){
//         int last_digit = n%10;
//         sum = sum + last_digit*pow;
//         pow *= 2;
//         n = n/10;
//     }
//     cout<<"Decimal no. is : "<<sum <<endl;
//     return 0;
// }




// Convert decimal to binary
int main(){
    int n;
    cout<<"Enter decimal no. : ";
    cin>>n;
    int sum = 0;
    int pow = 1;
    while(n>0){
        int paritydigit = n%2;
        sum += paritydigit*pow;
        pow *= 10;
        n = n/2;
    }
    cout<<"Binary no. is : "<<sum <<endl; 
    return 0;
}