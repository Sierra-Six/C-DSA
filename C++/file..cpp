#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    //create and open a text file
    ofstream
    myFile("file1.txt");

    //write to the file
    myFile<<"Files can be tricky,but it is fun enough!";

    //close the file
    myFile.close();

    //create a text string,which is used to output the text file
    string myText;

    //read from the text file
    ifstream
    myReadFile("file1.txt");

    //use a while loop together with the getline() function to read the file line by line
    while(getline(myReadFile,myText)){

        //output the text from the file
        cout<<myText;
    }

    //close the file
    myReadFile.close();
}