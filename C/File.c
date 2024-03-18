#include<stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("hello.txt","r");
//     if(fptr==NULL){
//         printf("File doesnot exist");
//     }else{
//         fclose(fptr);
//     }
//     return 0;
// }


// int main(){
//     FILE *fptr;
//     fptr = fopen("hello.txt","w");
//     if(fptr==NULL){
//         printf("File doesnot exist");
//     }else{
//         fclose(fptr);
//     }
//     return 0;
// }




// int main(){
//     FILE *fptr;
//     fptr = fopen("hell.txt","r");
    
//     int ch;
//     fscanf(fptr, "%d", &ch);
//     printf("Character = %d\n",ch);
//     fscanf(fptr, "%d", &ch);
//     printf("Character = %d\n",ch);
//     fscanf(fptr, "%d", &ch);
//     printf("Character = %d\n",ch);
//     fscanf(fptr, "%d", &ch);
//     printf("Character = %d\n",ch);
//     fclose(fptr);
    
//     return 0;
// }


// int main(){
//     FILE *fptr;
//     fptr = fopen("hell.txt","w");
    
//     int ch;
//     fprintf(fptr, "%c", 'A');
//     fprintf(fptr, "%c",'p' );
//     fprintf(fptr, "%c", 'p');
//     fprintf(fptr, "%c", 'l');
//     fprintf(fptr, "%c", 'e');
//     fclose(fptr);
    
//     return 0;
// }



// int main(){
//     FILE *fptr;
//     fptr = fopen("hell.txt","a");
    
//     int ch;
//     fprintf(fptr, "%c", 'A');
//     fprintf(fptr, "%c",'p' );
//     fprintf(fptr, "%c", 'p');
//     fprintf(fptr, "%c", 'l');
//     fprintf(fptr, "%c", 'e');
//     fclose(fptr);
    
//     return 0;
// }



//fgets(used to read) & fputc(used to write)
// int main(){
//     FILE *fptr;
//     fptr = fopen("hell.txt","r");
    
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     printf("%c\n",fgetc(fptr));
//     fclose(fptr);
//     return 0;
// }

// //to write
// int main(){
//     FILE *fptr;
//     fptr = fopen("hell.txt","w");
    
//     fputc('m', fptr);
//     fputc('a', fptr);
//     fputc('n', fptr);
//     fputc('g', fptr);
//     fputc('o', fptr);
//     return 0;
// }



// //to read whole paragraph
// int main(){
//     FILE *fptr;
//     fptr = fopen("hell.txt","r");
//     char ch;
//     ch=fgetc(fptr);
//     while(ch != EOF){         //EOF(end of file)
//         printf("%C",ch);
//         ch=fgetc(fptr);        //to read next letter and then print(by printf function)
//     }
//     printf("\n");

//     fclose(fptr);
//     return 0;
// }



// //Make a program to input student information from a user & enter it to a file.
// int main(){
//     FILE *fptr;
//     fptr = fopen("student.txt","w");

//     char name[100];
//     int age;
//     float cgpa;
    
//     printf("enter name : ");
//     scanf("%s",&name);
//     printf("enter age : ");
//     scanf("%d",&age);
//     printf("enter cgpa : ");
//     scanf("%f",&cgpa);

//     fprintf(fptr, "student name : %s\t", name);
//     fprintf(fptr, "student age : %d\t",age);
//     fprintf(fptr, "student cgpa : %f\t",cgpa);

//     fclose(fptr);
//     return 0;
// }



// //write a program to write all the odd numbers from 1 to n in a file.
// int main(){
//     FILE *fptr;
//     fptr = fopen("odd.txt","w");

//     int n;
//     printf("enter n : ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         if(i%2 != 0){
//            fprintf(fptr, "%d\t", i);
//         } 
//     }
//     fclose(fptr);
//     return 0;
// }


//2 numbers - a&b , are written in a file. write a program to replace them with their sum.
int main(){
    FILE *fptr;
    fptr = fopen("sum.txt","r");
    int a;
    fscanf(fptr, "%d", &a);   //read the data(number) of file then assigned to a
    int b;
    fscanf(fptr, "%d", &b);

    fclose(fptr);

    fptr = fopen("sum.txt","w");
    fprintf(fptr, "%d", a+b);
    fclose(fptr);

    return 0;
}