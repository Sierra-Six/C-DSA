#include<iostream>
#include<string>
using namespace std;

// class myClass{
// public:
//     string name;
//     int age;
// };

// int main(){
//     myClass myObj;
//     myObj.name="Jeetu";
//     myObj.age=21;
//     cout<<myObj.name<<"\n";
//     cout<<myObj.age;
// }





// class Fruit{
// public:
//     string name;
//     string color;
// };

// int main(){
//     Fruit apple;      //apple is an object of fruit data type
//     apple.name = "Apple";
//     apple.color = "Red";
//     cout<<apple.name<<" "<<apple.color<<endl;

//     //another way of defining object
//     Fruit *mango  = new Fruit();      //object pointer(here arrow operator is used instead of dot operator)
//     mango->name = "Mango";
//     mango->color = "Yellow";
//     cout<<mango->name<<" "<<mango->color<<endl;

//     return 0;
// }








// //constructor
// //It is used to initialize an object,this is a function which is called when an object is created,it have same name as class name
// //It is of 3 types i.e. default,parameterised and copy constructor

// class Rectangle{
// public:
//     int l;    //length
//     int b;    //breadth

//     Rectangle(){     //default constructor(no argument passed)
//         l=0;
//         b=0;
//     }

//     Rectangle(int x,int y){     //Parameterised constructor (some argument passed)
//         l=x;
//         b=y;
//     }

//     Rectangle(Rectangle& r){     //copy constructor(initialize an obj. by another existing obj.)
//         l = r.l;
//         b = r.b;
//     }
// };

// int main(){
//     Rectangle r1;
//     cout<<r1.l<<" "<<r1.b<<endl;

//     Rectangle r2(3,5);
//     cout<<r2.l<<" "<<r2.b<<endl;

//     Rectangle r3 = r2;
//     cout<<r3.l<<" "<<r3.b<<endl;
// }







// //Destructor
// //function is called when object is deleted
// //cannot pass any parameters,name will be   ~classname

// class Rectangle{
// public:
//     int l;    //length
//     int b;    //breadth

//     Rectangle(){     //default constructor(no argument passed)
//         l=0;
//         b=0;
//     }

//     Rectangle(int x,int y){     //Parameterised constructor (some argument passed)
//         l=x;
//         b=y;
//     }

//     Rectangle(Rectangle& r){     //copy constructor(initialize an obj. by another existing obj.)
//         l = r.l;
//         b = r.b;
//     }

//     ~Rectangle(){     //Destructor
//         cout<<"Destructor is called"<<endl;
//     }
// };

// int main(){
//     Rectangle* r1 = new Rectangle();
//     cout<<r1->l<<" "<<r1->b<<endl;
//     delete r1;                      //delete function is used only for pointer object

//     Rectangle r2(3,5);
//     cout<<r2.l<<" "<<r2.b<<endl;

//     Rectangle r3 = r2;
//     cout<<r3.l<<" "<<r3.b<<endl;
// }








// //Encapsulation
// //Binding of methods and variables together into a single unit i.e. [class]
// //It ensures data is only accessible from the class methods
// //Also leads to data abstraction/hiding,for this reason class is called Abstraction data type(ADT)

// class ABC{
//     int x;    //private data

//     public:

//     void set(int n){
//         x=n;
//     }
//     int get(){
//         return x;
//     }
// };

// int main(){
//     ABC obj1;
//     obj1.set(5);      //x can't be access directly
//     cout<<obj1.get()<<endl;
// }





//Abstraction
//It enables us to display only essential information while hiding implementation details
//e.g. pow(x,y)-displays us only x^y,but doesn't display how it works(this is called abstraction)





// //Inheritence
// //a class inherits properties of another class
// //Inheritence occurs from parent class(or super class) to child class(or sub class)

// //Access specifiers & Modes of Inheritence
// //Public  (Data and functions can be accessed from anywhere)
// //Private  (data and functions only accessible in own class)
// //Protected  (Data and functions will be accessible in own class,parent class & derived class)


// class Parent{

// //Access specifiers(public,private,protected)
// public:
//     int x;

// protected:
//     int y;

// private:
//     int z;

// };

// //mode of inheritence(public,private,protected)
// class Child1: public Parent{     //Inheriting properties of Parent publicly
//     //x will remain public
//     //y will remain protected
//     //z will not be accessible
// };

// class Child2: private Parent{    //Inheriting properties of Parent privately
//     ///x will remain private
//     //y will remain private
//     //z will not be accessible
// };

// class Child3: protected Parent{   
//     ///x will remain protected
//     //y will remain protected
//     //z will not be accessible
// };

// int main(){
//     Parent p1;
//     p1.x;

//     return 0;
// }






// //Types of inheritence

// //single inheritence

// class Parent{
// public:
//     Parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class Child: public Parent{
// public:
//     Child(){
//         cout<<"child class"<<endl;
//     }
// };

