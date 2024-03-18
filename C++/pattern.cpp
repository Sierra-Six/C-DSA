#include<iostream>
using namespace std;
//All star patterns are same as c

// int main(){
//     int n,m;
//     cout<<"Enter no. of rows : ";
//     cin>>n;
//     cout<<"Enter no. of columns : ";
//     cin>>m;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


//Numerical rectangular pattern

int main(){
    for(int i=1;i<=7;i++){
        for(int j=i;j<=7;j++){
            cout<<j;
        }
        for(int k=1;k<i;k++){
            cout<<k;
        }
        cout<<endl;
    }



    // for(int i=1;i<=7;i++){
    //     for(int j=1;j<=7;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }



    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=6;j++){
    //         if(i==1 || i==4 || j==1 || j==6){
    //             cout<<j;
    //         }else
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }



    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=3;j++){
    //         if(i%2 != 0){
    //             cout<<"12";
    //         }else
    //         cout<<"21";
    //     }
    //     cout<<endl;
    // }

    // //in another way
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=6;j++){
    //         if((i+j)%2 == 0){
    //             cout<<"1";
    //         }else
    //         cout<<"2";
    //     }
    //     cout<<endl;
    // }





    // for(int i=1;i<=4;i++){
    //     for(int j=7;j>i;j--){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i;k++){
    //         cout<<k;
    //     }
    //     for(int m=i-1;m>=1;m--){
    //         cout<<m;
    //     }
    //     cout<<endl;
    // }

}