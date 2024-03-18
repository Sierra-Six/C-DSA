#include<iostream>
using namespace std;

// //calculating factorial of given no. using recursion
// int fact(int n){
//     if(n==1) return 1;
//     int ans = n*fact(n-1);
//     return ans;
// }

// int main(){
//     cout<<fact(6);
// }





// //Program to find nth fibonacci no.
// int fib(int n){
//     //fib(0)=0 & fib(1)=1    i.e. 0th & 1th term
//     if(n==0 or n==1) return n;           //base case

//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     cout<<fib(7);
// }





// //Given an integer,find out the sum of its digits using recursion
// int sum(int n){
//     if (n>=0 && n<=9) return n;
//     return sum(n/10) + (n%10);      //sum(n/10) refers to remaining digit & n/10 refers to last digit
// }

// int main(){
//     int n = 4672;
//     cout<<"sum of digits is : "<<sum(n);
// }




// //Given two number p & q so calculate p^q
// int power(int p,int q){
//     if (q==0) return 1;
//     return power(p,q-1)*p;
// }

// int main(){
//     cout<<power(5,3);
// }





// //Print all the elements in a given array recursively.
// void printArr(int *arr,int idx,int n){
//     if(idx==n) return;
//     cout<<arr[idx]<<"\n";
//     printArr(arr,idx+1,n);
// }

// int main(){
//     int arr[]={2,5,7,8,1,9};
//     int n=6;
//     printArr(arr,0,n);
//     return 0;
// }






// //Print the max value of a given array(using recursion)
// int maxValue(int *arr,int idx,int n){
//     if(idx==n-1){
//         return arr[idx];      //i.e if one value present in an array than that will be the max value
//     }
//     return max(arr[idx],maxValue(arr,idx+1,n));        //max is used to get max. value by comparing two values
// }
// int main(){
//     int arr[]={3,10,3,2,5};
//     int n=5;
//     cout<<"Maximum value is : "<<maxValue(arr,0,n);
//     return 0;
// }





// //Find the sum of the values of the given arrays(using recursion)
// int sumArr(int *arr,int idx,int n){
//     if(idx==n-1){
//         return arr[idx];
//     }
//     return arr[idx] + sumArr(arr,idx+1,n);
// } 

// int main(){
//     int arr[]={2,3,5,20,1};
//     int n=5;
//     cout<<"sum of the values are : "<<sumArr(arr,0,n);
//     return 0;
// }





// //Remove all the occurrences of 'a' from string s = "abcax"
// string f(string &s,int idx,int n){
//     if(idx==n) return "";   //base case
//     string curr = "";
//     curr += s[idx];
//     return ((s[idx] == 'a') ? "" : curr) + f(s,idx+1,n);
// }

// int main(){
//     string s = "abcax";
//     int n =5;
//     cout<<f(s,0,n);
//     return 0;
// }





// //write a program to check wheather a given no. is palindrome or not
// bool f(int num,int *temp){
//     if(num >= 0 and num <= 9){
//         int lastDigitOfTemp = (*temp)%10;
//         (*temp) /= 10;
//         return (num == lastDigitOfTemp);
//     }
//     bool result = (f(num/10,temp) and (num%10) == ((*temp) % 10));
//     (*temp) /= 10;
//     return result;
// }

// int main(){
//     int num = 12621;
//     int anotherNum = num;
//     int *temp = &anotherNum;
//     cout<<f(num,temp);
//     return 0;
// }


