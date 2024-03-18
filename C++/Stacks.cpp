#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// //Array implementation of stacks
// //Time complexity = O(1);

// class Stack{                    

//     int capacity;
//     int* arr;
//     int top;
// public:
//     Stack(int c){
//         this->capacity = c;
//         arr = new int[c];
//         this->top = -1;
//     }

//     void push(int data){

//         if(this->top == this->capacity - 1){
//             cout<<"Overflow\n";
//             return;
//         }
//         this->top++;
//         this->arr[this->top] = data;
//     }

//     void pop(){

//         if(this->top == -1){
//             cout<<"Underflow\n";
//             return;
//         }
//         this->top--;
//     }

//     int getTop(){

//         if(this->top == -1){
//             cout<<"Underflow\n";
//             return INT8_MIN;
//         }
//         return this->arr[this->top];
//     }

//     bool isEmpty(){

//         return this->top = -1;
//     }

//     int size(){

//         return this->top + 1;
//     }

//     bool isFull(){

//         return this->top == this->capacity - 1;
//     }
// };

// int main(){

//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout<<st.getTop()<<"\n";
//     st.push(4);
//     st.push(5);
//     cout<<st.getTop()<<"\n";
//     st.push(6);

//     st.pop();
//     st.pop();
//     cout<<st.getTop()<<endl;

//     return 0;
// }








