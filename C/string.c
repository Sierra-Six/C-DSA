#include<stdio.h>
#include<string.h>
//create a string *firstname* & *lastname* to store details of user & print all the characters using a loop
// void printstring(char arr[]);

// int main(){
//     char firstname[]="Satya";
//     char lastname[]="ranjan palai";

//     printstring(firstname);
//     printstring(lastname);
//     return 0;
// }
// void printstring(char arr[]){
//     for(int i=0;arr[i] != '\0' ;i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// } 


//string format specifier
// int main(){
    // char name[50];
    // printf("enter name");
    // scanf("%s",name);    //as name(array) itself is a pointer so '&'is not given

    // printf("%s",name);


    // //happy birthday print
    // char name[40];
    // printf("enter name");
    // scanf("%s",name);

    // for(int i=1;i<5;i++){
    //     printf("Happy birthday %s\n",name);
    // }

//   //gets()&puts() are used to print multi word sentence
//     char str[60];
//     printf("enter sentence");
//     // gets(str);   //input(fgets also used instead of gets)
//     fgets(str,100,stdin);
//     puts(str);    //output

    // return 0;
// }


// //make a program that input users name & print its length
// int countlength(char arr[]);

// int main(){
//     char name[100];
//     fgets(name,100,stdin);
//     printf("length is %d",countlength(name));
//     return 0;
// }

// int countlength(char arr[]){
//     int count=0;
//     for (int i=0;arr[i] != '\0';i++){
//         count++;                      //here it also count null character(\0),so count-1 is taken for return
//     }
//     return count-1;
// }


//library functions
// int main(){
    //   //strlen()
    // char name[]="satya";
    // int length=strlen(name);       //strlen() is used to count length(for this must include string.h library function)

    // printf("length is : %d",length);


    //    //strcpy()
    //  char oldstr[] = "satya";
    //  char newstr[] = "ranjan";
    //  strcpy(newstr , oldstr);  //i.e. oldstring value is assigned to newstring value so newstr value changes in output
    //  puts(newstr);  


    //    //strcat()
    //   char firststr[]="satya";
    //   char secstr[]="ranjan"; 
    //   strcat(firststr , secstr);  //concatenates first string with second string
    //   puts(firststr);


    //    //strcmp()
    //     char firststr[]="apple";
    //     char secstr[]="banana";
    //     strcmp(firststr , secstr);  //compare two strings & return a value(0 for equal,-ve for first<sec , +ve for first>sec,,compares ascii value)
    //     printf("%d",strcmp(firststr , secstr)); //-ve as ascii value of 'a' is less than 'b'
// }


// //Take a string input from the user using %c
// int main() {
//     char str[100];
//     char ch;
//     int i=0;

//     while(ch != '\n'){
//         scanf("%c",&ch);
//         str[i]=ch;
//         i++;
//     }
//     str[i]= '\0';
//     puts(str);
// }


//Salting
//Find the salted form of a password entered by user if the salt is "123" & added at the end
// int main(){
//     char password[100];
//     printf("enter password");
//     scanf("%s",password);

//     printf("salted password is %s123",password);
//     return 0;
// }

// //or
// void salting(char password[]);

// int main(){
//     char password[100];
//     scanf("%s",password);
//     salting(password);
//     return 0;
// }

// void salting(char password[]){
//     char salt[]="123";
//     char newpassword[200];

//     strcpy(newpassword , password);   //newpassword=password
//     strcat(newpassword , salt);       newpassword=newpassword+salt
//     puts(newpassword);
// }


// //write a function named *slice* , which takes a string & returns a sliced string from index n to m 
// void slice(char str[] ,int n ,int m);

// int main(){
//     char str[100];
//     scanf("%s",str);
//     slice(str,4,9);
//     return 0;
// }

// void slice(char str[] ,int n ,int m){
//      char newstr[100];
//      int j=0;
//      for( int i=n ;i<=m;i++,j++){  //j index is used for newstr
//          newstr[j] = str[i];
//      }
//     newstr[j] ='\0';
//      puts(newstr);
// }


// //write a function to count the occurence of vowel in a string
// int countvo(char str[]);

// int main(){
//     char str[100];
//     scanf("%s",str);
//     printf("count is %d",countvo(str));
//     return 0;
// }

// int countvo(char str[]){
//     int count=0;
//     for(int i=0 ;str[i] != '\0';i++){
//         if(str[i] == 'a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u'){
//             count++;
//         }
//       }
//      return count;
    
// }


//check if a given character is present in a string or not
void check(char str[] ,char ch);

int main(){
    char str[]="helloworld";
    char ch = 'd';
    check(str,ch);
    return 0;

}

void check(char str[] ,char ch){
    for(int i=0;str[i] != '\0';i++){
        if(str[i] ==ch){
            printf("character is present");
            return;
        }
    }
    printf("character is absent");
      
}
