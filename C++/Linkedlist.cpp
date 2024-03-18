//Linked list is a linear data structure used to store a list of values

//Challenges(or demerits) of array
//1. static size
//2. contiguos memory allocation
//3. inserting and deleting is costly


//Advantages of a linked list over an array
//1. dynamic size
//2. non-contiguos memory allocation
//3. insertion & deletion is non-expensive (only linking changes)


//Types of linked lists
//1. singly linked list (every node points to it's successor node)
//2. Doubly linked list (every node is connected to it's previous & next node)
//3. Circular linked list (the last node point to head node)




#include<iostream>
using namespace std;



// //creation of a simple Node class that forms the basis of a linked list.

// class Node {
// public:
//     int val;    // Data stored in the Node
//     Node* next; // Pointer to the next Node

//     Node(int data) { // Constructor to initialize the Node with a value
//         val = data;
//         next = NULL; // Initializing the next pointer to NULL
//     }
// };

// int main() {
//     Node* n = new Node(1); // Creating a new Node with value 1
//     cout << n->val << " " << n->next << endl; // Printing the value and next pointer of the Node
// }






// Traversal in a singly linked list
// Insertion at kth position in a singly linked list

// //Add a node at the start (Time complexity = O(1))

// class Node {
// public:
//     int val;    
//     Node* next; 

//     Node(int data) { 
//         val = data;
//         next = NULL; 
//     }
// };

// void insertAtHead(Node* &head, int val){

//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void display(Node* head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertAtHead(head,2);
//     display(head);
//     insertAtHead(head,1);
//     display(head);
// }





// //Add Node at the end(Time complexity = O(n))

// class Node {
// public:
//     int val;    
//     Node* next; 

//     Node(int data) { 
//         val = data;
//         next = NULL; 
//     }
// };

// void insertAtHead(Node* &head, int val){

//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val){

//     Node* new_node = new Node(val);

//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     //temp has reached last node
//     temp->next = new_node;        //next value by default set as null(in constructor)
// }

// void display(Node* head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertAtHead(head,2);
//     display(head);
//     insertAtHead(head,1);
//     display(head);
//     insertAtTail(head,3);
//     display(head);
// }
// //if tail pointer is passed then time complexity will be O(1)





// //Add a Node at an arbitrary position
// //Time complexity = O(pos) or O(n)-in worst case

// class Node {
// public:
//     int val;    
//     Node* next; 

//     Node(int data) { 
//         val = data;
//         next = NULL; 
//     }
// };

// void insertAtHead(Node* &head, int val){

//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val){

//     Node* new_node = new Node(val);

//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     //temp has reached last node
//     temp->next = new_node;        //next value by default set as null(in constructor)
// }

// void insertAtPosition(Node* &head, int val, int pos){

//     if(pos == 0){
//         insertAtHead(head,val);
//     }

//     Node* new_node = new Node(val);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos != pos-1){
//         temp = temp->next;
//         current_pos++;
//     }

//     //temp is reached at node at pos-1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void display(Node* head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertAtHead(head,2);
//     display(head);
//     insertAtHead(head,1);
//     display(head);
//     insertAtTail(head,3);
//     display(head);
//     insertAtPosition(head,4,1);
//     display(head);
// }







// //Updatation at Kth position in a singly linked list
// //Time complexity = O(pos) or O(n)-in worst case

// class Node {
// public:
//     int val;    
//     Node* next; 

//     Node(int data) { 
//         val = data;
//         next = NULL; 
//     }
// };

// void insertAtHead(Node* &head, int val){

//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val){

//     Node* new_node = new Node(val);

//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     //temp has reached last node
//     temp->next = new_node;        //next value by default set as null(in constructor)
// }

// void insertAtPosition(Node* &head, int val, int pos){

//     if(pos == 0){
//         insertAtHead(head,val);
//     }

//     Node* new_node = new Node(val);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos != pos-1){
//         temp = temp->next;
//         current_pos++;
//     }

//     //temp is reached at node at pos-1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void updateAtPosition(Node* head, int pos,int value){

//     Node* new_node = new Node(value);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos != pos){
//         temp = temp->next;
//         current_pos++;
//     }

