//Circular Linked List 
//tail->next = head & head->prev = tail
//two types(singly circular LL & doubly circular LL)

//advantages of a circular LL over a singly LL
//1. we can start traversing from any node to print all nodes until we reach the visited node
//2. when we have to traverse LL in circular fashion multiple times


#include<iostream>
using namespace std;

//Node implementation is same as singly LL(for singly cicular LL) and doubly LL(for doubly circular LL)


//Traversal in a circular LL

//Insertion at kth position in a circular LL (we assume singly circular LL)

// //Add a node at the start
// //time complexity = O(n)

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class CircularLinkedList{
// public:
//     Node* head;

//     CircularLinkedList(){
//         head = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         do{

//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }while(temp!=head);
//         cout<<endl;

//     }

//     void printCircular(){        //checking it's a circular LL or not
        
//         Node* temp = head;
//         for(int i=0;i<15;i++){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             new_node->next = head;  //circular LL
//             return;
//         }

//         Node* tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }
//         //now tail is reached at last node
//         tail->next = new_node;
//         new_node->next = head;
//         head = new_node;
//     }

// };

// int main(){

//     CircularLinkedList cll;
//     cll.insertAtStart(3);
//     cll.insertAtStart(2);
//     cll.insertAtStart(1);
//     cll.display();
//     cll.printCircular();

//     return 0;
// }






// //Add a node at the end
// //time complexity = O(n)

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class CircularLinkedList{
// public:
//     Node* head;

//     CircularLinkedList(){
//         head = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         do{

//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }while(temp!=head);
//         cout<<endl;

//     }

//     void printCircular(){        //checking it's a circular LL or not
        
//         Node* temp = head;
//         for(int i=0;i<15;i++){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             new_node->next = head;  //circular LL
//             return;
//         }

//         Node* tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }
//         //now tail is reached at last node
//         tail->next = new_node;
//         new_node->next = head;
//         head = new_node;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             new_node->next = head;  //circular LL
//             return;
//         }

//         Node* tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }
//         //now tail is reached at last node
//         tail->next = new_node;
//         new_node->next = head;
//     }

// };

// int main(){

//     CircularLinkedList cll;
//     cll.insertAtStart(3);
//     cll.insertAtStart(2);
//     cll.insertAtStart(1);
//     cll.display();

//     cll.insertAtEnd(5);
//     cll.display();

//     return 0;
// }







// //Add a node at an arbitrary position
// //time complexity = o(pos)

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class CircularLinkedList{
// public:
//     Node* head;

//     CircularLinkedList(){
//         head = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         do{

//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }while(temp!=head);
//         cout<<endl;

//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             new_node->next = head;  //circular LL
//             return;
//         }

//         Node* tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }
//         //now tail is reached at last node
//         tail->next = new_node;
//         new_node->next = head;
//         head = new_node;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             new_node->next = head;  //circular LL
//             return;
//         }

//         Node* tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }
//         //now tail is reached at last node
//         tail->next = new_node;
//         new_node->next = head;
//     }

//     void insertAtPosition(int pos,int val){

//         Node* temp = head;
//         int count = 1;
//         while(count < (pos-1)){
//             temp = temp->next;
//             count++;
//         }
//         Node* new_node = new Node(val);
//         new_node->next = temp->next;
//         temp->next = new_node;
//     }
// };

// int main(){

//     CircularLinkedList cll;
//     cll.insertAtStart(3);
//     cll.insertAtStart(2);
//     cll.insertAtStart(1);
//     cll.insertAtEnd(5);
//     cll.display();

//     cll.insertAtPosition(3,8);
//     cll.display();

//     return 0;
// }





//Updatation at kth position in a circular LL is same as singly LL
//Different thing occurs when we start inserting,updating & deleting nodes at the end and start 



// //Deletion at kth position in a circular LL

// //Delete a node at the start

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class CircularLinkedList{
// public:
//     Node* head;

//     CircularLinkedList(){
//         head = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         do{

//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }while(temp!=head);
//         cout<<endl;

//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             new_node->next = head;  //circular LL
//             return;
//         }

//         Node* tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }
//         //now tail is reached at last node
//         tail->next = new_node;
//         new_node->next = head;
//         head = new_node;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             new_node->next = head;  //circular LL
//             return;
//         }

//         Node* tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }
//         //now tail is reached at last node
//         tail->next = new_node;
//         new_node->next = head;
//     }

//     void deleteAtStart(){

//         if(head == NULL){
//             return;
//         }
//         Node* tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }

//         Node* temp = head;
//         head = head->next;    //new updated head
//         tail->next = head;
//         free(temp);
//     }
// };

// int main(){

//     CircularLinkedList cll;
//     cll.insertAtStart(3);
//     cll.insertAtStart(2);
//     cll.insertAtStart(1);
//     cll.insertAtEnd(5);
//     cll.display();

//     cll.deleteAtStart();
//     cll.display();

//     return 0;
// }







// //Delete a node at the end
// //Time complexity = O(n)

// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int data){
//         val = data;
//         next = NULL;
//     }
// };

// class CircularLinkedList{
// public:
//     Node* head;

//     CircularLinkedList(){
//         head = NULL;
//     }

//     void display(){

//         Node* temp = head;
//         do{

//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }while(temp!=head);
//         cout<<endl;

//     }

//     void printCircular(){        //checking it's a circular LL or not
        
//         Node* temp = head;
//         for(int i=0;i<15;i++){
//             cout<<temp->val<<"->";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtStart(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             new_node->next = head;  //circular LL
//             return;
//         }

//         Node* tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }
//         //now tail is reached at last node
//         tail->next = new_node;
//         new_node->next = head;
//         head = new_node;
//     }

//     void insertAtEnd(int val){

//         Node* new_node = new Node(val);
//         if(head == NULL){
//             head = new_node;
//             new_node->next = head;  //circular LL
//             return;
//         }

//         Node* tail = head;
//         while(tail->next != head){
//             tail = tail->next;
//         }
//         //now tail is reached at last node
//         tail->next = new_node;
//         new_node->next = head;
//     }

//     void deleteAtEnd(){

//         if(head == NULL){
//             return;
//         }

//         Node* tail = head;
//         while(tail->next->next != head){
//             tail = tail->next;
//         }
//         //tail is reached at second last node
//         Node* temp = tail->next;   //to be deleted
//         tail->next = head;
//         free(temp);
//     }
// };

// int main(){

//     CircularLinkedList cll;
//     cll.insertAtStart(3);
//     cll.insertAtStart(2);
//     cll.insertAtStart(1);
//     cll.insertAtEnd(5);
//     cll.display();

//     cll.deleteAtEnd();
//     cll.display();
//     // cll.printCircular();
//     return 0;
// }




//Delete a node at an arbitrary position is same as singly LL


















// //Template Classes
// //They allow us to pass datatype as parameter

// template <typename T>
// class Node{
// public:
//     T val;
//     Node* next;

//     Node(T data){
//         val = data;
//         next = NULL;
//     }

// };

// int main(){

//     Node<int>* node1 = new Node<int> (3);
//     cout<<node1->val<<endl;

//     Node<char>* node2 = new Node<char> ('a');
//     cout<<node2->val<<endl;

//     return 0;
// }








//STL (Standard Template Library)
//It's a set of template classes for implementing commonly used data structures & functions.

//STL have 3 major components (i.e. Containers,Iterators & Algorithms)
//Containers: used to hold data of the same type  (e.g. vector,list,map,set etc.)
//Iterators: used to iterate/traverse the container (behave as pointer like entities)
//Algorithms: functions that are used to manipulate data in the containers (e.g. sort(),min(),max() etc.)




//What is a list?
//It's a template class in STL for implementing doubly LinkedList
//Advantages of a list in C++ STL is implementation becomes easy


// //Declaration of a list
// #include<list>

// list<int> rollNo;              //list<data-type> list_name;
// list<int> list1{1,2,3,4};
// list<int> list2 = {5,6,7,8};




//iterator functions
//list.begin()   -> iterator for the first element
//list.end()     -> iterator for the position after the last element
//list.rbegin()  -> iterator for the first element in reverse iteration
//list.rend()    -> iterator for the position after last element in reverse iteartion
//advance(itr,n) -> advances the itr by n places


#include<list>

// int main(){

//     list<int> l1 = {1,2,3,4};
//     auto itr = l1.begin();
//     cout<<*itr<<endl;

//     // auto rev_itr = l1.rbegin();
//     // cout<<*rev_itr<<endl;

//     advance(itr,2);
//     cout<<*itr<<endl;

//     return 0;
// }





// //Traversal in a list

// int main(){

//     list<int> l1 = {1,2,3,4};
    
//     // for(auto num: l1){        //using range-based loop
//     //     cout<<num<<endl;
//     // }


//     // for(auto itr = l1.begin(); itr!=l1.end(); itr++){       //using iterators
//     //     cout<<*itr<<" ";
//     // }

    // for(auto itr = l1.rbegin(); itr!=l1.rend(); itr++){       //reversal traversal
    //     cout<<*itr<<" ";
    // }

//     return 0;
// }






// //Inserting elements into a list

//list.insert(itr,value)       -> insert value before the position of the iterator
//list.insert(itr,count,value) -> insert value count no. of times before itr
//list(itr,start_itr,end_itr)  -> insert values from start_itr to end_itr before given itr


// int main(){

//     list<int> l1 = {1,2,3,4};

//     auto itr = l1.begin();
//     advance(itr,2);    //itr will be 3

//     // l1.insert(itr,5);
//     // for(auto itr = l1.begin(); itr!=l1.end(); itr++){      
//     //     cout<<*itr<<" ";
//     // }cout<<endl;


//     // l1.insert(itr,2,5);
//     // for(auto itr = l1.begin(); itr!=l1.end(); itr++){      
//     //     cout<<*itr<<" ";
//     // }cout<<endl;


//     auto l = l1.begin();
//     auto r = l1.begin();
//     advance(r,2);   //now r is pointing to 3

//     l1.insert(itr,l,r);
//     for(auto itr = l1.begin(); itr!=l1.end(); itr++){      
//         cout<<*itr<<" ";
//     }cout<<endl;
// }







//Deleting elements from a list

//list.erase(itr) -> delete the element pointed by itr
//list.erase(start_itr,end_itr) -> delete elements from start_itr to end_itr(but don't delete end_itr)

int main(){

    list<int> l1 = {1,2,3,4,5};

    auto s_itr = l1.begin();
    advance(s_itr,1);   //s_itr pointing to 2nd element

    auto e_itr = l1.begin();
    advance(e_itr,4);   //e_itr pointing to 5th element

    l1.erase(s_itr,e_itr);
    for(auto itr = l1.begin(); itr!=l1.end(); itr++){      
        cout<<*itr<<" ";
    }cout<<endl;
}






//Other member functions of a list container
//push-front(val) -> insert value in the front of list
//pop-front()     -> removes value from front of list
//push-back(val)  -> insert value in the back of the list
//pop-back()      -> removes value from back of list