#include <iostream>
#include <vector>
using namespace std;

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
















// int searchNum(int arr[],int x,int n){
//   for(int i=0;i<n;i++){
//     if(arr[i] == x){
//       return 1;
//     }
//   }
//   return -1;
// }

// int main() {
//   int arr[] = {2,4,6,8,9};
//   for(int i=0;i<10;i++){
//     int x;
//     cout<<"Enter num: ";
//     cin>>x;
//     int n = sizeof(arr)/sizeof(arr[0]);

//      cout<<searchNum(arr,x,n)<<endl;
//   }

// }


// int findLargest(int arr[],int n){
//   int idx = 0;
//   for(int i=1;i<n;i++) {
//     if(arr[i] > arr[idx]){
//       idx = i;
//     }
//   }
//   return idx;
// }

// int secLar(int arr[],int n){
//   int idx2 = findLargest(arr,n);

//   int res = 0;
//   for(int i=1;i<n;i++){
//     if(arr[i] != arr[idx2]){
//       if(arr[i] > arr[res]){
//         res = i;
//       }
//     }
//   }
//   return res;
// }

// int main() {
//   int arr[] = {2,7,4,11,9,15};
//   int n = sizeof(arr)/sizeof(arr[0]);

//   cout<<"index of second largest number is: "<<secLar(arr,n);
// }

// void reverse(int arr[],int n){
//   // int mid = n/2;
//   // for(int i=0;i<=mid;i++){
//   //   swap(arr[i],arr[n-1-i]);
//   // }

//   int low = 0;
//   int high = n-1;
//   while(low<high){
//     // int temp = arr[low];
//     // arr[low ]= arr[high];
//     // arr[high] = temp;

//     swap(arr[low],arr[high]);
//     low++;
//     high--;
//   }
// }


// int main() {
//   int arr[] = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   reverse(arr,n);
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// }



// void remDups(int arr[],int n){
//   int temp[n];
//   temp[0] = arr[0];
//   int m = 1;
//   for(int i=1;i<n;i++){
//     if(arr[i] != temp[m-1]){
//       temp[m] = arr[i];
//       m++;
//     }
//   }
//   for(int i=0;i<m;i++){
//     cout<<temp[i] <<" ";
//   }
// }

// int main() {
//   int arr[] = {10,20,20,30,30,30};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   remDups(arr,n);
// }




// int moveToEnd(int arr[],int n){
//   for(int i=0;i<n;i++){
//     if(arr[i] == 0){
//       for(int j=i+1;j<n;j++){
//         if(arr[j] != 0){
//           swap(arr[i],arr[j]);
//         }
//       }
//     }
//   }
// }


// int main(){
//     int arr[]={8,5,0,10,0,20};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     moveToEnd(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



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



bool isPal(int n){
    int rev = 0;
    int temp = n;
    while(temp != 0){
        int x = temp%10;
        rev = rev*10 + x;
        temp = temp/10;
    }
    if(rev == n){
        return true;
    }
    return false;
}


int main() {
    int n;
    cin>>n;
    cout<<isPal(n);
}