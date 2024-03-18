#include<stdio.h>
#include<string.h>
// //write a program to store data of various students
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main(){
//     struct student s1;
//     s1.roll=13456;
//     s1.cgpa=9.5;
//     strcpy(s1.name,"shradha");  //shradha name is assigned to name

//     struct student s1 = {13456, 9.5, "shradha"};  //shortcut

//     printf("student name is : %s\n",s1.name);
//      printf("student roll is : %d\n",s1.roll);
//       printf("student cgpa is : %f\n",s1.cgpa);

//     struct student s2;
//     s2.roll=8632937;
//     s2.cgpa=8.9;
//     strcpy(s2.name,"siera");

    // printf("student name is %s\n",s2.name);
    // printf("student roll is %d\n",s2.roll);
    // printf("student cgpa is %f\n",s2.cgpa);  
// }


// //Array of structures
// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main(){
//     struct student IT[100];
//     IT[0].roll=7138;
//     IT[0].cgpa=9.6;
//     strcpy(IT[0].name,"soumya");

//     printf("name = %s\n",IT[0].name);
//     printf("roll = %d\n",IT[0].roll);
//     printf("cgpa = %f\n",IT[0].cgpa);
// }



// //pointers to structures
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main(){
//     struct student s1 = {23636, 9.7, "tapu"};
//     struct student *ptr = &s1;
//     printf("student data= %s\n",(*ptr).name);
//     printf("student data= %d\n",*ptr);
//     printf("student data= %s\n",ptr->name);   //Arrow operator
// }



// //passing structure to function
// struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// };

// void printinfo(struct student s1);

// int main(){
//     struct student s1 = {37813,8.7,"x-Man"};
//     printinfo(s1);
//     return 0;
// }

// void printinfo(struct student s1){
//     printf("student information  \n");
//     printf("student name is %s\n",s1.name);
//     printf("student roll is %d\n",s1.roll);
//     printf("student cgpa is %f\n",s1.cgpa);
// }



// //typedef keyword
// typedef struct computerengineeringstudent{
//     int roll;
//     float cgpa;
//     char name[100];
// }coe;                     //coe is shortcut of computerengineeringstudent

// int main(){
//     coe s1;                     //to use shortcut typedef keyword is used
//     s1.roll=13456;
//     s1.cgpa=9.5;
//     strcpy(s1.name,"shradha"); 
//     printf("student name is : %s\n",s1.name);
// }


// //Take input of adress(house no,block no,city,state) of 3 people
// struct address {
//     int houseno;
//     int blockno;
//     char city[100];
//     char state[100];
// };

// void printAdd(struct address add);

// int main(){
//     struct address add[3];
//     //input
//     printf("Address of people 1 :");
//     scanf("%d",&add[0].houseno);
//     scanf("%d",&add[0].blockno);
//     scanf("%s",add[0].city);
//     scanf("%s",add[0].state);

//     printf("Address of people 2 :");
//     scanf("%d",&add[1].houseno);
//     scanf("%d",&add[1].blockno);
//     scanf("%s",add[1].city);
//     scanf("%s",add[1].state);

//     printf("Address of people 3 :");
//     scanf("%d",&add[2].houseno);
//     scanf("%d",&add[2].blockno);
//     scanf("%s",add[2].city);
//     scanf("%s",add[2].state);

//     printAdd(add[0]);
//     printAdd(add[1]);
//     printAdd(add[2]);
//     return 0;
// }

// void printAdd(struct address add){
//     printf("Address is : %d, %d, %s, %s\n",add.houseno,add.blockno,add.city,add.state);
// }



// //Create a structure to store vectors. Then make a function to return sum of two vectors.
// struct vector {
//     int x;
//     int y;
// };

// void calcsum(struct vector v1,struct vector v2,struct vector sum);

// int main(){
//     struct vector v1 = {5,8};   //5 is x-component & 8 is y-component
//     struct vector v2 = {4,9};
//     struct vector sum = {0};

//     calcsum(v1, v2, sum);
//     return 0;
// }

// void calcsum(struct vector v1,struct vector v2,struct vector sum){
//     sum.x = v1.x + v2.x;
//     sum.y= v1.y + v2.y;

//     printf("sum of x component is : %d\n",sum.x);
//     printf("sum of y component is : %d\n",sum.y);
// }



// //create a structure to store complex numbers.(use arrow operator)
// struct complex{
//     int real;
//     int img;     //imaginary part
// };

// int main(){
//     struct complex number1 = {5, 8};
//     struct complex *ptr = &number1;
//     printf("real part is : %d\n",ptr->real);
//     printf("imaginary part is : %d\n",ptr->img);
// }


// make a struct. to store Bank Account details of a customer and make an alias for it
typedef struct bankaccount{
    char name[100];
    int accountno;
}ba;

int main(){
    ba acc1 = {"satya", 6656676};
    ba acc2 = {"soumya", 98983284};
    printf("acco. holder name is : %s\n",acc1.name);
    printf("acco. no  : %d\n",acc1.accountno);
}