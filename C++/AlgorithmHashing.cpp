#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
 

//hashing data structure comes to make time comlexity of searching O(1) or O(constant)
//The process of finding a unique index for all elements to store them is called hashing and the unique index is called Hash Value
//When two elements have same hash value this is called collision.  
//Quadratic probing is used instead of linear probing to avoid clusters 
//Load factor(no. of elements/no.of buckets) is the Average entries in one bucket.
//When load factor exceeds its limit(generally 0.75) we do Rehashing(Increasing size of hash table and redistributing elements in it).rehashing is a costly thing( i.e. time complexity may increase)  




// class Hashing{

//     vector<list<int> > hashtable;     //vector of Linked list
//     int buckets;
// public:
//     Hashing(int size){
//         buckets = size;
//         hashtable.resize(size);
//     }

//     int hashvalue(int key){
//         return key % buckets;     //division method
//     }

//     void addKey(int key){
//         int idx = hashvalue(key);
//         hashtable[idx].push_back(key);
//     }

//     list<int>::iterator searchKey(int key){     //return iterator
//         int idx = hashvalue(key);
//         return find(hashtable[idx].begin(),hashtable[idx].end(),key);    //hashtable[idx] is a Linkedlist
//     }

//     void deleteKey(int key){
//         int idx = hashvalue(key);
//         if(searchKey(key) != hashtable[idx].end()){    //i.e. key is present
//             hashtable[idx].erase(searchKey(key));
//             cout<<key<<" is deleted"<<endl;
//         }else{
//             cout<<"Key is not present in the hashtable"<<endl;
//         }
//     }
// };

// int main(){
//     Hashing h(10);
//     h.addKey(5);
//     h.addKey(9);
//     h.addKey(3);

//     h.deleteKey(3);
//     h.deleteKey(3);

//     return 0;
// }

// //insertion,deletion & searching all happens in O(1) time complexity...O(n) on worst case i.e. when all element wii store in one bucket.









//                                     HashMap
#include<map>

//Map in C++ STL
//STL container which stores key-value pairs.
//The elements are stored in ascending/descending order.
//Maps can't have duplicate keys i.e. all keys are unique.
//Maps in C++ is  implemented through Binary searching tree(BST).
//By default maps are in ascending order. To make it descending the syntax will be:
//map<datatype1,datatype2,greater<datatype1>> map_name;

//pseudo syntax
//map<key_datatype,value_datatype> map_name= {{key1,value1},{key2,value2},{key3,value3}}
//map_name.insert(make-pair("ABC",379))
//map_name[key] = value    i.e    map_name["ABC"] = 379;
//for(auto element: map_name){       //each element is a key-value pair
//        key = element.first;
//        value = element.second;
//    }

//erase() function   
//map_name.erase(itr),map_name.erase(key),map_name.erase(start_itr,end_itr)

//swap() function
//m1.swap(m2),    swap(m1,m2)

//clear() function
//map_name.clear();

//empty(), size(), max_size(), find(), count(), upper_bound(), lower_bound(),begin(),end(),rbegin(),rend() functions

//map_name.find(key) -> returns itr to element if present else it returns map_name.end() itr
//map_name.count(key) -> return 1 if present(because duplicate keys are not allowed) else return 0






// int main(){

//     map<string,int> directory;

//     directory["Naman"] = 67289125;
//     directory["Animesh"] = 98409102;
//     directory["Ritu"] = 32801956;
//     directory["Ritu"] = 89328019;      //Duplicate value (but old value is updated)

//     directory.insert(make_pair("Asha",12367423));    //insert() function (O(logn)) 

//     // directory.erase("Ritu");

//     // for(auto element: directory){
//     //     cout<<"Name -  "<<element.first<<endl;
//     //     cout<<"Phone No. - "<<element.second<<endl;
//     // }

//     // map<string,int>::iterator itr;
//     // for(itr = directory.begin(); itr != directory.end(); itr++){
//     //     cout<<itr->first<<"- "<<itr->second<<endl;
//     // }

//     map<string,int>::reverse_iterator itr;
//     for(itr = directory.rbegin(); itr != directory.rend(); itr++){
//         cout<<itr->first<<"- "<<itr->second<<endl;
//     }

//     return 0;
// }





// int main(){
//     map<int,int> m;
//     m.insert({1,10});
//     m.insert({1,20});
//     m.insert({3,30});
//     m[4] = 40;
//     for(auto i:m){
//         cout<<i.first<<"- "<<i.second<<endl;
//     }
// }






// //Sum of repetitive elements
// //Input: n=7, elements=[1,1,2,1,3,3,3]       output: 4    (i.e 1+3)
// //Time = O(n), space = O(n)

// int main(){
//     int n;
//     cin>>n;

//     vector<int> input(n);
//     for(int i=0;i<n;i++){
//         cin>>input[i];
//     }

//     map<int,int> m;
//     for(int i=0;i<n;i++){
//         //storing frequency of every element in input array
//         m[input[i]]++;
//     }

//     int sum=0;
//     //finding sum of repetitive elements
//     for(auto pair: m){            //pair (elements,frequency)
//         if(pair.second > 1){      //element is repetitive
//             sum+=pair.first;
//         }
//     }
//     cout<<"ANS:- "<<sum<<endl;

//     return 0;
// }










//                             Unordered map
#include<unordered_map>

//Elements are not ordered. Other properties are same as map
// insertion,deletion and retrieval/search operation occured in O(1) time in average case and O(n) in worst case
//Unordered map is implemented using hashing




// int main(){


//     unordered_map<int,string> record;
//     //roll no, name

//     record.insert(make_pair(3,"Ria"));
//     record[1] = "Biki";
//     record[2] = "Animesh";
//     // record[3] = "Payal";     //value updated
//     record.insert(make_pair(3,"Payal"));  //value don't update

//     for(auto pair: record){
//         cout<<"Roll No. - "<<pair.first<<endl;
//         cout<<"Name - "<<pair.second<<endl;
//     }

//     return 0;
// }

// //other functions are same as map







//                                 Multimap
#include<map>

//Duplicate Keys are allowed. All other properties are same as map.
// insertion,deletion and retrieval/search operation occured in O(log n) time



// int main(){

//     multimap<string,int> directory;

//     directory.insert(make_pair("Urvi",46859078));
//     directory.insert(make_pair("Saghvi",89953340));
//     directory.insert(make_pair("Saghvi",23498034));
//     //directory["Urvi"] = 75439029;  is not allowed in multimap

//     for(auto pair: directory){
//         cout<<"Name - "<<pair.first<<endl;
//         cout<<"Phone No. - "<<pair.second<<endl;

//         return 0;
//     }
// }

// //All other functions are same as map








//                            Unordered Multimap
#include<unordered_map>

//Elements are not ordered and duplicate keys are allowed. All other properties are same as map.
// insertion,deletion and retrieval/search operation occured in O(1) time in average case and O(n) in worst case



// int main(){

//     unordered_multimap<string,int> fruitcount;

//     fruitcount.insert(make_pair("Apple",6));
//     fruitcount.insert(make_pair("Banana",9));
//     fruitcount.insert(make_pair("Apple",3));

//     for(auto pair: fruitcount){
//         cout<<"Fruit - "<<pair.first<<endl;
//         cout<<"Count - "<<pair.second<<endl;
//     }

//     return 0;
// }

// //All other functions are same as map












//                                       Interview questions

//Can you make the strings equal
//Input = ["collegeee","coll","collegge"]     Output = Yes
