//Problems
#include<iostream>
#include<vector>
using namespace std;

// //FInd the total no. of pairs in the array  whose sum is equal to the given value x
// int main(){
//     int array[] = {2,3,4,5,7,8,6};
//     int x;
//     cout<<"Enter value : ";
//     cin>>x;
//     int pairs=0;
//     for(int i=0;i<7;i++){
//         for(int j=i+1;j<7;j++){
//             if(array[i]+array[j] == x){
//                 pairs++;
//             }
//         }
//     }
//     cout<<"No. of pairs are : "<<pairs;
// }





// //Count the number of triplets whose sum is equal to the given value x
// int main(){
//     int array[] = {2,11,1,8,4,9,10};
//     int x;
//     cout<<"Enter value : ";
//     cin>>x;
//     int triplets=0;
//     for(int i=0;i<7;i++){
//         for(int j=i+1;j<7;j++){
//             for(int k=j+1;k<7;k++){
//                 if(array[i]+array[j]+array[k] == x){
//                     triplets++;
//                 }
//             }
//         }
//     }
//     cout<<"No. of triplets are : "<<triplets;
// }





// //Find the unique  number in a given array where all the elements are being repeated twice with one value being unique
int main(){
    int array[] = {2,3,1,3,2,5,1,5,6,5};
    int unique;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(array[i] != array[j]){
                unique = array[i];
            }
        }
    }
    cout<<"Unique no. is : "<<unique;
}





