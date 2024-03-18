#include<iostream>
using namespace std;

// int main(){
//     int array[] = {1,2,3,4,5};      //this array takes 20 bytes(4 bytes*5) of memory
//     cout<<array[2] <<endl;
//     cout<<sizeof(array) <<endl;
//     cout<<sizeof(array)/sizeof(array[0]);            //prints length of an array


    // int array[3];
    // array[0] = 7;
    // array[1] = 5;
    // array[2] = 9;
    // cout<<array[0] <<" "<<array[1] <<" "<<array[2];



    // int array[5] = {3,4,5,6,7};
    // for(int i=0;i<5;i++){
    //     // cout<<array[i] <<endl;
    //     cout<<i <<" index is : " <<array[i] <<endl;
    // }



    // for each loop (for traversing an array or printing elements of an array)
    // int array[5] = {3,4,5,6,7};
    // for(int ele:array){              // ele is a variable(element)
    //     cout<<ele <<endl;
    // }



    // //while loop (for traversing an array)
    // int array[5] = {3,4,5,6,7};
    // int i=0;
    // while(i < 5){
    //     cout<<array[i] <<endl;
    //     i++;
    // }




    // //input
    // char viowels[5];
    // for(int i=0;i<5;i++){
    //     cin>>viowels[i];
    // }
    // for(int i=0;i<5;i++){
    //     cout<<"viowels are : "<<viowels[i]<<endl;
    // }
// }





//Questions

// //Calculate the sum of all the elements in the given array.
// int main(){
//     int array[] = {8,9,3,4,5};
//     int size = sizeof(array)/sizeof(array[0]);
//     int sum =0;
//     for(int i=0;i<size;i++){
//         sum = sum + array[i];
//     }
//     cout<<"sum is : "<<sum <<endl;
// }




//Find the maximum value out of all the elements in the array
// int main(){
//     int array[] = {3,4,16,29,18};
//     int max = array[0];
//     for(int i=1 ;i<5 ;i++){
//         if(array[i]>max){
//             max = array[i];
//         }
//     }
//     cout<<"Maximum value is : "<<max;
// }





//Linear search
//Search if a given element is present in the array or not.if it is not present then return -1 else return the index(array position).
// int main(){
//     int array[] = {4,6,7,3,2};
//     int n;
//     int ans = -1;
//     cout<<"Enter number : ";
//     cin>>n;
//     for(int i=0;i<5;i++){
//         if(n == array[i]){
//             ans = i;
//             break;
//         }
//     }
//     cout<<ans <<endl;
// }
