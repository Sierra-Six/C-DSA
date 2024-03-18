#include<iostream>
using namespace std;


// //Binary search(iterative)
// int bSearch(int arr[],int n,int x){
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid] == x){
//             return mid;
//         }
//         else if(arr[mid]>x){
//             high = mid-1;
//         }else{
//             low = mid +1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x =20;
//     cout<<bSearch(arr,n,x);
// }






// //Binary search(Recursive)
// int bSearch(int arr[],int low,int high,int x){
    
//     if(low>high) return -1;

//     int mid = (low+high)/2;
//     if(arr[mid] == x){
//         return mid;
//     }
//     else if(arr[mid] > x){
//         return bSearch(arr,low,mid-1,x);
//     }
//     else{
//         return bSearch(arr,mid+1,high,x);
//     }
// }
// int main(){
//     int arr[]={10,20,30,40,50,60};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x=20;
//     cout<<bSearch(arr,0,n-1,x);
// }


//Iterative solution is better than recursive soluton(uses some extra space)






// //Find index of first occurence
// //Naive approach(O(n) time,O(1) space)
// int firstOccurence(int arr[],int n,int x){
//     for(int i=0;i<n;i++){
//         if(arr[i] == x){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={5,10,10,15,15};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x = 15;
//     cout<<firstOccurence(arr,n,x);
// }





// //Binary recursive solution
// int firstOcc(int arr[],int low,int high,int x){
//     if(low>high) return -1;
//     int mid = (low+high)/2;
//     if(x > arr[mid]){
//         return firstOcc(arr,mid+1,high,x);
//     }
//     else if(x <arr[mid]){
//         return firstOcc(arr,low,mid-1,x);
//     }else{
//         if( mid == 0 || arr[mid-1] != arr[mid]){
//             return mid;
//         }else{
//             return firstOcc(arr,low,mid-1,x);
//         }
//     }
// }
// int main(){
//     int arr[]={5,10,10,15,20,20,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x=20;
//     cout<<firstOcc(arr,0,n-1,x);
// }






// //Binary iterative solution(Best solution than above two)
// int firstOcc(int arr[],int low,int high,int x){

//     while(low<=high){
//     int mid = (low+high)/2;
//     if(x > arr[mid]){
//         low = mid+1;
//     }
//     else if(x <arr[mid]){
//         high = mid-1;
//     }else{
//         if( mid == 0 || arr[mid-1] != arr[mid]){
//             return mid;
//         }else{
//             high = mid-1;
//         }
//     }
//   }
//     return -1; 
// }
// int main(){
//     int arr[]={5,10,10,20,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x=10;
//     cout<<firstOcc(arr,0,n-1,x);
// }




// //My recursive code for first occurence

// int bSearch(int arr[],int low,int high,int x){
//   if(low > high) return -1;
//   int mid=(low+high)/2;
  
//   if(arr[mid] == x){
//     if(arr[mid] == arr[mid-1]){
//       bSearch(arr,low,mid-1,x);
//     }else{
//       return mid;
//     }
//   }else if(arr[mid] > x){
//     return bSearch(arr,low,mid-1,x);
//   }else{
//     return bSearch(arr,mid+1,high,x);
//   }
// }
// int main(){
//     int arr[]={10,20,30,60,60,60,60,60,60,60};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x=30;
//     cout<<bSearch(arr,0,n-1,x);
// }





// // Find index of last occurence

// //Naive solution 1
// int lastOcc(int arr[],int n,int x){
//     int res = -1;
//     for(int i=0;i<n;i++){
//         if(arr[i] == x){
//             res = i;
//         }
//     }
//     return res;
// }
// int main(){
//     int arr[]={10,15,20,20,40,40};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x= 20;
//     cout<<lastOcc(arr,n,x);
//     return 0;
// }




// //Naive solution 2
// int lastOcc(int arr[],int n,int x){
//     for(int i=n-1;i>=0;i--){
//         if(arr[i] == x){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={10,15,20,20,40,40};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x= 20;
//     cout<<lastOcc(arr,n,x);
//     return 0;
// }





// //Binary recursive search
// int lastOcc(int arr[],int low,int high,int x,int n){

//     if(low > high) return -1;
//     int mid = (low+high)/2;
//     if(x > arr[mid]){
//         return firstOcc(arr,mid+1,high,x,n);
//     }
//     else if(x <arr[mid]){
//         return firstOcc(arr,low,mid-1,x,n);
//     }else{
//         if( mid == n-1 || arr[mid] != arr[mid+1]){
//             return mid;
//         }else{
//             return firstOcc(arr,mid+1,high,x,n);
//         }
//     }
// }
// int main(){
//     int arr[]={5,10,10,10,10,20,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x=10;
//     cout<<lastOcc(arr,0,n-1,x,n);
// }








// //Binary iterative solution(Best solution than above two)
// int lastOcc(int arr[],int low,int high,int x,int n){

//     while(low<=high){
//     int mid = (low+high)/2;
//     if(x > arr[mid]){
//         low = mid+1;
//     }
//     else if(x <arr[mid]){
//         high = mid-1;
//     }else{
//         if( mid == n-1 || arr[mid] != arr[mid+1]){
//             return mid;
//         }else{
//             low = mid+1;
//         }
//     }
//   }
//     return -1; 
// }
// int main(){
//     int arr[]={5,10,10,10,10,20,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x=10;
//     cout<<lastOcc(arr,0,n-1,x,n);
// }









// //Count occurences in a sorted array
// //Naive solution(O(n) time)
// int countOcc(int arr[],int n,int x){

//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] == x){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int arr[]={10,20,20,20,30,30};
//     int x=20;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<countOcc(arr,n,x);
//     return 0;
// }






// //in a efficient way(O(logn) time)
// int firstOcc(int arr[],int low,int high,int x){

//     while(low<=high){
//     int mid = (low+high)/2;
//     if(x > arr[mid]){
//         low = mid+1;
//     }
//     else if(x <arr[mid]){
//         high = mid-1;
//     }else{
//         if( mid == 0 || arr[mid-1] != arr[mid]){
//             return mid;
//         }else{
//             high = mid-1;
//         }
//     }
//   }
//     return -1; 
// }
// int lastOcc(int arr[],int low,int high,int x,int n){

//     while(low<=high){
//     int mid = (low+high)/2;
//     if(x > arr[mid]){
//         low = mid+1;
//     }
//     else if(x <arr[mid]){
//         high = mid-1;
//     }else{
//         if( mid == n-1 || arr[mid] != arr[mid+1]){
//             return mid;
//         }else{
//             low = mid+1;
//         }
//     }
//   }
//     return -1; 
// }
// int countOcc(int arr[],int n,int x){
//     int first = firstOcc(arr,0,n-1,x);
//     if(first == -1){
//         return -1;
//     }else{
//         return (lastOcc(arr,0,n-1,x,n) - first +1);
//     }
// }
// int main(){
//     int arr[]={10,20,20,20,40,40};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x=20;
//     cout<<countOcc(arr,n,x);
// }










// //Count 1s in a sorted binary array
// //Naive solution
// int countOne(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1){
//             count ++;
//         }
//     }
//     return count;
// }
// int main(){
//     int arr[]={0,0,0,1,1,1,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<countOne(arr,n);
// }




// //in efficient way(same way like binary search)(O(logn) time,O(1) space)
// int countOne(int arr[],int low,int high,int x,int n){

//     while(low<=high){
//     int mid = (low+high)/2;
//     if(arr[mid] == 0){
//         low = mid+1;
//     }else{
//         if( mid == 0 || arr[mid-1] == 0){
//             return (n-mid);
//         }else{
//             high = mid-1;
//         }
//     }
//   }
//     return 0; 
// }
// int main(){
//     int arr[]={0,0,1,1,1,1};
//     int x = 1;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<countOne(arr,0,n-1,x,n);

// }









// //Find square root(floor value) of a given number
// int sqRootFloor(int x){
//     int i=1;
//     while(i*i <= x){
//         i++;
//     }
//     return i-1;
// }
// int main(){
//     int x = 19;
//     cout<<sqRootFloor(x);
// }







// //in efficient way(using binary search)
// int sqRootFloor(int x){
//     int low=1,high=x,ans=-1;
    
//     int mid = (low+high)/2;
//     while(low<=high){
//         int mSq=mid*mid;                                //mSq=middle square
//         if(mSq == x){
//             return mid;
//         }
//         else if(mSq>x){
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//             ans = mid;
//         }
//     }
//     return ans;
// }
// int main(){
//     int x = 20;
//     cout<<sqRootFloor(x);
//     return 0;
// }


// //The above code is not working










// // Search an number(index) in an infinite  sorted array
// //naive solution(solution must avoid infinite time iteration)
// int search(int arr[],int x){
//     int i = 0;
//     while(true){
//         if(arr[i] == x) return i;
//         if(arr[i] > x) return -1;
//         i++;
//     }
// }
// int main(){
//     int arr[]={2,5,7,8,7,11,77,99};
//     int x=7;
//     cout<<search(arr,x);
// }





// //in efficient way using binarysearch(O(log(position)))
// int binarySearch(int arr[],int low,int high,int x){

//     while(low<=high){
//     int mid = (low+high)/2;
//     if(x > arr[mid]){
//         low = mid+1;
//     }
//     else if(x <arr[mid]){
//         high = mid-1;
//     }else{
//         if( mid == 0 || arr[mid-1] != arr[mid]){
//             return mid;
//         }else{
//             high = mid-1;
//         }
//     }
//   }
//     return -1; 
// }
// int Search(int arr[],int x){
//     if(arr[0] == x) return 0;
//     int i = 1;
//     while(arr[i]<x){
//         i = i*2;
//     }
//     if(arr[i] == x){
//         return i;
//     }else{
//         return binarySearch(arr,(i/2)+1,i-1,x);
//     }
// }
// int main(){
//     int arr[]={1,10,15,20,40,60,80,100,200,500,1000};   //considered this an infinite array
//     int x = 80;
//     cout<<Search(arr,x);
// }