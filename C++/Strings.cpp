#include<iostream>
#include<string>
#include<algorithm>
#include <cstring> // Include the cstring header for strcat
#include<vector>
using namespace std;


//Strings are objects of a class std:string in c++
//used to represent sequence of characters
//in string dynamic memory allocation occurs i.e. we can decrease or increase memory size during runtime but in character array static(fixed) memory allocation occurs so we can't change during runtime



// int main(){
//     // string str = "college";
//     // string str1("wallah");

//     // cout<<str<<" "<<str1<<endl;

//     // string str;
//     // // cin>>str;                   //doesn't store string after spaces
//     // getline(cin,str);
//     // cout<<str;

//     char ch='a';
//     cout<<int(ch)<<endl;     //ascii value of 'a'
// }






//Some inbuilt string functions(reverse(),substr(),strcat(),push_back(),size(),length(),strlen())
// int main(){
    // string str="hello";
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;

    // string str ="survive";
    // cout<<str.substr(0,3)<<endl;
    // cout<<str.substr(1)<<endl;


    // //'+ operator
    // string s1="college";
    // string s2="wallah";
    // cout<<s1+s2<<endl;
    // s1 += s2;
    // cout<<s1<<endl;



    // char s1[20]="college";
    // char s2[20]="wallah";
    // strcat(s1,s2);
    // cout<<s1<<endl;
    // string str="abcd";


    // string str="abcd";
    // char ch = 'e';
    // str.push_back(ch);
    // cout<<str<<endl;
    // cout<<str.size()<<endl;
    // cout<<str.length()<<endl;


    // //strlen() is used in character array
    // char ch[20] = "abcde";
    // cout<<strlen(ch)<<endl;


//     //to_string() function is used to convert int/numeric value to string
//     //used to concatenate a number in a number
//     int num = 132;
//     string str = to_string(num);
//     str += '6';
//     cout<<str<<endl;
//     cout<<str[1];
    
// }









// //Sorting a string(using count sort)
// //Time complexity(O(n)),Aux. space is O(1)
// string countSort(string str){
//     vector<int> freq(26,0);        //size of vector is 26 and initialize with 0

//     //storing frequency of every character in string
//     for(int i=0;i<str.length();i++){
//         int index = str[i] - 'a';           //Differentiation of Ascii value occurs
//         freq[index]++;
//     }

//     //create our sorted string
//     int j=0;
//     for(int i=0;i<26;i++){
//         while(freq[i]--){
//             str[j] = i + 'a';
//             j++;
//         }
//     }

//     return str;
// }
// int main(){
//     string str;
//     cin>>str;

//     cout<<countSort(str)<<endl;
// }








// //Given two strings s and t,return true if t is an anagram of s and false otherwise
// //Constraints: string s and t only contain lower alphabetical characters
// //Time complexity O(length of string),Aux.space(O(1))
// bool isAnagram(string s1,string s2){

//     //cretate an frequency array
//     vector<int> freq(26,0);

//     //if lengths are different then they can't be anagram
//     if(s1.length() != s2.length()){
//         return false;
//     }

//     //store frequency of characters in s1 and s2
//     for(int i=0;i<s1.length();i++){
//         freq[s1[i]-'a']++;        //for s1, we are incrementing freq of char
//         freq[s2[i]-'a']--;        //for s2, we are decrementing freq of char
//     }

//     //checking if frequency of every character is 0
//     for(int i=0;i<26;i++){
//         if(freq[i] != 0){
//             return false;
//         }
//     }

//     return true;
// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;

//     if(isAnagram(s1,s2)){
//         cout<<"Strings are Anagrams";
//     }else{
//         cout<<"Strings are not Anagrams";
//     }
// }









// //Check if two given strings are isomorphic or not
// //Time complexity(O(n),n is size of string),Aux. spaceO(256)
// bool isIsomorphic(string s1,string s2){
//     vector<int> v1(128,-1);
//     vector<int> v2(128,-1);

//     if(s1.size() != s2.size()){        //if string length doesn't match
//         return false;
//     }

//     for(int i=0;i<s1.size();i++){
//         if(v1[s1[i]] != v2[s2[i]]){   //checking if value of character at idx i match in both vectors
//             return false;
//         }
//         v1[s1[i]] = v2[s2[i]] = i;    //storing string position in vectors for characters at idx i
//     }

//     return true;

// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;

//     if(isIsomorphic(s1,s2)){
//         cout<<"They are isomorphic"<<endl;
//     }else{
//         cout<<"They are not isomorphic"<<endl;
//     }
// }









