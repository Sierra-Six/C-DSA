//Set is an STL container used to store unique values
//values are stored in ordered state (increasing or decreasing)
//Bydefault values are stored in increasing order
//No indexing,elements are identified by their own value
//once value is inserted in a set,it can't be modified.
//dynamic size, so no overflowing errors.
//Relatively faster as insertion,deletion and search operations have only O(logn) time complexity

//Disadavantages
//can't access element using indexing
//More memory than array
//Not suitable for large datasets



#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

// int main(){

    // set<int> set1;
    // // set<int, greater<int>> set1;   //for descending order

//     set1.insert(1);
//     set1.insert(2);
//     set1.insert(3);
//     set1.insert(3);    //duplicate value doesn't store
//     set1.insert(4);
//     set1.insert(5);


//     // set1.erase(5);

//     // auto itr = set1.begin();
//     // advance(itr,3);  //increasing position by 3 
//     // set1.erase(itr);

//     // auto start_itr = set1.begin();
//     // start_itr++;     //2
//     // auto end_itr = set1.begin();
//     // advance(end_itr,3);  //4
//     // set1.erase(start_itr,end_itr);


//     cout<<set1.size()<<endl;

//     // //traversing a set
//     // set<int>::iterator itr;
//     // for(itr = set1.begin();itr!=set1.end();itr++){
//     //     cout<<*itr<<" ";    //itr holds position of value so to print the value *itr is used.
//     // }cout<<endl;

//     for(auto value: set1){
//         cout<<value<<" ";
//     }cout<<endl;


//     //search operation
//     if(set1.find(4) != set1.end()){
//         cout<<"Value is present"<<endl;
//     }else{
//         cout<<"Value is not present"<<endl;
//     }

//     return 0;
// }


// //member functions of a set container
// //size(),max_size(),empty(),clear(),find(),count(),lower_bound(),upper_bound(),begin(),end(),rbegin(),rend()








// //Make a birthday invitelist of friends

// int main(){

//     set<string> inviteList;
    
//     int n;   //total no. of friends
//     cin>>n;

//     while (n--)
//     {
//         string name;
//         cin>>name;

//         inviteList.insert(name);
//     }

//     cout<<"Printing Invitelist : "<<endl;
//     for (auto name: inviteList)
//     {
//         cout<<name<<" ";
//     }cout<<endl;

//     return 0;
    
// }









// //Given 2 vectors v1 and v2. Find out the common elements between the two and return the sum of them
// //Input: v1={1,1,2,3,3,3}, v2={5,6,7,5,2,3,6}    output: 5

// int main(){
//     int n,m;
//     cin>>n>>m;

//     vector<int> v1(n);
//     vector<int> v2(m);

//     cout<<"Enter elements of v1: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>v1[i];
//     }

//     cout<<"Enter elements of v2: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>v2[i];
//     }

//     int ans_sum = 0;
//     set<int> s1;
//     for(auto ele: v1){
//         s1.insert(ele);
//     }

//     for(auto ele: v2){
//         if(s1.find(ele) != s1.end()){
//             ans_sum+=ele;
//         }
//     }

//     cout<<"Ans is : "<<ans_sum<<endl;

//     return 0;
// }








// //Given a string. You have to check if it has all english alphabets from a-z.
// //Input: abcdefghijklmnopqrstuvWXYZ   output: yes. Input2: Physicswallah    output: No.

// bool checkAllAlphabets(string str){

//     if(str.length() < 26) return false;

//     transform(str.begin(),str.end(),str.begin(),::tolower);

//     set<char> alphabets;
//     for(auto ch: str){
//         alphabets.insert(ch);
//     }

//     // if(alphabets.size() == 26){
//     //     return true;
//     // }
//     // else{
//     //     return false;
//     // }

//     return (alphabets.size() == 26);
// }

// int main(){
//     string str;
//     cin>>str;

//     if(checkAllAlphabets(str)){
//         cout<<"Yes"<<endl;
//     }else{
//         cout<<"No"<<endl;
//     }

//     return 0;
// }













//                                                   Unordered set

#include<unordered_set>


//values are stored in unordered fashion
//Unique values,values will be identified by itself, values cannot be modified inside set
//Average time complexity of insertion,deletion & search operations is O(1)  (It is possible using hashing)




// int main(){

//     unordered_set<int> s1;
    
//     s1.insert(3);
//     s1.insert(1);
//     s1.insert(2);
//     s1.insert(1);

//     for(auto ele: s1){
//         cout<<ele<<" ";
//     }cout<<endl;

//     return 0;
// }

// //member functions of unordered_set other than ormal set
// //load_factor() -> size of unordered set/bucket_count
// //rehash(x) ->sets the no. of buckets to x or more.









//                                   Multiset

//It can store Duplicate values.
//all other properties are same as set.



// int main(){

//     multiset<int> ms;
//     // multiset<int, greater<int>> ms;    //for descending order

//     ms.insert(1);
//     ms.insert(3);
//     ms.insert(4);
//     ms.insert(3);
//     ms.insert(2);

//     for(auto value: ms){
//         cout<<value<<" ";
//     }cout<<endl;

//     return 0;
// }

// //Member funcions of multiset
// //insert(),erase(),find(),count(),lower_bound(),upper_bound()









//                         unordered_multiset

//allows duplicate values
//values are not ordered
//values will be identified by itself, values cannot be modified



// int main(){

//     unordered_multiset<int> ms1;

//     ms1.insert(4);
//     ms1.insert(8);
//     ms1.insert(3);
//     ms1.insert(1);
//     ms1.insert(4);

//     for(auto value: ms1){
//         cout<<value<<" ";
//     }cout<<endl;

//     return 0;
// }

// //Member funcions of multiset
// //insert(),erase(),find(),count(),lower_bound(),upper_bound()









//Questions

// //Given n integers(can be duplicates),print the second smallest integer.If it does not exist,print -1.
// //Input1: n=4, 1 2 2 -4   outout1: 1      Input2: n=5, 1 2 3 1 1    output2: 2

// int main(){
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }

//     set<int> s;
//     for(auto value: v){
//         s.insert(value);
//     }
//     auto start_itr = s.begin();
//     start_itr++;

//     cout<<"Second smallest number: "<<*start_itr<<endl;

//     return 0;

// }







//Given the no. of questions as n, and marks for the correct answer as p and q marks for the incorrect answer.One can either attempt to solve the question in an examination and get either p marks if the answer is right, or q marks if the answer is wrong, or leave the question anattended and get 0 marks. The task is to find the count of all the different possible marks that one can score in the examination

//Input: n=2,p=1,q=-1   output: 5   
//Explaination: The diferent possible marks are: -2,-1,0,1,2
//Time: O(n^2), space:O(n)


int main(){

    int n,p,q;
    cin>>n>>p>>q;

    unordered_set<int> s;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){

            int correct = i;
            int incorrect = j;
            int unattended = n-(i+j);

            if(unattended >= 0){
                int score = correct*p + incorrect*q;
                s.insert(score);
            }else{
                break;
            }
        }
    }

    // for(auto ele: s){
    //     cout<<ele<<" "<<endl;
    // }
    cout<<"Ans: "<<s.size()<<endl;

    return 0;
}