#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// //Sort in c++ STL
// int main(){
//   int arr[]={10,20,5,7};
//   int n = sizeof(arr)/sizeof(arr[0]);

//   sort(arr,arr+n);

//   for(int x : arr){
//     cout<<x<<" ";
//   }

//   sort(arr,arr+n,greater<int>());               //greater function is typically used to reverse the default order

//   cout<<endl;
//   for(int x: arr){
//     cout<<x<<" ";
//   }
// }





// //Using vector
// int main(){
//   vector<int> v={5,7,10,20};
//   sort(v.begin(),v.end());

//   for(int x: v){
//     cout<<x<<" ";
//   }
//   sort(v.begin(),v.end(),greater<int>());

//   cout<<endl;
//   for(int x: v){
//     cout<<x<<" ";
//   }
// }




//sort function uses introsort(Hybrid of Quick sort,Heap sort and Insertion sort)




// struct Point{
//   int x,y;
// };
// bool myComp(Point p1,Point p2){                //our own comparision function
//   // return p1.x < p2.x;
//   return p1.y < p2.y;
// }
// int main(){
//   Point arr[]={{3,10},{2,8},{5,4}};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   sort(arr,arr+n,myComp);

//   for(auto i: arr){
//     cout<<i.x<<" "<<i.y<<endl;
//   }
// }







//Bubble sort,Insertion sort,merge sort,.... are Stable sorts
//Selection sort,Quick sort,Heap sort,.... are Unstable sorts






//Bubble sort algorithm

// //Time complexity=theta(n^2)
// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     int arr[]={10,8,20,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     bubbleSort(arr,n);

//     for(int x: arr){
//         cout<<x<<" ";
//     }
// }




// //optimized implimentation
// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         bool swapped = false;
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if(swapped == false) break;
//     }
// }
// int main(){
//     int arr[]={10,8,20,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     bubbleSort(arr,n);

//     for(int x: arr){
//         cout<<x<<" ";
//     }
// }









// //Selection sort Algorithm(optimized and time complexity is theta(n^2))
// void selectionSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int min_idx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[min_idx]){
//                 min_idx=j;
//             }
//         }
//         if(min_idx != i){
//             swap(arr[min_idx],arr[i]);
//         }
//     }
// }
// int main(){
//     int arr[]={10,5,8,20,2,18};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     selectionSort(arr,n);

//     for(int x: arr){
//         cout<<x<<" ";
//     }
// }









// //Insertion Sort(used in practice for small arrays(TimSort and IntraSort))

// //Time complexity(worst case-theta(n^2) in case of reverse sorted arry like{30,20,10},Best Case-theta(n) in case of already sorted array as it will not go inside while loop and in general O(n^2))
// void selectionSort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int current_ele=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>current_ele){                  //here we took '>' insted of '>=' to keep the sort stable 
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = current_ele;
//     }
// }
// int main(){
//     int arr[]={20,5,40,60,10,30};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     selectionSort(arr,n);
//      for(int x: arr){
//         cout<<x<<" ";
//      }
// }









//Merge sort algorithm(uses recurssion concept)     
//It uses Divide and Conquer rule i.e. Divide problem into subproblems,Conquer(solve) the subproblems then combine solutions to get final output



//Merge two sorted arrays (to make one sorted array)

// //Naive solution(time complexity = O((m+n)*log(m+n)),Aux space = theta(m+n))
// void merge(int a[],int b[],int m,int n){
//     int c[m+n];               //A new array where two array will merge
//     for(int i=0;i<m;i++){
//         c[i] = a[i];
//     }
//     for(int i=0;i<n;i++){
//         c[m+i] = b[i];
//     }

//     sort(c,c+m+n);
//     for(int x: c){
//         cout<<x<<" ";
//     }
// }
// int main(){
//     int a[] = {10,15,20,20};
//     int m = sizeof(a)/sizeof(a[0]);
//     int b[] = {1,12};
//     int n = sizeof(b)/sizeof(b[0]);

//     merge(a,b,m,n);
// }





// //Efficient solution(Time complexity = theta(m+n),Aux. space = O(1))
// void merge(int a[],int b[],int m,int n){
//     int i=0,j=0;
//     while(i<m && j<n){
//         if(a[i] <= b[j]){          //'<=' is taken instead of '<' to maintain stability
//             cout<<a[i]<<" ";
//             i++;
//         }else{
//             cout<<b[j]<<" ";
//             j++;
//         }
//     }
//     while(i<m){
//         cout<<a[i]<<" "; i++;
//     }
//     while(j<n){
//         cout<<b[j]<<" "; j++;
//     }
// }
// int main(){
//     int a[] = {10,15,20,20};
//     int m = sizeof(a)/sizeof(a[0]);
//     int b[] = {1,12,20};
//     int n = sizeof(b)/sizeof(b[0]);

//     merge(a,b,m,n);
// }








// //Merge function of merge sort(Time complexity = theta(n),Aux. Space = theta(n))
// void merge(int arr[],int low,int mid,int high){
//     int n1 = mid-low+1;
//     int n2 = high-mid;
//     int left[n1], right[n2];

//     for(int i=0;i<n1;i++) {left[i] = arr[low+i];}
//     for(int i=0;i<n2;i++) {right[i] = arr[mid+1+i];}

