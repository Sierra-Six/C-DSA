//Queue is a data structure that support FIFO(first in first out) or FCFS(first come first serve) 
//Queue is a linear data structure

//Types of operations on queues
//1.Enqueue -> this operation will help us to add a new element in the queue
//2.Dequeue -> this operation will help us to remove  a new element in the queue
//3.front -> gives us the element which comes first
//4.isFull  5.isempty    6.size

//Types of Queues
//1. simple queue  2.Priority queue   3.Circular queue    4.Double ended queue/Deque


#include<iostream>
#include<vector>
using namespace std;



//Linked list implementation of Queues      (Time complexity = O(1))
//for Enqueue, add at tail function is used and for Dequeue, remove from head function is used.

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         this->val = data;
//         this->next = NULL;
//     }
// };

// class Queue{
//     Node* head;
//     Node* tail;
//     int size;
// public:
//     Queue(){
//         this->head = NULL;
//         this->tail = NULL;
//     }

//     void enqueue(int data){

//         Node* new_node = new Node(data);
//         if(this->head == NULL){   //LL is empty
//             this->head = this->tail = new_node;
//         }else{
//             this->tail->next = new_node;
//             this->tail = new_node;
//         }
//         this->size++;
//     }

//     void dequeue(){

//         if(this->head == NULL){   //LL is empty
//             return;
//         }else{
//             Node* temp = this->head;
//             this->head = this->head->next;
//             if(this->head == NULL) this->tail = NULL;
//             delete temp;

//             // //another way
//             // Node* oldHead = this->head;
//             // Node* newHead = this->head->next;
//             // this->head = newHead;
//             // if(this->head == NULL) this->tail = NULL;
//             // oldHead->next = NULL;
//             // delete oldHead;

//             this->size--;
//         }
//     }

//     int getSize(){
//         return this->size;
//     }

//     bool isEmpty(){
//         return this->head == NULL;
//     }

//     int front(){
//         if(this->head == NULL) return -1;
//         return this->head->val;
//     }

// };

// int main(){

//     Queue qu;
//     qu.enqueue(10);
//     qu.enqueue(20);
//     qu.enqueue(30);
//     qu.dequeue();
//     qu.enqueue(40);

//     while(not qu.isEmpty()){
//         cout<<qu.front()<<" ";
//         qu.dequeue();
//     }

//     return 0;
// }







// //Array implementation of Queues      (Time complexity = O(1))

// class Queue{
//     int front;
//     int back;
//     vector<int> v;
// public:
//     Queue(){
//         this->front = -1;
//         this->back = -1;
//     }

//     void enqueue(int data){

//         this->v.push_back(data);
//         this->back++;
//         if(this->back == 0) this->front = 0;
//     }

//     void dequeue(){

//         if(this->front == this->back){
//             this->front = -1;
//             this->back = -1;
//             v.clear();    //clear all space of vector so that new elememt will add at 0th index
//         }
//         else{
//             this->front++;
//         }
//     }

//     int getFront(){
//         if(this->front == -1) return -1;
//         return this->v[this->front];
//     }

//     bool isEmpty(){
//         return this->front == -1;
//     }
// };

// int main(){

//     Queue qu;
//     qu.enqueue(10);
//     qu.enqueue(20);
//     qu.enqueue(30);
//     qu.dequeue();
//     qu.enqueue(40);
//     qu.dequeue();
//     qu.dequeue();
//     qu.dequeue();
//     qu.enqueue(400);

//     while(not qu.isEmpty()){
//         cout<<qu.getFront()<<" ";
//         qu.dequeue();
//     }

//     return 0;
// }


// //Linked list implementation is more space efficient then array implementation






//Internal Queue implementation (using STL)


#include<queue>



// int main(){

//     queue<int> qu;

//     qu.push(10);   //enqueue
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);
//     qu.pop();  //dequeue

//     while(not qu.empty()){
//         cout<<qu.front()<<" ";
//         qu.pop();
//     }

//     return 0;
// }






//Reverse the elements of a queue
//Hint: Atfirst transfer all data from queue to stack (data will be reversed) than from stack to queue 

#include<stack>


// int main(){

//     queue<int> qu;
//     qu.push(10);
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);

//     stack<int> st;
//     while(not qu.empty()){
//         st.push(qu.front());
//         qu.pop();
//     }
//     while(not st.empty()){
//         qu.push(st.top());
//         st.pop();
//     }

