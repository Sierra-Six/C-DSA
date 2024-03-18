#include<iostream>
using namespace std;

// //2D arrays(n*m).total elements in this array=n*m
// int main(){
// int array[2][3] = {{4,5,7},{1,9,6}};
// cout<<array[0][2];
// }


//3D arrays(3*2*4)  means three 2D array(2*4).Total elements = 3*n*m

// //Taking 2D array as input & output
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int array[n][m];
//     for(int i=0;i<n;i++){      //n->rows
//         for(int j=0;j<m;j++){  //m->columns
//             cin>>array[i][j];
//         }
//     }

//     for(int i=0;i<n;i++){      
//         for(int j=0;j<m;j++){  
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }





// //Write a program to display multiplication of two matrices entered by the user.
// int main(){
//     int r1,c1;
//     cin>>r1>>c1;
//     int A[r1][c1];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c1;j++){
//             cin>>A[i][j];
//         }
//     }

//     int r2,c2;
//     cin>>r2>>c2;
//     int B[r2][c2];
//     for(int i=0;i<r2;i++){
//         for(int j=0;j<c2;j++){
//             cin>>B[i][j];
//         }
//     }

//     if(c1 != r2){
//         cout<<"Matrix multiplication not possible";
//     }

//     int c[r1][c2];
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             int value=0;
//             for(int k=0;k<r2;k++){
//                 value+=A[i][k]*B[k][j];
//             }
//             c[i][j]=value;
//         }
//     }
//     for(int i=0;i<r1;i++){
//         for(int j=0;j<c2;j++){
//             cout<<c[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }





//Write a program to display transpose of matrix entered by the user
int main(){
    int r,c;
    cin>>r>>c;
    int array[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>array[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    int transpose[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            transpose[i][j]=array[j][i];
        }
    }

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}