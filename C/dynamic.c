#include<stdio.h>
#include<stdlib.h>
// int main(){
//     printf("size is : %d\n",sizeof(int));
//     printf("size is : %d\n",sizeof(float));
//     printf("size is : %d",sizeof(char));
//     return 0;
// }


// // malloc()---function
// int main(){
//     int *ptr;
//     ptr = (int*)malloc(5 * sizeof(int));   //5*4=20 bytes memory stored

//     ptr[0]=1;
//     ptr[1]=3;
//     ptr[2]=5;
//     ptr[3]=7;
//     ptr[4]=9;

//     for(int i=0;i<5;i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }



// //write  a program to allocate memory to store 5 prices
// int main(){
//     float *ptr;
//     ptr = (float*)malloc(5 * sizeof(float));   //5*4=20 bytes memory reserved

//     ptr[0]=1;
//     ptr[1]=3;
//     ptr[2]=5;
//     ptr[3]=7;
//     ptr[4]=9;

//     for(int i=0;i<5;i++){
//         printf("%f\n",ptr[i]);
//     }
//     return 0;
// }



// //calloc()----function
// int main(){
//     float *ptr;
//     ptr = (float*)calloc(5 , sizeof(float));   //5 places reserved and each of 4 bytes

//     ptr[0]=1;
//     ptr[1]=3;
//     ptr[2]=5;
//     ptr[3]=7;
//     ptr[4]=9;

//     for(int i=0;i<5;i++){
//         printf("%f\n",ptr[i]);
//     }
//     return 0;
// }



// //WAP to allocate memory of size n, where n is entered by the user
// int main(){
//     int *ptr;
//     int n;
//     printf("enter n : ");
//     scanf("%d",&n);

//     ptr = (int*)calloc(n , sizeof(int));

//     for (int i=0;i<n;i++){
//         printf("%d\n",ptr[i]);
//     }
// }



// //free()--->function
// int main(){
//     int *ptr;
//     int n;
//     printf("enter n : ");
//     scanf("%d",&n);

//     ptr = (int*)calloc(n , sizeof(int));

//     for (int i=0;i<n;i++){
//         printf("%d\n",ptr[i]);
//     }

//     free(ptr);     //to free or erase memory

//     ptr = (int*)calloc(2 , sizeof(int));
//     for(int i=0;i<2;i++){
//         printf("%d\n",ptr[i]);
//     }
// }



// //realloc()--->function
// //allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
// int main(){
//     int *ptr;
//     ptr = (int*)calloc(5 , sizeof(int));

//     printf("enter 5 numbers : ");
//     for(int i=0;i<5;i++){
//         scanf("%d",&ptr[i]);
//     }

//     ptr = realloc(ptr , 8);
//     printf("enter 8 numbers : ");
//     for(int i=0;i<8;i++){
//         scanf("%d",&ptr[i]);
//     }

//     for(int i=0;i<8;i++){
//         printf("number %d is : %d\n",i,ptr[i]);
//     }
// }



// //create an array of size 5(using calloc) & enter its values from the user
// int main(){
//     int *ptr;
//     ptr = (int*)calloc(5 , sizeof(int));

//     printf("enter 5 numbers : ");
//     for(int i=0;i<5;i++){
//         scanf("%d",&ptr[i]);
//     }
    
//     //output
//     for(int i=0;i<5;i++){
//         printf("number %d is : %d\n",i,ptr[i]);
//     }
// }



//Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.
int main(){
    int *ptr;
    ptr = (int*)calloc(5 , sizeof(int));

    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;

    for(int i=0;i<5;i++){
       printf("%d\n",ptr[i]);
    }

    ptr = realloc(ptr , 6);

    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    ptr[5]=12;

    for(int i=0;i<6;i++){
        printf("%d\n",ptr[i]);
    }

    free(ptr);
    return 0;
}