//     while(not qu.empty()){
//         cout<<qu.front()<<" ";
//         qu.pop();
//     }

//     return 0;
// }











//                      Double ended queue/Deque

#include<deque>


// int main(){

//     deque<int> dq;
//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_back(30);
//     dq.push_front(0);
//     dq.push_front(33);
//     while(not dq.empty()){
//         cout<<dq.front()<<" ";
//         dq.pop_front();
//     }

//     return 0;
// }

// //Deque can be implemented by using doubly linked list








//Practice
//You are given an array of integers nums,there is a sliding window of size k which is moving from the very left of the array to the very right.You can only see the k numbers in the window.each time the sliding window moves right by one position.Return the max sliding window which basically contains the max element in each window
//Lecture 58 (24.20)








//Stack implementation of queue

// //push efficient implementation i.e. Time compl. of push() function is O(1) and for pop() and front() function it is O(n)

// class Queue{
//     stack<int> st;
// public:
//     Queue() {}

//     void push(int x){   //queue.enqueue

//         this->st.push(x);
//     }

//     void pop(){    //queue.dequeue

//         if(this->st.empty()) return;
//         stack<int> temp;
//         while(this->st.size() > 1){
//             temp.push(st.top());
//             st.pop();
//         }
//         //now stack size is 1, and we are at the bottom element
//         this->st.pop();
//         while(not temp.empty()){
//             this->st.push(temp.top());
//             temp.pop();
//         }
//     }

//     bool empty(){
//         return this->st.empty();
//     }

//     int front(){

//         if(this->st.empty()) return -1;
//         stack<int> temp;
//         while(this->st.size() > 1){
//             temp.push(st.top());
//             st.pop();
//         }
//         //now stack size is 1, and we are at the bottom element
//         int result = this->st.top();
//         while(not temp.empty()){
//             this->st.push(temp.top());
//             temp.pop();
//         }
//         return result;
//     }
// };

// int main(){

//     queue<int> qu;

//     qu.push(10);   //enqueue
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);
//     qu.pop();  //dequeue
//     qu.pop();

//     while(not qu.empty()){
//         cout<<qu.front()<<" ";
//         qu.pop();
//     }

//     return 0;
// }




// //pop efficient implementation i.e. Time compl. of pop() and front() function is O(1) and for push()function it is O(n)
// //for push() function add at bottom concept is used

// class Queue{
//     stack<int> st;
// public:
//     Queue() {}

//     void push(int x){   //queue.enqueue

//         stack<int> temp;
//         while(not this->st.empty()){
//             temp.push(this->st.top());
//             st.pop();
//         }
//         this->st.push(x);
//         while(not temp.empty()){
//             this->st.push(temp.top());
//             temp.pop();
//         }
//     }

//     void pop(){    //queue.dequeue

//         if(this->st.empty()) return;
//         this->st.pop();
//     }

//     bool empty(){
//         return this->st.empty();
//     }

//     int front(){

//         if(this->st.empty()) return INT8_MIN;
//         return this->st.top();
//     }
// };

// int main(){

//     queue<int> qu;

//     qu.push(10);   //enqueue
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);
//     qu.pop();  //dequeue
//     qu.pop();

//     while(not qu.empty()){
//         cout<<qu.front()<<" ";
//         qu.pop();
//     }

//     return 0;
// }




//we can also implement stack using queue






//                                                 Circular queues


class Queue{
    int front;
    int back;
    vector<int> v;
    int cs;   //current size
    int ts;   //total size
public:
    Queue(int n){
        v.resize(n);
        this->ts = n;
        this->front = 0;
        this->back = n-1;
        this->cs = 0;
    }

    void enqueue(int data){

        if(isFull()) return;
        this->back = (this->back + 1) % this->ts;
        this->v[this->back] = data;
        this->cs++;
    } 

    void dequeue(){

        if(isEmpty()) return;
        this->front = (this->front + 1) % this->ts;
        this->cs--;
    }

    int getFront(){
        if(this->front == -1) return -1;
        return this->v[this->front];
    }

    bool isEmpty(){
        return this->cs == 0;
    }

    bool isFull(){
        return this->cs == this->ts;
    }
};

int main(){

    Queue qu(3);
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.enqueue(400);
    qu.enqueue(500);

    while(not qu.isEmpty()){
        cout<<qu.getFront()<<" ";
        qu.dequeue();
    }

    return 0;
}
