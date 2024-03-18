#include<iostream>
using namespace std;

// int main(){
    // int x=18,y=23;
    // float z=7.5;
    // cout<<&x<<" "<<&y<<" "<<&z<<endl;      //address-of operator(&x)


    // int *ptr=&x;
    // float *ptr1=&z;
    // cout<<ptr<<" "<<ptr1<<" ";


    // //in another way
    // int *ptr;
    // int marks=90;
    // ptr=&marks;        //pre-declared
    // cout<<ptr;



//     int x=10;
//     int *ptr=&x;
//     cout<<"address stored in ptr is : "<<ptr<<endl;      
//     cout<<"value stored in ptr is : "<<*ptr<<endl;            //de-reference operator(*) is used to access the value present in that address
//     x=23;
//     cout<<"updated value is : "<<*ptr<<endl;
//     *ptr=89;
//     cout<<"new value of x is : "<<x<<endl;

//     int value=*ptr;
//     cout<<value;

//     return 0;
// }





// //Adding numbers using pointer
// int main(){
//     int x,y;
//     cin>>x>>y;

//     int *ptr1=&x;
//     int *ptr2=&y;

//     int result;
//     int *ptr_result=&result;

//     *ptr_result=*ptr1+*ptr2;
//     cout<<result<<" "<<*ptr_result<<endl;
    
//     cout<<&ptr1;          //print address of pointer itself
// }





// //pass by value & pass by reference
// void swap(int &x,int &y){
//     int c=x;
//     x=y;
//     y=c;
// }
// int main(){
//     int x=17;
//     int y=43;

//     swap(x,y);
//     cout<<"x = "<<x<<"  "<<"y =  "<<y;
//     return 0;
// }



// //find first and last occurence of a character in a given array
// int main(){
//     string s = "aaabbac";
//     int ch = 'a';
//     int first_index;
//     int last_index;
//     for(int i=0;i<s.size();i++){
//         if(s[i]==ch){
//             first_index=i;
//             break;
//         }
//     }
//     for(int i=s.size()-1;i>0;i--){
//         if(s[i]==ch){
//             last_index=i;
//             break;
//         }
//     }
//     cout<<"First index is : "<<first_index<<endl<<"Last index is : "<<last_index;
//     return 0;
// }






// pointer arithmatic
int main(){
    // int x=4;
    // int *ptr=&x;

    // cout<<ptr<<"  "<<ptr+1;    //address value increased by four because of integer type(4 bytes)

    // int arr[]={1,13};
    // int *ptr=&arr[0];

    // cout<<ptr<<"  "<<*ptr<<endl;
    // cout<<ptr+1<<"  "<<*(ptr+1);


    
    // int x=8;
    // int *ptr=&x;

    // cout<<(*ptr)++<<"\n";      //post increment
    // cout<<*ptr<<"\n";

    // cout<<++(*ptr)<<"\n";      //pre increment
    // cout<<*ptr;


    // //in array
    // int arr[]={34,67};
    // int*ptr=&arr[0];
    // cout<<*ptr++<<endl;         //post increment(of index)
    // cout<<*ptr<<endl;

    int arr[]={34,67};
    int*ptr=&arr[0];
    cout<<*++ptr<<endl;            //pre increment (of index)
    cout<<*ptr<<endl;
    cout<<++*ptr<<endl;
    cout<<*ptr;
}





//Arrays as pointer
// int main(){
//     int arr[]={12,34,89};
//     int *ptr=&arr[0];
//     cout<<ptr<<"  "<<arr<<"  "<<*ptr<<"  "<<*arr<<endl;
    
//     cout<<*(arr+0)<<"  "<<*(arr+1)<<"  "<<*(arr+2);
// }


// int main(){
//     int arr[]={2,4,6,8,9};
//     int *ptr=(arr+2);
//     cout<<*ptr<<endl;
//     *ptr++;
//     cout<<*ptr<<endl;
//     *ptr--;
//     cout<<*ptr<<endl;
//     return 0;
// }






// //Types of pointer
// int main(){
//     // //1.wild pointer(a type of pointer where the user declare the pointer but not initialize it)
//     // int *ptr;        
//     // cout<<ptr<<" "<<*ptr;             //here ptr stores some garbage or random value


//     // //2.Null pointer(which get declared but will get address later to store)
//     // int *ptr = NULL;             //No garbage value will store.
//     // cout<<ptr<<" "<<*ptr;


//     //3.Void pointer(a special pointer that can point to any datatype value)
//     int x=10;
//     float f=12.56;
//     void *ptr=&f;
//     ptr=&x;                //i.e. any datatype value can be stored
//     //void pointer cannot be dereferenced(i.e. cannot get output value of *ptr as no particular value is defined)
//     int *integerpointer=(int *)ptr;
//     cout<<*integerpointer;
//     return 0;
// }
