#include<stdio.h>
// int main(){
    // int marks[4]={45,56,78,34};
    // printf("%d\n %d\n %d\n %d\n",marks[0],marks[1],marks[2],marks[3]);

    // int marks[3] ;
    // printf("enter phy= ");
    // scanf("%d",&marks[0]);

    // printf("enter chem= ");
    // scanf("%d",&marks[1]);

    // printf("enter math= ");
    // scanf("%d",&marks[2]);

    // printf("phy= %d ,chem= %d ,math= %d\n",marks[0],marks[1],marks[2]);
    // printf("total mark is= %d\n",marks[0]+marks[1]+marks[2]);



//     int aadhar[5];
//     //input
//     int *ptr=&aadhar[0];
//     for(int i=0;i<5;i++){
//         printf("%d index= ",i);
//         scanf("%d",&aadhar[i]);
//     }
//     //output
//     for(int i=0;i<5;i++){
//         printf("%d index is %d\n",i,aadhar[i]);
//     }
//     return 0;
// }


// //array as function argument
// void printnumbers(int arr[],int n);

// int main(){
//     int arr[]={5,6,7,3,9};
//     printnumbers(arr,5);
//     return 0;
// }

// void printnumbers(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }


// //2D array  
// int main(){              //print marks of three subjects of two students
//     int marks[2][3];     //---/---(2*3)
//     marks[0][0]=90;     //fist subject mark of first student
//     marks[0][1]=97;      //second subject mark of first student
//     marks[0][2]=69;

//     marks[1][0]=59;      //fist subject mark of second student
//     marks[1][1]=80;
//     marks[1][2]=50;

//     printf("%d",marks[1][0]);
//     return 0;
// }


//practice questions
// //write a function to count the number of odd numbers in an array
// int countodd(int arr[],int n);

// int main(){
//     int arr[]={4,5,6,7,8};
//     printf("odds numbers are : %d\n",countodd(arr,5));
//     return 0;
// }

// int countodd(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2 != 0){
//             count++;
//         }
//     }
//     return count;
// }


// int main(){
//     int arr[]={3,4,5,6,7};
//     printf("%d\n",*(arr+3)); //0+3=3 i.e.4th value
//     printf("%d\n",*(arr+5));
//     return 0;
// }


// //print reverse of an array
// void reverse(int arr[],int n);
// void printarr(int arr[],int n);

// int main(){
//     int arr[]={3,4,5,6,7};
//     reverse(arr,5);
//     printarr(arr,5);
//     return 0;
// }
// void printarr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
// }

// void reverse(int arr[],int n){
//     for(int i=0;i<n/2;i++){
//         int firstvalue=arr[i];
//         int secondvalue=arr[n-i-1];
//         arr[i]=secondvalue;
//         arr[n-i-1]=firstvalue;
//     }
// }


// //print first n numbers of fibonacci numbers
// int main(){
//     int n;
//     printf("enter n (n>2) : ");
//     scanf("%d",&n);
//     int fib[n];
//     fib[0]=0;
//     fib[1]=1;
//     printf("%d\t %d\t",fib[0],fib[1]);

//     for(int i=2;i<n;i++){
//         fib[i]=fib[i-1]+fib[i-2];
//         printf(" %d\t",fib[i]);
//     }

// } 


//create a 2D array,storing the tables of 2 & 3
void storetable(int arr[][10],int n,int m,int number);

int main (){
    int tables[2][10];  //two rows in 10 columns
    storetable(tables,0,10,2);
    storetable(tables,1,10,3);

    for(int i=0;i<10;i++){
        printf("%d\t",tables[0][i]);
    }
    printf("\n");
    
    for(int i=0;i<10;i++){
        printf("%d\t",tables[1][i]);
    }
    printf("\n");

}

void storetable(int arr[][10],int n,int m,int number){
    for(int i=0;i<m;i++){
        arr[n][i]=number*(i+1);
    }
}