#include<iostream>
#include<vector>
#include<string.h>
#include <climits> // Include the header for INT_MIN
using namespace std;

// //Bubble sort algorithm(repeatedly swap two adjacent elements if in wrong order)

// // Sorting an array using bubble sort algorithm
// void bubbleSort(vector<int> &v){
//     int n = v.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(v[j] > v[j+1]){
//                 swap(v[j],v[j+1]);
//             }
//         }
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     bubbleSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<endl;
//     }
// }




// //Optimize the bubble sort in the case of nearly sorted arrays
// void bubbleSort(vector<int> &v){
//     int n = v.size();
//     for(int i=0;i<n-1;i++){
//         bool flag = false;
//         for(int j=0;j<n-1-i;j++){
//             if(v[j] > v[j+1]){
//                 flag = true;
//                 swap(v[j],v[j+1]);
//             }
//         }
//         if(!flag) break;
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     bubbleSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<endl;
//     }
// }







// //Selection sort Algorithm(repeatedly find minimum element in a unsorted array & place it at begining)

// //sort an array using selection sort algorithm
// void selectionSort(vector <int> &v){
//     int n = v.size();
//     for(int i=0;i<n-1;i++){

//         //finding min. element in unsorted array
//         int min_idx = i;
//         for(int j=i+1;j<n;j++){
//             if(v[j]<v[min_idx]){
//                 min_idx = j;
//             }
//         }
//         //placing min. element at begining
//         if(min_idx != i){
//             swap(v[i],v[min_idx]);
//         }
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     selectionSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }







// //Insertion sort Algorithm(Repeatedly take elements from unsorted subarray & insert in sorted subarray)

// //Sort an array using insertion sort algorithm 
// void insertionSort(vector<int> &v){
//     int n=v.size();
//     for(int i=1;i<n;i++){
//         int current_ele = v[i];

//         //Find the correct position for our current element
//         int j=i-1;
//         while(j>=0 && v[j] > current_ele){
//             v[j+1] = v[j];                            //movement of one step forward
//             j--;
//         }
//         //insert current element
//         v[j+1] = current_ele;
//     }
//     return ;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     insertionSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }

 




//Problems

