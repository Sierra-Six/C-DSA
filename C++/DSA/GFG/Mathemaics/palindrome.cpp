#include<iostream>
#include<vector>
// #include<limits.h>                 //for lcm calculation code
using namespace std;


// // count digits
// int count_dig(int n){
//     int count =0;
//     while(n>0){
//         n=n/10;
//         count++;
//     }
//     return count;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<count_dig(n);
// }




// bool ispal(int n){
//     int rev=0;
//     int temp=n;
//     while(temp != 0){
//         int x = temp%10;
//         rev = rev*10 +x;
//         temp = temp/10;
//     }
//     return (rev == n);
// }

// int main(){
//     int n;
//     cout<<"Enter number";
//     cin>>n;

//     cout<<ispal(n);
// }






// // Trailing Zeroes in factorial
// int countZeroes(int n){
//     int fact=1;
//     for(int i=2;i<=n;i++){
//         fact=fact*i;
//     }

//     int x=0;
//     while(fact%10 == 0){
//         x++;
//         fact=fact/10;
//     }
//     return x;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<"Number of trailing Zeroes are :- "<<countZeroes(n);
// }



// //in efficient way
// int countTrailingZeroes(int n){
//     int res = 0;
//     for(int i=5;i<=n;i=i*5){
//         res = res+n/i;
//     }
//     return res;
// }

// int main(){
//     int n;
//     cout<<"Enter number";
//     cin>>n;

//     cout<<"number of trailing Zeroes are :-"<<countTrailingZeroes(n);
// }







// // GCD or HCF of two numbers
// int findGcd(int a,int b){
    
//     int res=min(a,b);
//     while(res>0){
//         if(a%res==0 && b%res==0){
//             break;
//         }
//         res--;
//     }
//     return res;
// }

// int main(){
//     int x,y;
//     cin>>x>>y;

//     cout<<"GCD of two given number is : "<<findGcd(x,y);
// }



//Euclidean Algorithm(used to get GCD in efficient way)

// int gcd(int a,int b){

//     if(b==0){
//         return a;
//     }else{
//         return gcd(b,a%b);
//     }
// }

// int main(){
//     int x,y;
//     cin>>x>>y;

//     cout<<"GCD of two number is : "<<gcd(x,y);
// }







// // LCM of two numbers

// int lcm(int a,int b){

//     int res=max(a,b);
//     while(true){
//         if(res%a==0 && res%b==0){
//             break;
//         }
//         res++;
//     }
//     return res;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"Lcm of two numbers is : "<<lcm(a,b);
// }


// // in efficient way(Formula : a*b = gcd(a,b)*lcm(a*b))

// int gcd(int a, int b){
//     if (b==0){
//         return a;
//     }else{
//         return gcd(b,a%b);
//     }
// }
// int lcm(int a,int b){
//     return (a*b)/gcd(a,b);
// }

// int main(){
//     int a,b;
//     cout<<"Enter two nummber";
//     cin>>a>>b;

//     int result=lcm(a,b);
//     cout<<result<<endl;
// }    








// // Check for prime number
// bool isPrime(int n){
//     if(n==1) return false;
//     if(n==2) return true;
    
//     for(int i=2;i<n;i++){
//         if(n%i == 0){
//             return false;
//             break;
//         }
//         return true;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<isPrime(n);
// }



// //efficient method(we donot have to iterate through all the numbers from 0 to n-1,we have to iterate from 2 to squareroot of n)
// bool isPrime(int n){
//     if(n==1) return false;

//     for(int i=2;i*i<=n;i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<isPrime(n);
// }



// // more efficient way(for large n)
// bool isPrime(int n){
//     if(n == 1) return false;
//     if(n==2 || n==3) return true;
//     if(n%2==0 || n%3==0) return false;
    
//     for(int i=5;i*i<=n;i=i+6){
//         if(n%i==0 || n%(i+2)==0){
//             return false;
//         } 
//     }
//     return true;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<isPrime(n);
// }









// // finding prime factors of a number
// bool isPrime(int i){
//     if(i == 1) return false;
//     if(i==2 || i==3) return true;
//     if(i%2==0 || i%3==0) return false;
    
