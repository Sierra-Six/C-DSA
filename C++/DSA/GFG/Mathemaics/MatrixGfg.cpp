#include<iostream>
#include<vector>
using namespace std;


// //Arrays of vectors
// int main(){
//     int m=3,n=2;
//     vector<int> arr[m];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             arr[i].push_back(10);
//         }
//     }

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }





// //Using Double pointer(C-style solution)
// void print(int **arr,int m,int n){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }
// int main(){
//     int **arr;
//     int m=3,n=2;
//     arr=new int *[m];
//     for(int i=0;i<m;i++){
//         arr[i]=new int[m];
//         for(int j=0;j<n;j++){
//             arr[i][j]=i;
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     return 0;
// }







// //Print a matrix in snake pattern
// const int r=3,c=3;
// void printSnake(int mat[r][c]){
//     for(int i=0;i<r;i++){
//         if(i%2 == 0){
//             for(int j=0;j<c;j++){
//                 cout<<mat[i][j]<<" ";
//             }
//         }else{
//             for(int j=c-1;j>=0;j--){
//                 cout<<mat[i][j]<<" ";
//             }
//         }
//     }
// }
// int main(){
//     int mat[r][c] = {{10,20,30},{40,50,60},{70,80,90}};
//     printSnake(mat);
// }







// //Print boundary elements of a matrix
// const int r=3,c=3;
// void printBoundary(int mat[r][c]){
//     if(r == 1){
//         for(int i=0;i<c;i++){
//             cout<<mat[0][i]<<" ";
//         }
//     }
//     else if(c == 1){
//         for(int i=0;i<r;i++){
//             cout<<mat[i][0]<<" ";
//         }
//     }
//     else{
//         for(int i=0;i<c;i++){
//             cout<<mat[0][i]<<" ";
//         }
//         for(int i=1;i<r;i++){
//             cout<<mat[i][c-1]<<" ";
//         }
//         for(int i=c-2;i>=0;i--){
//             cout<<mat[r-1][i]<<" ";
//         }
//         for(int i=r-2;i>=1;i--){
//             cout<<mat[i][0]<<" ";
//         }
//     }

// }
// int main(){
//     int mat[r][c]= {{10,20,30},{40,50,60},{70,80,90}};
//     printBoundary(mat);
// }








// //Transpose of a matrix

// //Naive solution
// const int r=3,c=3;
// void Transpose(int mat[r][c]){

//     int temp[c][r];
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             temp[i][j]=mat[j][i];
//         }
//     }
//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             mat[i][j]=temp[i][j];
//         }
//     }

//     for(int i=0;i<c;i++){
//         for(int j=0;j<r;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int mat[r][c]= {{10,20,30},{40,50,60},{70,80,90}};
//     Transpose(mat);
// }






// //Efficient solution
// const int n=3;
// void Transpose(int mat[n][n]){

//    for(int i=0;i<n;i++){
//        for(int j=i+1;j<n;j++){
//           swap(mat[i][j],mat[j][i]);
//        }
//    }
//    for(int i=0;i<n;i++){
//       for(int j=0;j<n;j++){
//         cout<<mat[i][j]<<" ";
//       }
//       cout<<endl;
//    }
// }
// int main(){
//     int mat[n][n]= {{10,20,30},{40,50,60},{70,80,90}};
//     Transpose(mat);
// }







// //Rotate a matrix by 90 degree(anticlockwise)

// //Naive solution( time complexity-theta(n^2),auxillary space-theta(n^2))
// void Rotation90(int arr[4][4]){
//     int temp[4][4];
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             temp[i][j] = arr[i][j];
//         }
        
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             arr[i][j] = temp[j][4-i-1];
//         }
        
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
    
//     int arr[4][4];
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;

//     Rotation90(arr);
// }







// //Efficient solution(same time,auxillary space-theta(1))
// const int n=3;
// void rotate90(int mat[n][n]){

//     //transpose
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             swap(mat[i][j],mat[j][i]);
//         }
//     }

//     //reverse columns
//     for(int i=0;i<n;i++){
//         int low=0,high=n-1;
//         while(low<high){
//             swap(mat[low][i],mat[high][i]);
//             low++;
//             high--;
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int mat[n][n]= {{10,20,30},{40,50,60},{70,80,90}};
//     rotate90(mat);
// }








// //Print Spiral traversal of matrix    (time complexity = theta(r*c))

// const int r=4,c=4;
// void printSpiral(int mat[r][c]){
//     int top=0,left=0,bottom=r-1,right=c-1;
//     while(top<=bottom && left<=right){
//         for(int i=left;i<=right;i++){                //top row
//             cout<<mat[top][i]<<" ";
//         }
//         top++;
//         for(int i=top;i<=bottom;i++){                //right column
//             cout<<mat[i][right]<<" ";
//         }
//         right--;
//         if(top <= bottom){
//             for(int i=right;i>=left;i--){            //Bottom row(reverse order)
//                 cout<<mat[bottom][i]<<" ";
//             }
//             bottom--;
//         }
//         if(left <= right){      
//             for(int i=bottom;i>=top;i--){            //left column(Reverse order)
//                 cout<<mat[i][left]<<" ";
//             }
//             left++;
//         }
//     }
// }
// int main(){
//     int mat[r][c]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     printSpiral(mat);
// }








// //Search in a row wise and column wise sorted matrix

// //Naive solution(O(r*c))
// const int r=4,c=4;
// void search(int mat[r][c],int x){
//     for(int i=0;i<r;i++){
//        for(int j=0;j<c;j++){
//           if(mat[i][j] == x){
//              cout<<"Found at ("<<i<<","<<j<<")";
//              return;
//           }
//        }
//     }
//     cout<<"Not found";
// }
// int main(){
//     int mat[r][c] = {{10,20,30,40},
//                      {15,25,35,45},
//                      {27,29,37,48},
//                      {32,33,39,50}};
//     int x = 29;
//     search(mat,x);
// }





// // Efficient solution(O(r+c))          GFG Code
// const int r=4,c=4;
// void search(int mat[r][c],int x){
//   int i=0,j=c-1;
//   while(i<r && j>=0){
//     if(mat[i][j] == x){
//       cout<<"Found at ("<<i<<","<<j<<")";
//       return;
//     }
//     else if(mat[i][j] > x){
//       j--;
//     }
//     else{
//       i++;
//     }
//   }
//   cout<<"Not Found";
// }
// int main(){
//     int mat[r][c] = {{10,20,30,40},
//                      {15,25,35,45},
//                      {27,29,37,48},
//                      {32,33,39,50}};
//     int x = 29;
//     search(mat,x);
// }






// //Efficient solution(O(r+c))   (MY CODE)
// const int r=4,c=4;
// void search(int mat[r][c],int x){
//   int top=c-1,down=0;
//      for(int i=0;i<r;i++){
//          while(down<=i){
//              if(mat[i][top] == x){
//             cout<<"Found at ("<<i<<","<<top<<")";
//             return;
//             }
//              if(mat[i][top] > x){
//             top--;
//             }
//             if(mat[i][top] < x){
//             down++;
//             }
//          }
//      }

//      cout<<"Not found";
// }
// int main(){
//     int mat[r][c] = {{10,20,30,40},
//                      {15,25,35,45},
//                      {27,29,37,48},
//                      {32,33,39,50}};
//     int x = 29;
//     search(mat,x);
// }


