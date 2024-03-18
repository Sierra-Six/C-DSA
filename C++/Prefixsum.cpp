#include<iostream>
#include<vector>
using namespace std;

/*Given an integers array 'a',return the prefix sum/running sum in the
same array without creating new array */
// int main(){
//     int array[] = {3,2,4,6,7};
//     int sum=0;
//     for(int i=1;i<5;i++){
//         array[i] = array[i-1] + array[i];
//     }
//     for(int i=0;i<5;i++){
//         cout<<array[i] <<" ";
//     }
// }



// //in another way(using vector)
// void runningSum(vector<int> &v){
//     for(int i=1;i<v.size();i++){
//         v[i] = v[i-1] + v[i];
//     }
// }
// int main(){
//     int n;
//     cin>>n;

//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
    
//     runningSum(v);

//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }





/* Check if we can partition the array into two subarrays with equal sum. more formally,check that
the prefix sum of a part of the array is equal to the suffix sum of rest of the array */
bool CheckPrefixSuffixsum(vector<int> &v){
    int total_sum=0;
    for(int i=0;i<v.size();i++){
        total_sum += v[i];
    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;

        if(suffix_sum == prefix_sum){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<CheckPrefixSuffixsum(v);
    
}