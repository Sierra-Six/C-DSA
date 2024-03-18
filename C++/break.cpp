#include<iostream>
using namespace std;

int main(){
    //print the first multiple of 5 which is also a multiple of 7
//    for(int i=1; ;i++){
//        if(i%5 == 0 && i%7 == 0){
//         cout<<i <<endl;
//         break;
//        }
//    }
//    cout<<"Thank U"<<endl;


    //in another way
    int i = 5;
    while(true){
        if(i%7 == 0){
            cout<<i <<endl;
            break;
        }
        i+=5;
    }
    cout<<"Thank U"<<endl;
}