//     int i=0,j=0,k=low;
//     while(i<n1 && j<n2){
//         if(left[i] <= right[j]) {arr[k] = left[i]; i++; k++;}
//         else{arr[k] = right[j]; j++; k++;}
//     }
//     while(i<n1) {arr[k] = left[i]; i++; k++;}
//     while(j<n2) {arr[k] = right[j]; j++; k++;}

// }
// int main(){
//     int arr[] = {10,15,20,40,8,11,55};
//     merge(arr,0,3,6);

//     for(int x: arr){
//         cout<<x<<" ";
//     }
// }







// //Merge sort Algorithm(Time complexity = theta(nlogn),Aux. Space = theta(n))
// void merge(int arr[],int low,int mid,int high){
//     int n1 = mid-low+1;
//     int n2 = high-mid;
//     int left[n1], right[n2];

//     for(int i=0;i<n1;i++) {left[i] = arr[low+i];}
//     for(int i=0;i<n2;i++) {right[i] = arr[mid+1+i];}

//     int i=0,j=0,k=low;
//     while(i<n1 && j<n2){
//         if(left[i] <= right[j]) {arr[k] = left[i]; i++; k++;}
//         else{arr[k] = right[j]; j++; k++;}
//     }
//     while(i<n1) {arr[k] = left[i]; i++; k++;}
//     while(j<n2) {arr[k] = right[j]; j++; k++;}

// }
// void mergeSort(int arr[],int l,int r){

//     if(r>l){          //At least two element must presence

//         int m=l+(r-l)/2;           //same as (l+r)/2
//         mergeSort(arr,l,m);
//         mergeSort(arr,m+1,r);
//         merge(arr,l,m,r);
//     }
// }
// int main(){
//     int arr[] = {10,15,20,40,8,11,55};
//     mergeSort(arr,0,6);

//     for(int x: arr){
//         cout<<x<<" ";
//     }
// }







//Quick Sort Algorithm


// //Lomuto Partition (Here last element always assumed as pivot element)(time comp.=O(n),extra space=O(1))
// int partition(int arr[],int l,int h){                //l=low,h=high
//     int pivot = arr[h];
//     int i=l-1;          //for inserting elements less than pivot
//     int j=l;            //for finding elements less than pivot

//     for(;j<h;j++){
//         if(arr[j] < pivot){
//             i++;
//             swap(arr[j],arr[i]);
//         }
//     }
//     //now i is pointing to the h element less than pivot
//     //so correct position for pivot will be i+1;
//     swap(arr[i+1],arr[h]);
//     return i+1;
// }
// int main(){
//     int arr[] = {10,3,9,7,1,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     partition(arr,0,n-1);
//     for(int x: arr){
//         cout<<x<<" ";
//     }
// }





// //Hoare Partition (Here first element always assumed as pivot element) (time comp.=O(n),extra space=O(1))
// //It works much better than Lomuto Partition
// int partition(int arr[],int l,int h){
//     int pivot = arr[l];
//     int i=l-1,j=h+1;
//     while(true){
//         do{
//             i++;                      //first increment occurs then condition is checked
//         }while(arr[i]<pivot);
//         do{
//             j--;                      //first decrement occurs then condition is checked
//         }while(arr[j]>pivot);
        
//         if(i >= j) return j;
//         swap(arr[i],arr[j]);
//     }
// }
// int main(){
//     int arr[]={5,3,8,4,2,7,1,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     partition(arr,0,n-1);

//     for(int x: arr){
//         cout<<x<<" ";
//     }
// }


//one problem in Hoare's partition is,it doesn't fix the position of pivot element(so here Lomuto seems better but in Hoare's partition there is less comparisions)
//Both Lomuto and Hoare partition is not stable as they swap positions of equal elements,but the Naive partition is stable.





// //Quick sort using Lomuto partition 
// int partition(int arr[],int l,int h){
//     int pivot = arr[h];
//     int i=l-1;                     

//     for(int j=l;j<h;j++){
//         if(arr[j] < pivot){
//             i++;
//             swap(arr[j],arr[i]);
//         }
//     }

//     swap(arr[i+1],arr[h]);
//     return i+1;
// }
// void quickSort(int arr[],int l,int h){              //l=low,h=high
//     if(l<h){
//         int pi = partition(arr,l,h);
//         quickSort(arr,l,pi-1);
//         quickSort(arr,pi+1,h);
//     }
// }
// int main(){
//     int arr[] = {10,3,9,7,1,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     quickSort(arr,0,n-1);
//     for(int x: arr){
//         cout<<x<<" ";
//     }
// }





//Quick sort using Hoares's partition
int partition(int arr[],int l,int h){
    int pivot = arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;                      //first increment occurs then condition is checked
        }while(arr[i]<pivot);
        do{
            j--;                      //first decrement occurs then condition is checked
        }while(arr[j]>pivot);
        
        if(i >= j) return j;
        swap(arr[i],arr[j]);
    }
}
void qSort(int arr[],int l,int h){
    if(l<h){
        int p = partition(arr,l,h);
        qSort(arr,l,p);
        qSort(arr,p+1,h);
    }
}
int main(){
    int arr[]={8,4,7,9,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    qSort(arr,0,n-1);

    for(int x: arr){
        cout<<x<<" ";
    }
}