// //Given an array of strings.Write a program to find the longest common prefix string amongst an array of strings
// //Concept: Atfirst sort the array(lexicographically) and find common prefix between  first and last string(that will be common prefix of all strings)

// //Time complexity for sorting(O(nlogn*m)),for while loop we can ignore the time complexity,sototal time compexity will be O(nlogn*m),Aux. space is O(1)

// string longestCommonPrefix(vector<string> &str){

//     //sorting the array of strings
//     sort(str.begin(),str.end());

//     string s1 = str[0];   //first string(of array)
//     int i=0;
//     string s2 = str[str.size()-1];   //last string(of array)
//     int j=0;

//     string ans = "";
//     while(i<s1.size() && j<s2.size()){
//         if(s1[i] == s2[j]){
//             ans += s2[i];
//             i++; j++;
//         }else{
//             break;
//         }
//     }

//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter no. of strings";
//     cin>>n;

//     cout<<"Enter strings ";
//     vector<string> str(n);
//     for(int i=0;i<n;i++){
//         cin>>str[i];
//     }

//     cout<<"Longest common prefix : "<<longestCommonPrefix(str)<<endl;
// }                                                   





// //in efficient way(i.e. without sorting)
// //Concept: keeping first string as constant and comparing it with all other strings
// //Time complexity (O(n*m)) where n=no. of strings,m=general length of strings,space=O(1)

// string longestCommonPrefix(vector<string> &str){

//     string s1 = str[0];
//     int ans_length = s1.size();

//     for(int i=1;i<str.size();i++){
        
//         int j=0;
//         while(j<s1.size() && j<str[i].size() && s1[j] == str[i][j]){    //finding the common prefix string length
//             j++;
//         }
//         ans_length = min(ans_length,j);          //updating legth of ans string
        
//     }

//     string ans = s1.substr(0,ans_length);
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter no. of strings";
//     cin>>n;

//     cout<<"Enter strings ";
//     vector<string> str(n);
//     for(int i=0;i<n;i++){
//         cin>>str[i];
//     }

//     cout<<"Longest common prefix : "<<longestCommonPrefix(str)<<endl;
// }










// //Decode an encoded string
// //Input s=3[b2[ca]] , output = bcacabcacabcaca
// //Time complexity=O(n),Space = O(n)

// string decodeString(string str){

//     string result="";

//     //traversing the innermost enclosed ring
//     for(int i=0;i<str.length();i++){
//         if(str[i] != ']'){
//             result.push_back(str[i]);
//         }else{

//             //extract string from result
//             string tempStr="";
//             while(!result.empty() && result.back() != '['){
//                 tempStr.push_back(result.back());
//                 result.pop_back();
//             }

//             //reversing the tempStr
//             reverse(tempStr.begin(),tempStr.end());

//             //remove lats char from result which is '['
//             result.pop_back();

//             //extract num from result
//             string num="";
//             while(!result.empty() && (result.back() >= '0' && result.back() <= '9')){
//                 num.push_back(result.back());
//                 result.pop_back();
//             }

//             //reversing the num string
//             reverse(num.begin(),num.end());

//             //convert the num string to integer
//             int int_num = stoi(num);

//             //inserting tempStr in result for int_num times
//             while(int_num){
//                 result += tempStr;
//                 int_num--;
//             }
//         }
//     }return result;
// }
// int main(){
//     string str;
//     cin>>str;

//     cout<<decodeString(str)<<endl;
//     return 0;
// }










// //Given a binary string and an integer k,return the maximum number of consecutive 1's in the string if you can flip at most k 0's
// //input: "0001101011",k=2     output: 7

// //sliding window technique is used
// //time complexity = O(n) where n is the length of the input string
// //space complexity = O(1)

// int longestOnes(string str,int k){
//     int start=0;
//     int end=0;
//     int zero_count=0;
//     int max_length=0;

//     for(;end<str.length();end++){
        
//         if(str[end] == '0') zero_count++;

//         while(zero_count > k){
//             if(str[start] == '0') zero_count--;
//             start++;              //contracting our window
//         }

//         //if zero_count <= k
//         max_length = max(max_length, end-start+1);
//     }

//     return max_length;

// }

// int main(){
//     string str;
//     cout<<"Enter a binary string : ";
//     cin>>str;

//     int k;
//     cout<<"Enter max flips: ";
//     cin>>k;

//     cout<<longestOnes(str,k)<<endl;
//     return 0;
// }