//     //temp is reached at kth(given pos) node
//     temp->val = value;
// }

// void display(Node* head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertAtHead(head,2);
//     display(head);
//     insertAtHead(head,1);
//     display(head);
//     insertAtTail(head,3);
//     display(head);
//     insertAtPosition(head,4,1);
//     display(head);
//     updateAtPosition(head,2,5);
//     display(head);
// }







//Deletion at kth position in a singly linked list


// //delete a node at the start
// //Time complexity = O(1)

// class Node {
// public:
//     int val;    
//     Node* next; 

//     Node(int data) { 
//         val = data;
//         next = NULL; 
//     }
// };

// void insertAtHead(Node* &head, int val){

//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val){

//     Node* new_node = new Node(val);

//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     //temp has reached last node
//     temp->next = new_node;        //next value by default set as null(in constructor)
// }

// void insertAtPosition(Node* &head, int val, int pos){

//     if(pos == 0){
//         insertAtHead(head,val);
//     }

//     Node* new_node = new Node(val);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos != pos-1){
//         temp = temp->next;
//         current_pos++;
//     }

//     //temp is reached at node at pos-1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void updateAtPosition(Node* head, int pos,int value){

//     Node* new_node = new Node(value);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos != pos){
//         temp = temp->next;
//         current_pos++;
//     }

//     //temp is reached at kth(given pos) node
//     temp->val = value;
// }

// void deleteAtHead(Node* &head){

//     Node* temp = head;
//     head = head->next;
//     free(temp);
// }

// void display(Node* head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertAtHead(head,2);
//     display(head);
//     insertAtHead(head,1);
//     display(head);
//     insertAtTail(head,3);
//     display(head);
//     insertAtPosition(head,4,1);
//     display(head);
//     updateAtPosition(head,2,5);
//     display(head);
//     deleteAtHead(head);
//     display(head);
// }






// //Delete a node at the end
// //Time complexity = O(n)

// class Node {
// public:
//     int val;    
//     Node* next; 

//     Node(int data) { 
//         val = data;
//         next = NULL; 
//     }
// };

// void insertAtHead(Node* &head, int val){

//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val){

//     Node* new_node = new Node(val);

//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     //temp has reached last node
//     temp->next = new_node;        //next value by default set as null(in constructor)
// }

// void insertAtPosition(Node* &head, int val, int pos){

//     if(pos == 0){
//         insertAtHead(head,val);
//     }

//     Node* new_node = new Node(val);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos != pos-1){
//         temp = temp->next;
//         current_pos++;
//     }

//     //temp is reached at node at pos-1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void updateAtPosition(Node* head, int pos,int value){

//     Node* new_node = new Node(value);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos != pos){
//         temp = temp->next;
//         current_pos++;
//     }

//     //temp is reached at kth(given pos) node
//     temp->val = value;
// }

// void deleteAtTail(Node* &head){

//     Node* temp = head;
//     while(temp->next->next != NULL){
//         temp = temp->next;
//     }

//     //now temp is reached at second_last node
//     Node* temp2 = temp->next;     //node to be deleted
//     temp->next = NULL;
//     free(temp2);

// }
// void display(Node* head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertAtHead(head,2);
//     display(head);
//     insertAtHead(head,1);
//     display(head);
//     insertAtTail(head,3);
//     display(head);
//     insertAtPosition(head,4,1);
//     display(head);
//     updateAtPosition(head,2,5);
//     display(head);
//     deleteAtTail(head);
//     display(head);
// }






//Delete a node at an arbitrary position
//Time complexity = O(pos) or O(n)-in worst case

// class Node {
// public:
//     int val;    
//     Node* next; 

//     Node(int data) { 
//         val = data;
//         next = NULL; 
//     }
// };

// void insertAtHead(Node* &head, int val){

//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void insertAtTail(Node* &head, int val){

//     Node* new_node = new Node(val);

//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     //temp has reached last node
//     temp->next = new_node;        //next value by default set as null(in constructor)
// }

// void insertAtPosition(Node* &head, int val, int pos){

