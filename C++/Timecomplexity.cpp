#include<iostream>
using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;
//     int sum=0;
//     for(int i=n;i<=m;i++){
//         sum+=i;
//     }
//     cout<<sum;
// }


//in another way(using arithmetic progression)
int main(){
    int x,y;
    cin>>x>>y;
    int n=(y-x+1);        // n is no. of terms
    int a=x;              //a is first term

    int result = (n*(2*a + (n-1)*1))/2;
    cout<<result;
}