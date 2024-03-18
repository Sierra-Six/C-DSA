#include<iostream>
using namespace std;

// // practice 1
// void fun(int n){
//     if(n==0) return;
//     cout<<n<<endl;
//     fun(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     fun(3);
//     return 0;
// }




// // practice 2
// void fun(int n){
//     if(n==0) return;
//     fun(n-1);
//     cout<<n<<endl;
//     fun(n-1);
// }
// int main(){
//     fun(3);
//     return 0;
// }



// // practice 3
// int fun(int n){
//     if(n==1){
//         return 0;
//     }else{
//         return 1+fun(n/2);
//     }
// }
// int main(){
//     cout<<fun(16);
//     return 0;
// }



// int fun(int n){
//     if(n<3){
//         return 0;
//     }else{
//         return 1+fun(n/3);
//     }
// }
// int main(){
//     cout<<fun(18);
//     return 0;
// }



// // practice 4
// void fun(int n){
//     if(n==0) return;
//     fun(n/2);
//     cout<<n%2<<endl;
// }
// int main(){
//     fun(7);
//     return 0;
// }
// // the upper code prints binary equivalent of a decimal number(n) where n>0.




// // print n to 1 using recursion
// void printNto1(int n){
//     if(n==0) return;
//     cout<<n<<endl;
//     printNto1(n-1);
// }
// int main(){
//     printNto1(7);
//     return 0;
// }




// // print 1 to n using recursion(this is a non tail recursive code)
// void print1toN(int n){
//     if (n==0) return;
//     print1toN(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     print1toN(5);
//     return 0;
// }




// // Tail recursive code of above code
// void print1toN(int n,int k){
//     if(n==0) return;
//     cout<<k<<endl;
//     print1toN(n-1,k+1);
// }
// int main(){
//     print1toN(5,1);
//     return 0; 
// }




// // finding factorial of a number(non tail recursive code)
// int fact(int n){
//     if(n==0 || n==1) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     cout<<fact(5);
//     return 0;
// }



// //tail recursive code of above code
// int fact(int n,int k){
//     if(n==0 || n==1) return k;  
//     return fact(n-1,k*n);
// }
// int main(){
//     cout<<fact(5,1);
//     return 0;
// }





// //Find nth fibbonacci sequence
// //Thinking of base case is important otherwise we will get segmentation fault in c++ and stack overflow exception in java
// int fibbo(int n){
//     // if(n==0) return 0;
//     // if(n==1) return 1;
//     if(n<=1) return n;
//     return fibbo(n-1)+fibbo(n-2);
// }
// int main(){
//     cout<<fibbo(6);
//     return 0;
// }




// //sum of n natural number (direct formula)
// int sum_nat(int n){
//     return n*(n+1)/2;
// }
// int main(){
//     cout<<sum_nat(6);
// }





// //sum of n natural numbers using recursion
// int getSum(int n){
//     if(n==0) return 0;
//     return n+getSum(n-1);
// }
// int main(){
//     cout<<getSum(6);
//     return 0;
// }





// //check palindrome or not using recursion
// bool isPal(string str,int start,int end){
//     if(start>=end) return true;
//     if(str[start] != str[end]) return false;
//     return isPal(str,start+1,end-1);
// }
// int main(){
//     string str;
//     cout<<"enter a string";
//     cin>>str;
    
//     if(isPal(str,0,str.length()-1)){
//         cout<<"It is a palindrome"<<endl;
//     }else{
//         cout<<"It is not a palindrome"<<endl;
//     }
//     return 0;
// }






// //sum of digits of a number
// int sum(int n){
//     int dig_sum=0;
//     while(n!=0){
//         int x=n%10;
//         dig_sum+=x;
//         n=n/10;
//     }
//     return dig_sum;
// }
// int main(){
//     cout<<sum(4621);
//     return 0;
// }




// //sum of digits of a number(using recursion)
// int sum_dig(int n){
//     // if(n==0) return 0;
//     if(n<=9) return n;
//     return sum_dig(n/10)+n%10;
// }
// int main(){
//     cout<<sum_dig(4521);
//     return 0;
// }

// //in this case the upper iterative solution is preffered over recursuion due to less  space






// //Rope cutting problem
// int maxpieces(int n,int a,int b,int c){
//     if(n==0) return 0;
//     if(n<0) return -1;
//     int res=max(maxpieces(n-a,a,b,c),
//             maxpieces(n-b,a,b,c),
//             maxpieces(n-c,a,b,c));
//     if(res==-1){
//         return -1;
//     }else{
//         return res+1;
//     }
// }
// int main(){
//     cout<<maxpieces(23,11,9,12);
//     return 0; 
// }

//The above code is not working






// //print subsets of a string 
// void subsets(string s,string curr,int i){
//     if(i==s.length()){
//         cout<<curr;
//         return;
//     }
//     subsets(s,curr,i+1);
//     subsets(s,curr+s[i],i+1);
// }
// int main(){
//     string s = "ABC";
//     string curr=" ";
//     int i=0;
//     subsets(s,curr,i);
// }







// //Tower of Hanoi
// void Toi(int n,char A,char B,char C){
//     if(n==1){
//         cout<<"Move 1 from "<<A<<"to "<<C<<endl;
//         return;
//     }
//     Toi(n-1,A,C,B);
//     cout<<"Move "<<n<<"from "<<A<<"to "<<C<<endl;
//     Toi(n-1,B,A,C);
// }
// int main(){
//     char A='a';char B='b';char C='c';
//     Toi(3,A,B,C);
//     return 0;
// }






// //Josephus problem
// int jos(int n,int k){
//     if(n==1){
//         return 0;
//     }else{
//         return(jos(n-1,k)+k)%n;
//     }
// }
// int main(){
//     cout<<jos(5,3);
//     return 0;
// }