//     if(pos == 0){
//         insertAtHead(head,val);
//     }

//     Node* new_node = new Node(val);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos != pos-1){
//         temp = temp->next;
//         current_pos++;
//     }

//     //temp is reached at node at pos-1
//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void updateAtPosition(Node* head, int pos,int value){

//     Node* new_node = new Node(value);
//     Node* temp = head;
//     int current_pos = 0;
//     while(current_pos != pos){
//         temp = temp->next;
//         current_pos++;
//     }

//     //temp is reached at kth(given pos) node
//     temp->val = value;
// }

// void deleteAtHead(Node* &head){

//     Node* temp = head;
//     head = head->next;
//     free(temp);
// }

// void deleteAtPosition(Node* head, int pos){

//     if(pos == 0){
//         deleteAtHead(head);
//         return;
//     }

//     Node* temp = head;
//     int curr_pos = 0;
//     while(curr_pos != pos-1){
//         temp = temp->next;
//         curr_pos++;
//     }
//     //temp is reached at node at pos-1

//     Node* temp2 = temp->next;     //node to be deleted
//     temp->next = temp->next->next;
//     free(temp2);
// }

// void display(Node* head){

//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// int main(){
//     Node* head = NULL;
//     insertAtHead(head,2);
//     display(head);
//     insertAtHead(head,1);
//     display(head);
//     insertAtTail(head,3);
//     display(head);
//     insertAtPosition(head,4,1);
//     display(head);
//     updateAtPosition(head,2,5);
//     display(head);
//     deleteAtPosition(head,2);
//     display(head);
// }









// // code for creation of a simple linkedlist class
// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class LinkedList{         
// public:
//     Node* head;

//     LinkedList(){
//         head = NULL;
//     }

//     void insertAtTail(int value){

//         Node* new_node = new Node(value);
//         if(head == NULL){   //linkedlist is empty
//             head = new_node;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = new_node;    //next value by default set as null(in constructor)

//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }

// };

// int main(){

//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.display();
// }