//     for(int j=5;j*j<=j;j=j+6){
//         if(i%j==0 || i%(j+2)==0){
//             return false;
//         } 
//         return true;
//     }
// }
// void primeFactors(int n){
//     for(int i=2;i<n;i++){
//         if(isPrime(i)){
//             int x=i;
//             while(n%x == 0){
//                 cout<<i<<" ";
//                 x=x*i;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     primeFactors(n);
// }



// // in efficient way
// void primeFactors(int n){
//     if(n<=1) return;
//     for(int i=2;i*i<=n;i++){
//         while(n%i == 0){
//             cout<<i<<" ";
//             n=n/i;
//         }
//     }
//     if(n>1){
//         cout<<n;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter number";
//     cin>>n;
//     primeFactors(n);
// }



// // more efficient  way
// void primeFactors(int n){
//     if(n<=1) return;
//     while(n%2 == 0){
//         cout<<2<<" ";
//         n=n/2;
//     }
//     while(n%3 == 0){
//         cout<<3<<" ";
//         n=n/3;
//     }
//     for(int i=5;i*i<=n;i+=6){
//         while(n%i == 0){
//             cout<<i<<" ";
//             n=n/i;
//         }
//         while(n%(i+2) == 0){
//             cout<<i+2<<" ";
//             n=n/(i+2);
//         }
//     }
//     if(n>3){
//         cout<<n;
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter number";
//     cin>>n;
//     primeFactors(n);
// }








// // All divisors of a number
// void printDivisors(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i == 0){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     printDivisors(n);
// }



// // in efficient way
// void printDivisors(int n){
//     for(int i=1;i*i<=n;i++){
//         if(n%i == 0){
//             cout<<i<<" ";
//             if(i != n/i){
//             cout<<n/i<<" ";
//         }
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     printDivisors(n);
// }



// // in efficient way (with sorted order)
// void printDivisors(int n){
//     int i;
//     for(i=1;i*i<n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
//     for( ;i>=1;i--){
//         if(n%i==0){
//             cout<<n/i<<" ";
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     printDivisors(n);
// }







//Finding all the prime numbers less than or equal to given number

// //naive solution(O(n*sqrt of n))
// bool isPrime(int n){
//     if(n==1) return false;
//     if(n==2 || n==3) return true;
//     if(n%2==0 || n%3==0) return false;
//     for(int i=5;i*i<=n;i+=6){
//         if(n%i==0 || n%(i+2)==0){
//             return false;
//         }
//         return true;
//     }
// }

// void printPrimes(int m){
//     for(int i=2;i<m;i++){
//         if(isPrime(i)){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
//     int m;
//     cin>>m;
//     printPrimes(m);
// }



//Sieve of Eratosthenes algorithm(to write previous code in efficient way)

// void sieve(int n){
//     vector<bool> isPrime(n+1,true);
//     for(int i=2;i*i<=n;i++){
//         if(isPrime[i]){
//             for(int j=i*2;j<=n;j=j+i){
//                 isPrime[j]=false;
//             }
//         }
//     }
//     for(int i=2;i<=n;i++){
//         if(isPrime[i]){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter number : ";
//     cin>>n;
//     sieve(n);
// }



// //shorter implementation of the optimized sieve(O(nloglogn))
// void sieve(int n){
//     vector<bool> isPrime(n+1,true);
//     for(int i=2;i<=n;i++){
//         if(isPrime[i]){
//             cout<<i<<" ";
//             for(int j=i*i;j<=n;j=j+i){
//                 isPrime[j]=false;
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     sieve(n);
// }







//Computing power

// //naive solution
// int power(int x,int n){
//     int res=1;
//     for(int i=1;i<=n;i++){
//         res=res*x;
//     }
//     return res;
// }
// int main(){
//     int x=2,n=3;
//     cin>>x>>n;
//     cout<<power(x,n);
// }



// //efficient solution
// int power(int x,int n){
//     if(n==0) return 1;
//     int temp = power(x,n/2);
//     temp=temp*temp;
//     if(n%2==0){
//         return temp;
//     }else{
//         return temp*x;
//     }
// } 
// int main(){
//     int x,n;
//     cin>>x>>n;
//     cout<<power(x,n);
// }