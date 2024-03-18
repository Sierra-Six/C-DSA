#include<iostream>
#include<vector>
using namespace std;

// //sort an array consisting of only 0s and 1s
// int main(){
//     int array[7];
//     for(int i=0;i<7;i++){
//         cin>>array[i];
//     }
//     int count_zero = 0;
//     for(int i=0;i<7;i++){
//         if(array[i]==0){
//             count_zero++;
//         }
//     }
//     for(int i=0;i<7;i++){
//         if(i<count_zero){
//             array[i]=0;
//         }else
//         array[i]=1;
//     }
//     for(int i=0;i<7;i++){
//         cout<<array[i] <<" ";
//     }
// }




// //in another way(using two pointer)
void sortZerosAndOnes(vector<int> &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr < right_ptr){
        if(v[left_ptr]==1 && v[right_ptr]==0){
            v[left_ptr]=0;
            v[right_ptr]=1;
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
        int ele;cin>>ele;
        v.push_back(ele);
    }

    sortZerosAndOnes(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}





// //sort an array consisting of even and odd numbers(even at the beginning of array followed by odd numbers)
// void sortEvenAndOdd(vector<int> &v){
//     int i=0;
//     int j=v.size()-1;

//     while(i<j){
//         if(v[i]%2 !=0 && v[j]%2 ==0){
//             swap(v[i],v[j]);
//             i++; j--;
//         }
//         if(v[i]%2 == 0){
//             i++;
//         }
//         if(v[j]%2 != 0){
//             j--;
//         }
//     }
//     return;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;cin>>ele;
//         v.push_back(ele);
//     }

//     sortEvenAndOdd(v);
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;

// }





/*Given an integer array sorted in non-decreasing order,return an array 
of the squares of each number sorted in non-decreasing order*/
// void sortedSquareArray(vector<int> &v){

//     vector<int> ans;

//     int left_ptr=0;
//     int right_ptr=v.size()-1;

//     while(left_ptr<=right_ptr){
//         if(abs(v[left_ptr]) < abs(v[right_ptr])){
//             ans.push_back(v[right_ptr]*v[right_ptr]);
//             right_ptr--;
//         }else{
//         ans.push_back(v[left_ptr]*v[left_ptr]);
//         left_ptr++;
//         }
//     }
    
//     for(int i=0;i<v.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;cin>>ele;
//         v.push_back(ele);
//     }

//     sortedSquareArray(v);
// }