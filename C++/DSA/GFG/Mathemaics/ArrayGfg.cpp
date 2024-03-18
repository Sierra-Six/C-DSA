#include<iostream>
using namespace std;

// //search an element in an array (if present return 1 else -1)
// int search(int arr[],int n,int x){
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={10,23,1,25,34};
//     int x;
//     cin>>x;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<search(arr,n,x);
// }






// //print index of largest element of an array
// int largest(int arr[],int n){
//     int idx = 0;
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[idx]){
//             idx=i;
//         }
//     }
//     return idx;
// }
// int main(){
//     int arr[]={10,5,20,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"index of largest number is : "<<largest(arr,n)<<endl;
//     return 0;
// }







// //print index of second largest element of an array
// //Naive approach
// int largest(int arr[],int n){
//     int idx = 0;
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[idx]){
//             idx=i;
//         }
//     }
//     return idx;
// }
// int seclar(int arr[],int n){
//     int idx2 = largest(arr,n);
//     int res=-1;
//     for(int i=1;i<n;i++){
//         if(arr[i] != arr[idx2]){
//             if(res == -1){
//                 res=i;
//             }else if(arr[i]>arr[res]){
//                 res =i;
//             }
//         }
//     }
//     return res;
// }
// int main(){
//     int arr[]={10,5,17,20,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"index of largest number is : "<<seclar(arr,n)<<endl;
//     return 0;
// }

// //res=-1 is taken for the example arr[]={10,10,10} ,in this case the result will be -1









// //in eficient way
// int seclar(int arr[],int n){
//     int res=-1,largest=0;
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[largest]){
//             res=largest;
//             largest=i;
//         }
//         else if(arr[i]!=arr[largest]){
//             if(res == -1 || arr[i]>arr[res]){
//                 res=i;
//             }
//         }
//     }
//     return res;
// }
// int main(){
// int arr[]={5,20,12,20,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<seclar(arr,n);
//     return 0;
// }








// //Check if an array is sorted or not
// //naive approach
// bool isSorted(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[]={2,8,3,7,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<isSorted(arr,n);
// }




// //in efficient way
// bool isSorted(int arr[],int n){
//     for(int i=1;i<n;i++){
//         if(arr[i]<arr[i-1]){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[]={12,34,54,78};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<isSorted(arr,n);
//     return 0;
// }








// //Reverse an array
// void reverse(int arr[],int n){
//     int low=0,high=n-1;
//     while(low<high){
//         int temp=arr[low];
//         arr[low]=arr[high];
//         arr[high]=temp;
//         // swap(arr[low],arr[high]);
//         low++;
//         high--;
//     }
// }
// int main(){
//     int arr[]={23,12,45,33,67};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     reverse(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }






// //Remove duplicates from an sorted array
// int remDups(int arr[],int n){
//     int temp[n];
//     temp[0]=arr[0];
//     int res=1;          //size of temporary array
//     for(int i=1;i<n;i++){
//         if(arr[i] != temp[res-1]){
//             temp[res]=arr[i];
//             res++;
//         }
//     }
//     for(int i=0;i<res;i++){
//         arr[i]=temp[i];
//     }
//     for(int i=0;i<res;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={10,20,20,30,30,30};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     remDups(arr,n);
// }





// //in efficient way(Same time complexity as before but require less auxillary space)
// int remDups(int arr[],int n){
//     int res=1;
//     for(int i=1;i<n;i++){
//         if(arr[i] != arr[res-1]){
//             arr[res]=arr[i];
//             res++;
//         }
//     }
//     for(int i=0;i<res;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={10,20,20,30,30,30};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     remDups(arr,n);
// }








// //Move Zeroes to the end of the array
// //Naive approach
// int moveToEnd(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             for(int j=i+1;j<n;j++){
//                 if(arr[j] != 0){
//                     swap(arr[i],arr[j]);
//                 }
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={8,5,0,10,0,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     moveToEnd(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }





// //in efficient way
// int moveToEnd(int arr[],int n){
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             swap(arr[i],arr[count]);
//             count++;
//         }
//     }
// }
// int main(){
//     int arr[]={8,5,0,10,0,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     moveToEnd(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }








// //Left rotate an array by one
// int lefrot(int arr[],int n){
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     lefrot(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




// //my approach
// int lefrot(int arr[],int n){
//     for(int i=1;i<n;i++){
//         swap(arr[i],arr[i-1]);
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     lefrot(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }







// //Left rotate an array by d places
// //1st solution(timecomplexity:theta(nd),Auxilary space:theta(1))   
// int lefrot(int arr[],int n){
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
// }
// void leftRot(int arr[],int n,int d){
//     for(int i=0;i<d;i++){
//         lefrot(arr,n);
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int d=2;
//     leftRot(arr,n,d);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }.



// //2nd solution(timecomplexity:theta(n),Auxilary space:theta(d))
// void leftRot(int arr[],int n,int d){
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     for(int i=0;i<d;i++){
//         arr[n-d+i]=temp[i];
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int d=2;
//     leftRot(arr,n,d);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }




// //3rd solution(timecomplexity:theta(n),Auxilary space:theta(1))
// void reverse(int arr[],int low,int high){
//     while(low<high){
//         swap(arr[low],arr[high]);
//         low++;
//         high--;
//     }
// }
// void leftRot(int arr[],int n,int d){
//     reverse(arr,0,d-1);
//     reverse(arr,d,n-1);
//     reverse(arr,0,n-1);
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int d=2;
//     leftRot(arr,n,d);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }








// //Leader in an array
// //An element is called as an leader if there is nothing greater than on right side of it.
// //1st solution(theta(n^2))
// void leader(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool flag = true;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>=arr[i]){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag == true){
//                 cout<<arr[i]<<" ";
//             }
//     }
// }
// int main(){
//     int arr[]={7,10,4,10,6,5,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     leader(arr,n);
// }





// //in efficient way(theta(n))
// void leader(int arr[],int n){
//     int curr_lead=arr[n-1];
//     cout<<curr_lead<<" ";
//     for(int i=n-2;i>=0;i--){
//         if(arr[i]>curr_lead){
//             curr_lead=arr[i];
//             cout<<curr_lead<<" ";
//         }
//     }
// }
// int main(){
//     int arr[]={7,10,4,10,6,5,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     leader(arr,n);
// }










// //maximum difference problem
// //naive approach(O(n^2))
// int max_diff(int arr[],int n){
//     int max=arr[1]-arr[0];
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]-arr[i] > max){
//                 max=arr[j]-arr[i];
//             }
//         }
//     }
//     return max;
// }
// int main(){
//     int arr[]={2,3,10,6,4,8,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<max_diff(arr,n);
// }




// //in efficient way(theta(n),auxspace=theta(1))
// int max_diff(int arr[],int n){
//     int res=arr[1]-arr[0];
//     int minVal=arr[0];
//     for(int j=1;j<n;j++){
//         res=max(res,arr[j]-minVal);
//         minVal=min(minVal,arr[j]);
//     }
//     return res;
// }
// int main(){
//     int arr[]={2,3,10,6,4,8,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<max_diff(arr,n);
// }








// //Find frequencies of number in a sorted array(theta(n))
// void frequency(int arr[],int n){
//     int freq=1,i=1;
//     while(i<n){
//         while(i<n && arr[i]==arr[i-1]){
//             freq++;
//             i++;
//         }
//         cout<<arr[i-1]<<" : "<<freq<<endl;
//         i++;
//         freq=1;
//     }
//     if(n==1 || arr[n-2] != arr[n-1]){
//         cout<<arr[n-1]<<" : "<<1<<endl;
//     }
// }

// int main(){
//     int arr[]={10,10,10,25,30,30};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     frequency(arr,n);
// }