// //Given the head of a linked list,delete every alternative element from the list starting from the second element

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class LinkedList{         
// public:
//     Node* head;

//     LinkedList(){
//         head = NULL;
//     }

//     void insertAtTail(int value){

//         Node* new_node = new Node(value);
//         if(head == NULL){   //linkedlist is empty
//             head = new_node;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = new_node;    //next value by default set as null(in constructor)

//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }

// };

// void deleteAlternateNodes(Node* head){

//     Node* curr_node = head;
    
//     //curr_node != NULL(condition for even length ll) & curr_node->next != NULL(for odd length ll)
//     while(curr_node != NULL && curr_node->next != NULL){
//         Node* temp = curr_node->next;      //this is the node to be deleted
//         curr_node->next = curr_node->next->next;
//         free(temp);
//         curr_node = curr_node->next;
//     }
// }

// int main(){

//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.display();

//     deleteAlternateNodes(ll.head);
//     ll.display();
// }









// //Given the head of a sorted linkedlist,delete all duplicates such that each element appears only once.Return the linked list sorted as well.
// //Time complexity = O(n) where n is the no. of nodes

// class Node{
// public: 
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class LinkedList{         
// public:
//     Node* head;

//     LinkedList(){
//         head = NULL;
//     }

//     void insertAtTail(int value){

//         Node* new_node = new Node(value);
//         if(head == NULL){   //linkedlist is empty
//             head = new_node;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = new_node;    //next value by default set as null(in constructor)

//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }

// };

// void deleteDuplicateNodes(Node* head){

//     Node* curr_node = head;
    
//     //curr_node != NULL(condition for even length ll) & curr_node->next != NULL(for odd length ll)
//     while(curr_node != NULL){
//         while(curr_node->next != NULL && curr_node->val == curr_node->next->val){
//         Node* temp = curr_node->next;      //this is the node to be deleted
//         curr_node->next = curr_node->next->next;
//         free(temp);
//         }
//         //this loop ends when current node and next node values are different or when linkedlist ends
//         curr_node = curr_node->next;
//     }
// }

// int main(){

//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(3);
//     ll.insertAtTail(3);
//     ll.insertAtTail(5);
//     ll.display();

//     deleteDuplicateNodes(ll.head);
//     ll.display();
// }









// //Given the head of a singly linked list print the reverse list

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class LinkedList{
// public:
//     Node* head;

//     LinkedList(){
//         head = NULL;
//     }

//     void insertAtTail(int value){

//         Node* new_node = new Node(value);
//         if(head == NULL){
//             head = new_node;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = new_node;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };

// void reversePrint(Node* head){

//     //base case
//     if(head == NULL){
//         return;
//     }


//     //recursive case
//     reversePrint(head->next);
//     cout<<head->val<<" ";
// }

// int main(){

//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.display();

//     reversePrint(ll.head);
// }







// //Given the head of a singly linked list,reverse the list,and return the reverse list

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class LinkedList{
// public:
//     Node* head;

//     LinkedList(){
//         head = NULL;
//     }

//     void insertAtTail(int value){

//         Node* new_node = new Node(value);
//         if(head == NULL){
//             head = new_node;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = new_node;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };

// Node* reverseLL(Node* head){

//     Node* prevptr = NULL;
//     Node* currptr = head;
//     while(currptr != NULL){
//         Node* nextptr = currptr->next;
//         currptr->next = prevptr;

//         //move all 3 parts by one step ahead
//         prevptr = currptr;
//         currptr = nextptr;
//     }
    

//     //when loop ends,prevptr is pointing to my last node which is new head
//     Node* new_head = prevptr;
//     return new_head;
// }

// int main(){

//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.display();

//     ll.head = reverseLL(ll.head);
//     ll.display();
// }






                                                //in recursive way(in doubt)

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class LinkedList{
// public:
//     Node* head;

//     LinkedList(){
//         head = NULL;
//     }

//     void insertAtTail(int value){

//         Node* new_node = new Node(value);
//         if(head == NULL){
//             head = new_node;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = new_node;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };

// Node* reverseLL(Node* head){

//     //base case
//     if(head == NULL || head->next == NULL){
//         return head;
//     }

//     //recursive case
//     Node* new_head = reverseLL(head->next);
//     head->next->next = head;
//     head->next = NULL;  //head is now pointing to last node in reversed ll
//     return new_head;

// }

// int main(){

//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.display();

//     ll.head = reverseLL(ll.head);
//     ll.display();
// }








// //Given the head of a linkedlist reverse the nodes of the list k at a time,and return the modified list.
// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class LinkedList{
// public:
//     Node* head;

//     LinkedList(){
//         head = NULL;
//     }

//     void insertAtTail(int value){

//         Node* new_node = new Node(value);
//         if(head == NULL){
//             head = new_node;
//             return;
//         }

//         Node* temp = head;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = new_node;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<"NULL"<<endl;
//     }
// };

// Node* reverseKLL(Node* &head,int k){

//     Node* prevptr = NULL;
//     Node* currptr = head;

//     int counter = 0;    //for counting first k nodes

//     while(currptr != NULL && counter<k){       //reversing first k nodes
//         Node* nextptr = currptr->next;
//         currptr->next = prevptr;
//         prevptr = currptr;
//         currptr = nextptr;
//         counter++;
//     }

//     //currptr will give us (k+1)th node
//     if(currptr != NULL){
//         Node* new_head = reverseKLL(currptr,k);    //recursive call;
//         head->next = new_head;
//     }

//     return prevptr;   //prevptr will give the new_head of connected linkedlists
// }

// int main(){

//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//     ll.display();

//     ll.head = reverseKLL(ll.head,2);
//     ll.display();
// }










//Doubly LinkedList

//Advantages (of a doubly linked list over a singly linked list)
//1. traversal occurs both ways
//2. insertion & deletion becomes more efficient

//Disavantages
//1. extra space for previous pointer



// class Node{   //Implementation of a node in a doubly linked list
// public: 
//     int val;
//     Node* prev;
//     Node* next;

//     Node(int data){       
//         val = data;
//         prev = NULL;
//         next = NULL;
//     }
// };

// class DoublyLinkedList{        //Implementation of a doubly linked list
// public:
//     Node* head;
//     Node* tail;

//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//     }
// };

// int main(){

//     Node* new_node = new Node(3);
//     DoublyLinkedList dll;
//     dll.head = new_node;
//     dll.tail = new_node;
//     cout<<dll.head->val<<endl;

//     return 0;
// }






// Traversal in a doubly linked list
// Insertion at kth position in a doubly linked list



// //Add a node at the start (Time complexity = O(1))

// class Node {
// public:
//     int val;    
//     Node* prev;
//     Node* next;

//     Node(int data) { 
//         val = data;
//         prev = NULL; 
//         next = NULL;
//     }
// };

// class DoublyLinkedList{        
// public:
//     Node* head;
//     Node* tail;

//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         new_node->next = head;
//         head->prev = new_node;
//         head = new_node;
//         return;
//     }

// };

// int main(){
    
//     DoublyLinkedList dll;
//     dll.insertAtStart(1);
//     dll.display();
//     dll.insertAtStart(2);
//     dll.display();
//     dll.insertAtStart(3);
//     dll.display();
// }






// //Add a node at the end (Time complexity = O(1))

// class Node {
// public:
//     int val;    
//     Node* prev;
//     Node* next;

//     Node(int data) { 
//         val = data;
//         prev = NULL; 
//         next = NULL;
//     }
// };

// class DoublyLinkedList{        
// public:
//     Node* head;
//     Node* tail;

//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         new_node->next = head;
//         head->prev = new_node;
//         head = new_node;
//         return;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(tail == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         tail->next = new_node;
//         new_node->prev = tail;
//         tail = new_node;
//         return;
//     }
// };

// int main(){
    
//     DoublyLinkedList dll;
//     dll.insertAtEnd(1);
//     dll.display();
//     dll.insertAtEnd(2);
//     dll.display();
//     dll.insertAtEnd(3);
//     dll.display();
//     dll.insertAtEnd(4);
//     dll.display();
// }







// //Add a node at an arbitrary position(Time complexity = O(k))

// class Node {
// public:
//     int val;    
//     Node* prev;
//     Node* next;

//     Node(int data) { 
//         val = data;
//         prev = NULL; 
//         next = NULL;
//     }
// };

// class DoublyLinkedList{        
// public:
//     Node* head;
//     Node* tail;

//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         new_node->next = head;
//         head->prev = new_node;
//         head = new_node;
//         return;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(tail == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         tail->next = new_node;
//         new_node->prev = tail;
//         tail = new_node;
//         return;
//     }

//     void insertAtPosition(int val,int k){

//         //assuming k is less or equal to length of doubly linkedlist
//         Node* temp = head;
//         int count = 1;
//         while(count < (k-1)){
//             temp = temp->next;
//             count++;
//         }

//         //temp is reached at the node at (k-1)th position
//         Node* new_node = new Node(val);
//         new_node->next = temp->next;
//         temp->next = new_node;

//         new_node->prev = temp;
//         new_node->next->prev = new_node;
//         return;
//     }
// };

// int main(){
    
//     DoublyLinkedList dll;
//     dll.insertAtEnd(1);
//     dll.insertAtEnd(2);
//     dll.insertAtEnd(3);
//     dll.insertAtEnd(4);

//     dll.insertAtPosition(5,3);
//     dll.display();
//     return 0;
// }








//Deletion at kth position in a doubly linked list



// //Delete a node at the start(Time comlexity = O(1))
// class Node {
// public:
//     int val;    
//     Node* prev;
//     Node* next;

//     Node(int data) { 
//         val = data;
//         prev = NULL; 
//         next = NULL;
//     }
// };

// class DoublyLinkedList{        
// public:
//     Node* head;
//     Node* tail;

//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         new_node->next = head;
//         head->prev = new_node;
//         head = new_node;
//         return;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(tail == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         tail->next = new_node;
//         new_node->prev = tail;
//         tail = new_node;
//         return;
//     }

//     void insertAtPosition(int val,int k){

//         //assuming k is less or equal to length of doubly linkedlist
//         Node* temp = head;
//         int count = 1;
//         while(count < (k-1)){
//             temp = temp->next;
//             count++;
//         }

//         //temp is reached at the node at (k-1)th position
//         Node* new_node = new Node(val);
//         new_node->next = temp->next;
//         temp->next = new_node;

//         new_node->prev = temp;
//         new_node->next->prev = new_node;
//         return;
//     }

    // void deleteAtStart(){

    //     if(head == NULL){
    //         return;
    //     }

    //     Node* temp = head;
    //     head = head->next;
    //     if(head == NULL){
    //         tail = NULL;
    //     }else{
    //         head->prev = NULL;
    //     }
    //     free(temp);
    //     return;
    // }
// };

// int main(){
    
//     DoublyLinkedList dll;
//     dll.insertAtEnd(1);
//     dll.insertAtEnd(2);
//     dll.insertAtEnd(3);
//     dll.insertAtEnd(4);
//     dll.deleteAtStart();
//     dll.display();
//     return 0;
// }







// //Delete a node at the end(Time comlexity = O(1))

// class Node {
// public:
//     int val;    
//     Node* prev;
//     Node* next;

//     Node(int data) { 
//         val = data;
//         prev = NULL; 
//         next = NULL;
//     }
// };

// class DoublyLinkedList{        
// public:
//     Node* head;
//     Node* tail;

//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         new_node->next = head;
//         head->prev = new_node;
//         head = new_node;
//         return;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(tail == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         tail->next = new_node;
//         new_node->prev = tail;
//         tail = new_node;
//         return;
//     }

//     void insertAtPosition(int val,int k){

//         //assuming k is less or equal to length of doubly linkedlist
//         Node* temp = head;
//         int count = 1;
//         while(count < (k-1)){
//             temp = temp->next;
//             count++;
//         }

//         //temp is reached at the node at (k-1)th position
//         Node* new_node = new Node(val);
//         new_node->next = temp->next;
//         temp->next = new_node;

//         new_node->prev = temp;
//         new_node->next->prev = new_node;
//         return;
//     }

//     void deleteAtEnd(){

//         if(head == NULL){
//             return;
//         }

//         Node* temp = tail;
//         tail = tail->prev;
//         if(tail == NULL){
//             head = NULL;
//         }else{
//             tail->next = NULL;
//         }
//         free(temp);
//         return;
//     }
// };

// int main(){
    
//     DoublyLinkedList dll;
//     dll.insertAtEnd(1);
//     dll.insertAtEnd(2);
//     dll.insertAtEnd(3);
//     dll.insertAtEnd(4);
//     dll.display();

//     dll.deleteAtEnd();
//     dll.display();
//     return 0;
// }







// //Delete a node at kth position(Time comlexity = O(k))

// class Node {
// public:
//     int val;    
//     Node* prev;
//     Node* next;

//     Node(int data) { 
//         val = data;
//         prev = NULL; 
//         next = NULL;
//     }
// };

// class DoublyLinkedList{        
// public:
//     Node* head;
//     Node* tail;

//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         new_node->next = head;
//         head->prev = new_node;
//         head = new_node;
//         return;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(tail == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         tail->next = new_node;
//         new_node->prev = tail;
//         tail = new_node;
//         return;
//     }

//     void insertAtPosition(int val,int k){

//         //assuming k is less or equal to length of doubly linkedlist
//         Node* temp = head;
//         int count = 1;
//         while(count < (k-1)){
//             temp = temp->next;
//             count++;
//         }

//         //temp is reached at the node at (k-1)th position
//         Node* new_node = new Node(val);
//         new_node->next = temp->next;
//         temp->next = new_node;

//         new_node->prev = temp;
//         new_node->next->prev = new_node;
//         return;
//     }

//     void deleteAtStart(){

//         if(head == NULL){
//             return;
//         }

//         Node* temp = head;
//         head = head->next;
//         if(head == NULL){
//             tail = NULL;
//         }else{
//             head->prev = NULL;
//         }
//         free(temp);
//         return;
//     }

//     void deleteAtPosition(int k){

//         //assuming k is less than or equal to length of dll
//         if(k == 1){
//             deleteAtStart();
//             return;
//         }

//         Node* temp = head;
//         int count = 1;
//         while(count < k){
//             temp = temp->next;
//             count++;
//         }
        
//         temp->prev->next = temp->next;
//         temp->next->prev = temp->prev;
//         free(temp);
//         return;
//     }
// };

// int main(){
    
//     DoublyLinkedList dll;
//     dll.insertAtEnd(1);
//     dll.insertAtEnd(2);
//     dll.insertAtEnd(3);
//     dll.insertAtEnd(4);
//     dll.deleteAtPosition(3);
//     dll.display();
//     return 0;
// }










// // Given the head of a doubly linked list,reverse it.

// class Node {
// public:
//     int val;    
//     Node* prev;
//     Node* next;

//     Node(int data) { 
//         val = data;
//         prev = NULL; 
//         next = NULL;
//     }
// };

// class DoublyLinkedList{        
// public:
//     Node* head;
//     Node* tail;

//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(tail == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         tail->next = new_node;
//         new_node->prev = tail;
//         tail = new_node;
//         return;
//     }

// };

// void reverseDll(Node* &head, Node* &tail){

//         Node* currptr = head;
//         while(currptr != NULL){
//             Node* nextptr = currptr->next;

//             currptr->next = currptr->prev;
//             currptr->prev = nextptr;
//             currptr = nextptr;
//         }

//         //swapping head and tail pointers(as they interchange their position after reverse of total linkedlist)
//         Node* newHead = tail;
//         tail = head;
//         head = newHead;

//     }

// int main(){
    
//     DoublyLinkedList dll;
//     dll.insertAtEnd(1);
//     dll.insertAtEnd(2);
//     dll.insertAtEnd(3);
//     dll.insertAtEnd(4);
//     dll.display();

//     reverseDll(dll.head,dll.tail);
//     dll.display();
//     return 0;
// }








// // Given the head of a doubly linked list,find if it's a palindrome or not.

// class Node {
// public:
//     int val;    
//     Node* prev;
//     Node* next;

//     Node(int data) { 
//         val = data;
//         prev = NULL; 
//         next = NULL;
//     }
// };

// class DoublyLinkedList{        
// public:
//     Node* head;
//     Node* tail;

//     DoublyLinkedList(){
//         head = NULL;
//         tail = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         while(temp != NULL){
//             cout<<temp->val<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(tail == NULL){
//             head = new_node;
//             tail = new_node;
//             return;
//         }

//         tail->next = new_node;
//         new_node->prev = tail;
//         tail = new_node;
//         return;
//     }

// };

// bool isPalindrome(Node* head,Node* tail){

//     while(head != tail && tail != head->prev){
//         if(head->val != tail->val){
//             return false;
//         }
//         head = head->next;
//         tail = tail->prev;
//     }
//     return true;
// }

// int main(){
    
//     DoublyLinkedList dll;
//     dll.insertAtEnd(1);
//     dll.insertAtEnd(2);
//     dll.insertAtEnd(3);
//     dll.insertAtEnd(2);
//     dll.insertAtEnd(1);
//     dll.display();

//     cout<<isPalindrome(dll.head,dll.tail);

//     return 0;
// }








// Given the head of a doubly linked list,delete the nodes whose neighbours have the same value.Traverse the list from right to left

class Node {
public:
    int val;    
    Node* prev;
    Node* next;

    Node(int data) { 
        val = data;
        prev = NULL; 
        next = NULL;
    }
};

class DoublyLinkedList{        
public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void display(){

        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void insertAtEnd(int val){

        Node* new_node = new Node(val);
        if(tail == NULL){
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

};

void deleteSameNeighbourNode(Node* &head, Node* &tail){

    Node* currNode = tail->prev;   //second last node
    while(currNode != head){
        Node* prevNode = currNode->prev;
        Node* nextNode = currNode->next;

        if(prevNode->val == nextNode->val){       //i need to delete the current node
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
            free(currNode);
        }
        currNode = prevNode;
    }
}

int main(){
    
    DoublyLinkedList dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    dll.display();

    deleteSameNeighbourNode(dll.head,dll.tail);
    dll.display();
    return 0;
}