// //LinkedList implementation of stack
// //Time complexity = O(1);

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int d){
//         this->val = d;
//         this->next = NULL;
//     }
// };

// class Stack{
//     Node* head;
//     int capacity;
//     int currSize;

// public:
//     Stack(int c){
//         this->capacity = c;
//         this->currSize = 0;
//         head = NULL;
//     }

//     bool isEmpty(){

//         return this->head == NULL;
//     }

//     bool isFull(){

//         return this->currSize == this->capacity;
//     }

//     void push(int data){

//         if(this->currSize == this->capacity){
//             cout<<"Overflow"<<endl;
//             return;
//         }
//         Node* new_node = new Node(data);
//         new_node->next = this->head;
//         this->head = new_node;
//         this->currSize++;
//     }

//     int pop(){

//         if(this->head == NULL){
//             cout<<"Underflow"<<endl;
//             return INT16_MIN;
//         }
//         Node* temp = head;
//         this->head = this->head->next;
//         free(temp);
//         this->currSize--;
//     }

//     int getTop(){

//         if(this->head == NULL){
//             cout<<"Underflow"<<endl;
//             return INT16_MIN;
//         }
//         return this->head->val;
//     }

//     int size(){

//         return this->currSize;
//     }
// };

// int main(){

//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout<<st.getTop()<<"\n";
//     st.push(4);
//     st.push(5);
//     cout<<st.getTop()<<"\n";
//     st.push(6);

//     st.pop();
//     st.pop();
//     cout<<st.getTop()<<endl;

//     return 0;
// }






//Internal stack implementation


#include<stack>


// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout<<st.top()<<"\n";
//     st.push(4);
//     st.push(5);
//     cout<<st.top()<<"\n";
//     st.push(6);

//     st.pop();
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.empty()<<endl;

//     return 0;
// }







// //Copy contents of one stack to another in same order (Copy stack)
// //Time complexity = O(n), space complexity = O(n)

// stack<int> copyStack(stack<int> &input){

//     stack<int> temp;
//     while(not input.empty()){
//         //do the process till input stack doesn't become empty
//         int curr = input.top();
//         input.pop();
//         temp.push(curr);
//     }

//     stack<int> result;
//     while(not temp.empty()){
//         //do the process till temp stack doesn't become empty
//         int curr = temp.top();
//         temp.pop();
//         result.push(curr);
//     }

//     return result;
// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     stack<int> res = copyStack(st);

//     while(not res.empty()){
//         int curr = res.top();
//         res.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }





// //in recursive way
// //Time complexity = O(n), space complexity = O(n)

// void copyStack(stack<int> &st, stack<int> &result){

//     if(st.empty()){
//         return;
//     }
//     int curr = st.top();
//     st.pop();
//     copyStack(st,result);
//     result.push(curr);

// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     stack<int> result;
//     copyStack(st,result);

//     while(not result.empty()){
//         int curr = result.top();
//         result.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }







// //Insert element at bottom  (iterative solution)

// //Time = O(n), space = O(n)

// void insertAtBottom(stack<int> &st, int val){

//     stack<int> temp;
//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         temp.push(curr);
//     }
//     st.push(val);   //this is the point where x got inserted at the bottom

//     while(not temp.empty()){
//         int curr = temp.top();
//         temp.pop();
//         st.push(curr);
//     }

// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     int val = 8;
//     insertAtBottom(st,val);

//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }





// //Recursive solution
// //Time = O(n), space = O(n)
// void insertAtBottom(stack<int> &st, int val){

//     if(st.empty()){
//         st.push(val);
//         return;
//     }
//     int curr = st.top();
//     st.pop();
//     insertAtBottom(st,val);
//     st.push(curr);

// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     int val = 8;
//     insertAtBottom(st,val);

//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }








// //Insert element at any index

// //iterative solution
// void insertAtPosition(stack<int> &st, int val, int idx){

//     stack<int> temp;
//     int n = st.size();
//     int count = 0;
//     while(count < n-idx){
//         int curr = st.top();
//         st.pop();
//         temp.push(curr);
//         count++;
//     }
//     st.push(val);
    
//     while(not temp.empty()){
//         int curr = temp.top();
//         temp.pop();
//         st.push(curr);
//     }
// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     int val = 80;
//     int index = 1;
//     insertAtPosition(st,val,index);

//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }




// //Recursive solution
// void insertAtPosition(stack<int> &st, int val, int idx){

//     if(st.size() == idx){
//         st.push(val);
//         return;
//     }
//     int curr = st.top();
//     st.pop();
//     insertAtPosition(st,val,idx);
//     st.push(curr);

// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     int val = 100;
//     int index = 2;
//     insertAtPosition(st,val,index);

//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }








// //Remove element from bottom

// void removeFromBottom(stack<int> &st){

//     stack<int> temp;
//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         temp.push(curr);
//     }
//     temp.pop();
//     while(not temp.empty()){
//         int curr = temp.top();
//         temp.pop();
//         st.push(curr);
//     }
// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     removeFromBottom(st);

//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }




// //in another way
// void removeFromBottom(stack<int> &st){

//     stack<int> temp;
//     while(st.size() != 1){
//         int curr = st.top();
//         st.pop();
//         temp.push(curr);
//     }
//     st.pop();
//     while(not temp.empty()){
//         int curr = temp.top();
//         temp.pop();
//         st.push(curr);
//     }
// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     removeFromBottom(st);

//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }




// //in recursive way
// void removeFromBottom(stack<int> &st){

//     if(st.size() == 1){
//         st.pop();
//         return;
//     }

//     int curr = st.top();
//     st.pop();
//     removeFromBottom(st);
//     st.push(curr);
// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     removeFromBottom(st);

//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }



//we can write 'remove from index' code in same way








// //Reverse a stack  (in original stack)


// //Iterative solution
// //Time = O(n), Space = O(n)
// void reverseStack(stack<int> &st){

//     stack<int> temp1,temp2;
//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         temp1.push(curr);
//     }

//     while(not temp1.empty()){
//         int curr = temp1.top();
//         temp1.pop();
//         temp2.push(curr);
//     }

//     while(not temp2.empty()){
//         int curr  = temp2.top();
//         temp2.pop();
//         st.push(curr);
//     }
// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     reverseStack(st);

//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }





// //Recursive solution
// //Time = O(n^2), Space = O(n)

// void insertAtBottom(stack<int> &st, int val){

//     stack<int> temp;
//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         temp.push(curr);
//     }
//     st.push(val);   //this is the point where x got inserted at the bottom

//     while(not temp.empty()){
//         int curr = temp.top();
//         temp.pop();
//         st.push(curr);
//     }

// }

// void reverseStack(stack<int> &st){

//     if(st.empty()){
//         return;
//     }

//     int curr = st.top();
//     st.pop();
//     reverseStack(st);
//     insertAtBottom(st,curr);

// }

// int main(){

//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     reverseStack(st);

//     while(not st.empty()){
//         int curr = st.top();
//         st.pop();
//         cout<<curr<<endl;
//     }
//     return 0;
// }











//If all opening bracket have closing bracket then it is called balanced bracket sequence
//((()))() or ({[]}) - balanced
//((())  or ({])- not balanced

//properties of balanced bracket string
//1. if we concatenate two string which are balanced then result will be balanced
//2. if we wrap a balanced string with a pair of brackets then result is also balanced



// //check whether a given bracket sequence is balanced or not ?
// //Time = O(n), Space = O(n)

// bool isValid(string str){

//     stack<char> st;
//     for(int i=0;i<str.size();i++){

//         char curr = str[i];   //current character
//         if(curr == '(' or curr == '{' or curr == '['){
//             st.push(curr);
//         }else{
//             if(curr == ')' and !st.empty() and st.top() == '('){
//                 st.pop();
//             }else if(curr == ']' and !st.empty() and st.top() == '['){
//                 st.pop();
//             }else if(curr == '}' and !st.empty() and st.top() == '{'){
//                 st.pop();
//             }else{
//                 return false;
//             }
//         }
//     }
//     return st.empty();
// }

// int main(){

//     string str = "[[{(()()[])}]]";
//     cout<<isValid(str)<<endl;

//     return 0;
// }









// //Find next greater element of each element in an array (if not present set -1)
// //Input = {4,3,9,1,6,8,2}   Output = {9,9,-1,6,8,-1,-1}

// //Brute force solution (Time = O(n^2) , space = O(1)
// void nextGreater(int arr[],int n){

//     vector<int> temp(n,-1);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j] > arr[i]){
//                 temp[i] = arr[j];
//                 break;
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<temp[i]<<" ";
//     }
// }
// int main(){
//     int arr[] = {4,3,9,1,6,8,2};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     nextGreater(arr,n);
// }






// //Efficient solution  (Time = O(n)  Space = O(n))

// vector<int> nextGreater(vector<int> &arr){

//     int n = arr.size();
//     vector<int> output(n,-1);
//     stack<int> st;   //store indexes
//     st.push(0);

//     for(int i=1;i<n;i++){
//         while(!st.empty() and arr[i] >arr[st.top()]){
//             output[st.top()] = arr[i];
//             st.pop();
//         }
//         st.push(i);
//     }

//     // while(!st.empty()){    //this while loop is not mandatory as the output initialized  with -1
//     //     output[st.top()] = -1;
//     //     st.pop();
//     // }

//     return output;
// }

// int main(){

//     int n;
//     cin>>n;
//     vector<int> v;
//     while(n--){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }

//     vector<int> res = nextGreater(v);
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
// }




//For next smaller element code, only change is arr[i] < arr[st.top()] condition





//Find previous greater element of each element in an array
//concept: At first reverse the array,find next greater array,then again reverse the new array

//Input: {4,6,3,1,0,9,5,6,7}     
//after reverse: {7,6,5,9,0,1,3,6,4}
//nextGreater: {9,9,9,-1,1,3,6,-1,-1}
//again reverse: {-1,-1,6,3,1,-1,9,9,9} -> this is output i.e previous greater array of given array

// vector<int> prevGreater(vector<int> &arr){

//     int n = arr.size();
//     reverse(arr.begin(),arr.end());
//     vector<int> output(n,-1);
//     stack<int> st;   //store indexes
//     st.push(0);

//     for(int i=1;i<n;i++){
//         while(!st.empty() and arr[i] >arr[st.top()]){
//             output[st.top()] = arr[i];
//             st.pop();
//         }
//         st.push(i);
//     }

//     // while(!st.empty()){    //this while loop is not mandatory as the output initialized  with -1
//     //     output[st.top()] = -1;
//     //     st.pop();
//     // }

//     reverse(output.begin(),output.end());
//     reverse(arr.begin(),arr.end());      //convert the reverse array to it's original form
//     return output;
// }

// int main(){

//     int n;
//     cin>>n;
//     vector<int> v;
//     while(n--){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }

//     vector<int> res = prevGreater(v);
//     for(int i=0;i<res.size();i++){
//         cout<<res[i]<<" ";
//     }
// }






//Stock span problem

//Given a series of N daily price quotes for a stock, we need to calculate the span of the stock's price for all N days.The span of the stock's price in oneday is the maximum number of consecutive days(starting from that day and going backward) for which the stock price was less than or equal to the price of that day

//Input = {100,80,60,70,60,75,85}        Output = {1,1,1,2,1,4,6}

// vector<int> prevGreater(vector<int> &arr){

//     int n = arr.size();
//     reverse(arr.begin(),arr.end());
//     vector<int> output(n,-1);
//     stack<int> st;   //store indexes
//     st.push(0);

//     for(int i=1;i<n;i++){
//         while(!st.empty() and arr[i] >arr[st.top()]){
//             output[st.top()] = n-i-1;    //because after reverse the indexes will change
//             st.pop();
//         }
//         st.push(i);
//     }

//     // while(!st.empty()){    //this while loop is not mandatory as the output initialized  with -1
//     //     output[st.top()] = -1;
//     //     st.pop();
//     // }

//     reverse(output.begin(),output.end());
//     reverse(arr.begin(),arr.end());      //convert the reverse array to it's original form
//     return output;
// }

// int main(){

//     int n;
//     cin>>n;
//     vector<int> v;
//     while(n--){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }

//     vector<int> res = prevGreater(v);
//     for(int i=0;i<res.size();i++){
//         cout<<i-res[i]<<" ";
//     }
// }










//Histogram problem

//Given an array of integer heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.
//Area = height of bar*(i-j-1) . i=index of next smaller element & j=index of previous smaller element of bar


// int histogram(vector<int> &arr){

//     int n = arr.size();
//     stack<int> st;   //store indexes
//     int ans = INT8_MIN;
//     st.push(0);

//     for(int i=1;i<n;i++){
//         while(!st.empty() and arr[i] < arr[st.top()]){
//             int el = arr[st.top()];  //current bar to be removed & ans will be calculated
//             st.pop();
//             int nsi = i;             //next smaller index
//             int psi = (st.empty()) ? -1 : st.top();   //previous smaller index
//             ans = max(ans, el*(nsi-psi-1));
//         }
//         st.push(i);
//     }

//     while(!st.empty()){    //when there is no next smaller element in array
//         int el = arr[st.top()];  
//         st.pop();
//         int nsi = n;     //cosider nextsmaller index as length of array
//         int psi = (st.empty()) ? -1 : st.top();
//         ans = max(ans, el*(nsi-psi-1));
//     }

//     return ans;
// }

// int main(){

//     int n;
//     cin>>n;
//     vector<int> v;
//     while(n--){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }

//     int ans = histogram(v);
//     cout<<ans<<endl;

//     return 0;
// }
// //Input: 13,  2 1 5 6 2 3 0 2 1 5 6 2 3    Output: 10











//                                     Interview Questions