// //Input : 0 5 0 3 42   & output : 5 3 42 0 0 (sort the array without making a copy of the array)
// void ZeroesSort(vector<int> &v){
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(v[j] == 0 && v[j+1] != 0){
//                swap(v[j],v[j+1]);
//             }
//         }
//     }
//     return;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     ZeroesSort(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
// }





// //Given an array of fruits & sort it in lexicographical order using selection sort
// void selectionSort(char fruit[][60],int n){
//     for(int i=0;i<n-1;i++){

//         int min_idx = i;
//         for(int j=i+1;j<n;j++){
//             if(strcmp(fruit[min_idx],fruit[j]) > 0){
//                 //strcmp() is used to compare two string in lexicographical order
//                 min_idx = j;
//             }
//         }
//         if(i != min_idx){
//             swap(fruit[i],fruit[min_idx]);
//         }
//     }
//     return;
// }
// int main(){
//     char fruit[][60] = {"papaya","lime","watermelon","apple","mango","kiwi"};
//     int n = sizeof(fruit)/sizeof(fruit[0]);

//     selectionSort(fruit,n);
//     for(int i=0;i<n;i++){
//         cout<<fruit[i]<<" ";
//     }
// }







// //Merge sort algorithm(uses recurssion concept)     
// //It uses Divide and Conquer rule i.e. Divide problem into subproblems,Conquer(solve) the subproblems then combine solutions to get final output

// void merge(int arr[],int l,int mid,int r){
//     int n1 = mid-l+1;
//     int n2 = r-mid;

//     int a[n1];
//     int b[n2];       //temporary array
//     for(int i=0;i<n1;i++){
//         a[i] = arr[l+i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i] = arr[mid+1+i];
//     }

//     int i=0;
//     int j=0;
//     int k=l;
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//             arr[k] = a[i];
//             k++; i++;
//         }
//         else{
//             arr[k] = b[j];
//             k++; j++;
//         }
//     }
//     while(i<n1){
//         arr[k] = a[i];
//         k++; i++;
//     }
//     while(j<n2){
//         arr[k] = b[j];
//         k++; j++;
//     }
// }

// void mergeSort(int arr[],int l,int r){
    
//     if(l<r){
//         int mid = (l+r)/2;
//         mergeSort(arr,l,mid);
//         mergeSort(arr,mid+1,r);

//         merge(arr,l,mid,r);
//     }
// }
// int main(){
//     int arr[] = {5,14,9,12,11};
//     mergeSort(arr,0,4);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }









//Quick Sort Algorithm
//It uses Divide and Conquer rule i.e. Divide problem into subproblems,Conquer(solve) the subproblems then combine solutions to get final output



// //Partition Algorithm
// void partition(int arr[],int n ){
//     int pivot = arr[n-1];
//     int i=0,j=0;
//     while(i<n-1 && j<n-1){
//         if(arr[j] < pivot){
//             swap(arr[i],arr[j]);
//             i++;
//         }
//         j++;
//     }
//     swap(arr[i],arr[n-1]);
// }
// int main(){
//     int arr[] = {10,3,9,7,1,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     partition(arr,n);
//     for(int x: arr){
//         cout<<x<<" ";
//     }
// }







// //Quick Sort Algorithm(using partition alg.)
// //Partition Algorithm
// int partition(int arr[],int first,int last){
//     int pivot = arr[last];
//     int i=first-1;          //for inserting elements less than pivot
//     int j=first;            //for finding elements less than pivot

//     for(;j<last;j++){
//         if(arr[j] < pivot){
//             i++;
//             swap(arr[j],arr[i]);
//         }
//     }
//     //now i is pointing to the last element less than pivot
//     //so correct position for pivot will be i+1;
//     swap(arr[i+1],arr[last]);
//     return i+1;
// }
// void quickSort(int arr[],int first,int last){
//     if(first<last){
//         int pi = partition(arr,first,last);
//         quickSort(arr,first,pi-1);
//         quickSort(arr,pi+1,last);
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


// //In built sorting functions use Quick Sort Algorithm








// //Count sort algorithm
// //Time complexity=O(n),space complexity = O(n+k)
// void countSort(vector<int> &v){
//     int n = v.size();

//     //find the max element
//     int max_ele = INT_MIN;
//     for(int i=0;i<n;i++){
//         max_ele = max(v[i],max_ele);
//     }

//     //create the frequency array
//     vector<int> freq(max_ele+1,0);
//     for(int i=0;i<n;i++){
//         freq[v[i]]++;
//     }

//     //calculate cumulative frequency
//     for(int i=1;i<=max_ele;i++){
//         freq[i]+=freq[i-1];
//     }

//     //calculate the sorted array
//     vector<int> ans(n);
//     for(int i=n-1;i>=0;i--){
//         ans[--freq[v[i]]] = v[i];
//     }

//     //copy back the ans array to original array
//     for(int i=0;i<n;i++){
//         v[i] = ans[i];
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> a(n);

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     countSort(a);

//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }cout<<endl;
// }



// // Certainly! Let's dry run the countSort function step by step with an example:

// Consider the input vector: v = [2, 4, 1, 3, 4, 2, 5]

// Initialization:

// n = 7 (size of input vector v)
// max_ele = INT_MIN
// Find the maximum element:
// Iterate through the vector and update max_ele:
// max_ele = max(2, INT_MIN) = 2
// max_ele = max(4, 2) = 4
// max_ele = max(1, 4) = 4
// max_ele = max(3, 4) = 4
// max_ele = max(4, 4) = 4
// max_ele = max(2, 4) = 4
// max_ele = max(5, 4) = 5
// max_ele = 5
// Create Frequency Array:

// Create a frequency array freq of size max_ele + 1 initialized with zeros: freq[6] = {0, 0, 0, 0, 0, 0}
// Count the frequency of each element in the input vector:
// Iterate through the vector v:
// Increment frequencies in freq array:
// freq[2] = 2
// freq[4] = 3
// freq[1] = 1
// freq[3] = 1
// freq[5] = 1
// Calculate Cumulative Frequency:

// Calculate cumulative frequency:
// Starting from index 1 to max_ele:
// freq[1] += freq[0] = 1
// freq[2] += freq[1] = 3
// freq[3] += freq[2] = 4
// freq[4] += freq[3] = 7
// freq[5] += freq[4] = 8
// Calculate Sorted Array (ans):

// Initialize an empty array ans of size n (7 elements).
// Iterate backward through the input vector v:
// Decrement frequencies in freq and place elements in ans:
// ans[--freq[v[6]]] = v[6] = ans[7-1] = 5
// ans[--freq[v[5]]] = v[5] = ans[8-1] = 2
// ans[--freq[v[4]]] = v[4] = ans[7-1] = 4
// ans[--freq[v[3]]] = v[3] = ans[4-1] = 4
// ans[--freq[v[2]]] = v[2] = ans[3-1] = 3
// ans[--freq[v[1]]] = v[1] = ans[3-1] = 2
// ans[--freq[v[0]]] = v[0] = ans[2-1] = 1
// After this step, ans becomes [1, 2, 2, 3, 4, 4, 5].

// Copy Back to Original Array (v):

// Copy elements from ans back to the original vector v:
// v[0] = ans[0] = 1
// v[1] = ans[1] = 2
// v[2] = ans[2] = 2
// v[3] = ans[3] = 3
// v[4] = ans[4] = 4
// v[5] = ans[5] = 4
// v[6] = ans[6] = 5
// The final sorted vector v after count sort: [1, 2, 2, 3, 4, 4, 5]
// source: chatgpt









//Radix sort Algorithm
//Time complexity=O(d*n),space complexity = O(n)
void countSort(vector<int> &v,int pos){
    int n = v.size();

    //create the frequency array
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }

    //calculate cumulative frequency
    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }

    //calculate the sorted array
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[(v[i]/pos)%10]] = v[i];
    }

    //copy back the ans array to original array
    for(int i=0;i<n;i++){
        v[i] = ans[i];
    }
}

void radixSort(vector<int> &v){
    int max_ele = INT_MIN;
    for(auto x:v){
        max_ele = max(x,max_ele);
    }

    for(int pos=1;max_ele/pos > 0;pos+=10){
        countSort(v,pos);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    radixSort(a);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}