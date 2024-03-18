#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int> v;

//     cout<<"size is : "<<v.size() <<endl;
//     cout<<"capacity is : "<<v.capacity() <<endl;

//     v.push_back(1);                         //adding an element(v.push_back(element))
//     cout<<"size is : "<<v.size() <<endl;
//     cout<<"capacity is : "<<v.capacity() <<endl;

//     v.push_back(2);
//     cout<<"size is : "<<v.size() <<endl;
//     cout<<"capacity is : "<<v.capacity() <<endl;

//     v.push_back(3);
//     cout<<"size is : "<<v.size() <<endl;
//     cout<<"capacity is : "<<v.capacity() <<endl;

//     v.resize(5);
//     cout<<"size is : "<<v.size() <<endl;
//     cout<<"capacity is : "<<v.capacity() <<endl;

//     v.resize(9);
//     cout<<"size is : "<<v.size() <<endl;
//     cout<<"capacity is : "<<v.capacity() <<endl;

//     v.pop_back();                          //size decreases by 1
//     v.pop_back();
//     cout<<"size is : "<<v.size() <<endl;
//     cout<<"capacity is : "<<v.capacity() <<endl;


//     return 0;
// }




// //printing numbers
// int main(){
//     vector<int> v(5);

//     //input
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }

//     //output
//     for(int i=0;i<v.size();i++){
//         cout<<v[i] <<endl;
//     }

//     //output using for each loop
//     for(int ele:v){
//         cout<<ele <<endl;
//     }
// }




// //insert a number & erase a number
// int main(){
//     vector<int> v(5);

//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }

//     for(int i=0;i<v.size();i++){
//         cout<<v[i] <<endl;
//     }

//     v.insert(v.begin()+2,18);    //v.begin()+2 defines the position at which number will be inserted
//     for(int ele:v){
//         cout<<ele <<" ";
//     }
//     cout<<endl;

//     v.erase(v.end()-3);           //v.end()-3 defines the position at which number will be erased
//     for(int ele:v){
//         cout<<ele <<" ";
//     }

// }





// //Find the last occurence of an element x in a given array
// int main(){
//     vector<int> v(8);

//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }
    
//     int n;
//     cout<<"Enter an element x : ";
//     cin>>n;
//     int position;
//     for(int i=0;i<8;i++){
//         if(v[i] == n){
//             position = i+1;
//         }
//     }
//     cout<<"last ocuurence  is : "<<position;

// } 





// //count the number of occurences of a particular element x.
// int main(){
//     vector<int> v(8);

//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }

//     int n;
//     cout<<"Enter element : ";
//     cin>>n;
//     int count=0;
//     for(int ele:v){           //using for each loop
//         if(ele == n){
//             count++;
//         }
//     }
//     cout<<"No. of occurence is : "<<count;
// }





// //count the number of elements strictly greater than value x
// int main(){
//     vector<int> v(8);

//     for(int i=0;i<v.size();i++){
//         cin>>v[i];
//     }

//     int n;
//     cout<<"Enter element : ";
//     cin>>n;
//     int count=0;
//     for(int ele:v){
//         if(ele > n){
//             count++;
//         }
//     }
//     cout<<"Number of elements greater than n is : "<<count;
// }





// //Check if the given array is sorted(ascending order) or not
// int main(){
//     int array[] = {1,2,7,4,5};

//     bool sorted = true; 
//     for(int i=1;i<5;i++){
//         if(array[i] <= array[i-1]){
//             sorted = false;
//         }
//     }
//     cout<<sorted;
// }





//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
// int main(){
//     vector<int> v(6);

//     for(int i=0;i<6;i++){
//         cin>>v[i];
//     }

//     int even_sum=0;
//     int odd_sum=0;
//     for(int i=0;i<6;i++){
//         if(i % 2 == 0){
//             even_sum += v[i];
//         }else if(i % 2 != 0){
//             odd_sum += v[i];
//         }
//     }
//     cout<<even_sum - odd_sum;




    // //in another way
    // int ans_sum=0;
    // for(int i=0;i<6;i++){
    //     if(i % 2 == 0){
    //         ans_sum += v[i];
    //     }else if(i % 2 != 0){
    //        ans_sum -= v[i];
    //     }
    // }
    // cout<<ans_sum;

// }