// int main(){
//     Child c;

//     return 0;
// }
// //As child class inherited from parent class so atfirst parent class will be called then child class




// //Multi-level inheritence(parent class is derived from another class)

// class Parent{
// public:
//     Parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class Child: public Parent{
// public:
//     Child(){
//         cout<<"child class"<<endl;
//     }
// };

// class GrandChild: public Child{
// public:
//     GrandChild(){
//         cout<<"Grandchild class"<<endl;
//     }
// };

// int main(){
//     GrandChild gc;

//     return 0;
// }
// //As grandchild class inherited from child class, child class inherited from parent class so atfirst parent class will be called then child class and then grandchild class





// //Multiple Inheritence (Child class is inheriting from multiple parent classes)

// class Parent1{
// public:
//     Parent1(){
//         cout<<"parent1 class"<<endl;
//     }
// };

// class Parent2{
// public:
//     Parent2(){
//         cout<<"Parent2 class"<<endl;
//     }
// };

// class Child: public Parent1, public Parent2{
// public:
//     Child(){
//         cout<<"Child class"<<endl;
//     }
// };

// int main(){
//     Child c;

//     return 0;
// }





// //Hierarchical Inheritence (One parent class have multiple child classes)

// class Parent{
// public:
//     Parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class Child1: public Parent{
// public:
//     Child1(){
//         cout<<"Child1 class"<<endl;
//     }
// };

// class Child2: public Parent{
// public:
//     Child2(){
//         cout<<"Child2 class"<<endl;
//     }
// };

// int main(){
//     Child1 c1;
//     Child2 c2;

//     return 0;
// }





//Hybrid Inheritence (combination of more than one inheritence types like:- combination of Hierarchical and multilevel inheritence)







// //Diamond problem  
// //Base class has multiple parent classes having a common ancestor class
// class Parent{
// public:
//     Parent(){
//         cout<<"parent class"<<endl;
//     }
// };

// class Child1: public Parent{
// public:
//     Child1(){
//         cout<<"Child1 class"<<endl;
//     }
// };

// class Child2: public Parent{
// public:
//     Child2(){
//         cout<<"Child2 class"<<endl;
//     }
// };

// class GrandChild: public Child1, public Child2{
// public:
//     GrandChild(){
//         cout<<"Grandchild class"<<endl;
//     }
// };

// int main(){
//     GrandChild gc;

//     return 0;
// }







//Polymorphism
//it means ability of objects/methods to take different form

//compile time polymorphism
//Function overloading (define a number of functions with same function name but they perform according to the argument passed)

// class Sum{
// public:

//     void add(int x,int y){
//         int sum = x+y;
//         cout<<sum<<endl;
//     }
//     void add(int x,int y,int z){
//         int sum = x+y+z;
//         cout<<sum<<endl;
//     }
//     void add(float x,float y){
//         float sum = x+y;
//         cout<<sum<<endl;
//     }
// };

// int main(){
//     Sum s;
//     s.add(3,7);
//     s.add(3,2,9);
//     s.add(float(2.1),float(3.4));

//     return 0;
// }





// //operator overloading  (Like sometimes '+' is used to add numbers and sometimes to concatenate strings)

// class Complex{
// public:
//     int real;
//     int img;

//     Complex(int x,int y){
//         real = x;
//         img = y;
//     }

//     Complex operator+ (Complex &c){       //this 'c' is 'c2'
//         Complex ans(0,0);
//         ans.real = real + c.real;
//         ans.img = img + c.img;
//         return ans;
//     }
// };

// int main(){
//     Complex c1(1,2);
//     Complex c2(1,3);
    
//     Complex c3 = c1+c2;
//     cout<<c3.real<<" i"<<c3.img<<endl;
// }






// //Run-time polymorphism  (child class defines a function of parent class)
// //resolved at runtime (using function overriding)
// //virtual function is used for function overiding

// class Parent{
// public:
//     virtual void print(){
//         cout<<"parent class"<<endl;
//     }
//     void show(){
//         cout<<"parent class"<<endl;
//     }
// };

// class Child: public Parent{
// public:
//     void print(){
//         cout<<"child class"<<endl;
//     }
//     void show(){
//         cout<<"child class"<<endl;
//     }
// };

// int main(){
//     Parent *p;
//     Child c;

//     p = &c;     //overriding during run time
//     p->print();
//     p->show();
    
//     //p->print() prints child class (i.e function overiding occured) but p->show prints parent class because show() function is not defined as virtual function show here function overriding didn't occur 
// }








//Friend function 
//It is a non-member function which can access private members of the class

class A{
    int x;

public:
    A(int y){
        x=y;
    }

    friend void print(A &obj);
};

void print(A &obj){
    cout<<obj.x<<endl;
};

int main(){
    A obj(5);
    //cout<<obj.x            //this will throw an error as we can't access private member
    print(obj);
}