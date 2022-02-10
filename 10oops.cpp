//object oriented programagging
//Very very important topic
/* Class = its a blue print of attributes 
symbol 
class student {
    string name;
    int age;//these three are called data members of the class
    bool gender;
};
object = its the instance of the class
for example- student a is the object of class student.
to take attricbutes from class we use . operator
ex= 
  a.name;
  a.age;//this is taken value for the class
  a.gender;
 }
 */
//program to inrtoduction of oops
#include<iostream>
using namespace std;
//class making
class student{
    //to access it we have to make it public because by default all the data members are private
    //public making
    public:
    string name;
    int age;
    bool gender;
};
int main()
{
      student a;
      a.name = "sahin";
      a.age=22;
      a.gender = 1;
      cout<<a.name<<endl;
    
      cout<<a.age<<endl;
      
      cout<<a.gender<<endl;
      return 0;
} 
//access the elements by using array
#include<iostream>
using namespace std;
//class making
class student{
    //to access it we have to make it public because by default all the data members are private
    //public making
    public:
    string name;
    int age;
    bool gender;
};
int main()
{
      student arr[4];
      for(int i=0; i<4; i++){
          cin>>arr[i].name;
          cin>>arr[i].age;
          cin>>arr[i].gender;
      }
      for(int i=0; i<4; i++){
          cout<<arr[i].name<<"";
          cout<<arr[i].age<<"";
          cout<<arr[i].gender<<"";
		  cout<<"\n";
      }
      

      return 0;
}
//by using functions inside class
#include<iostream>
using namespace std;
//class making
class student{
    //to access it we have to make it public because by default all the data members are private
    //public making
    public:
    string name;
    int age;
    bool gender;
    void pritinfo(){
            cout<<"Name="<<""<<name<<endl;
            cout<<"Gender="<<""<<gender<<endl;
            cout<<"AGe="<<""<<age<<endl;
        cout<<"\n";
    }
};
int main()
{
      student arr[4];
      for(int i=0; i<4; i++){
          cin>>arr[i].name;
          cin>>arr[i].age;
          cin>>arr[i].gender;
      }
      for(int i=0; i<4; i++){
          arr[i].pritinfo();
      }

      return 0;
} 
//note = if we write functions inside the class to acces private data members then we will be able to acces private date members
//program to access private member using fucntions
#include<iostream>
using namespace std;
//class making
class student{
    string name;
    int age;
    bool gender;
    void setname(string n,int a,bool g){
        name = n;
        age = a;
        gender= g;
    }
    void pritinfo(){
            cout<<"Name="<<""<<name<<endl;
            cout<<"Gender="<<""<<gender<<endl;
            cout<<"AGe="<<""<<age<<endl;
        cout<<"\n";
    }
};
int main()
{
      student arr[4];
      for(int i=0; i<4; i++){
          string s;
          cin>>s;
          arr[i].setname(s);
          int n;
          cin>>n;
          arr[i].setname(n);
          bool g;
          cin>>g;
          arr[i].setname(g);
      }
      for(int i=0; i<4; i++){
          arr[i].pritinfo();
      }

      return 0;
} 
//program to make values at the same instances.
//for specify the values at the declaration we use constructor
//constructor = when we make object of any class then the constructor will automatically call.
#include<iostream>
using namespace std;
//class making
class student{
    string name;
	public:
    int age;
    bool gender;
	//there is no return type in constructor
    student(string n){
        name = n;
    }
    void getname(){
        cout<<name<<endl;
    }
};
int main()
{
      student a("Sachin");
      a.getname();
      return 0;
}
//program to get many instance of private member at a time.

#include<iostream>
using namespace std;
//class making
class student{
    string name;
	int age;
    bool gender;
	public:
	//there is no return type in constructor
    student(string n,int a,bool g){
        name = n;
        age =a;
        gender=g;
    }
    void getname(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
};
int main()
{
      student a("Sachin",22,1);
      a.getname();

      return 0;
}
//program for many objects

#include<iostream>
using namespace std;
//class making
class student{
    string name;
	
    int age;
    bool gender;
	public:
	//there is no return type in constructor
    student(string n,int a,bool g){//this constructor would be called parameterised constructor
        name = n;
        age =a;
        gender=g;
    }
    void getname(){
		cout<<"Name="<<"";
        cout<<name<<endl;
		cout<<"age="<<"";
        cout<<age<<endl;
		cout<<"Gender"<<"";
        cout<<gender<<endl;
    }
};
int main()
{
      student a("Sachin",22,1);
      student b("ritk",21,1);
      student c("khushbu",23,0);
      student d("Narender",25,1);
      a.getname();
      b.getname();
      c.getname();
      d.getname();

      return 0;
}
//BY deafualt constructor = in this type of constructor if we do not pass any parameter then its called default constructor.

#include<iostream>
using namespace std;
//class making
class student{
    string name;
	
    int age;
    bool gender;
	public:
    //default constructor making
    student(){
        cout<<"Default constructor";
    }
	//there is no return type in constructor
    student(string n,int a,bool g){
        name = n;
        age =a;
        gender=g;
    }
    void getname(){
		cout<<"Name="<<"";
        cout<<name<<endl;
		cout<<"age="<<"";
        cout<<age<<endl;
		cout<<"Gender"<<"";
        cout<<gender<<endl;
    }
};
int main()
{
      student a("Sachin",22,1);
      student b("ritk",21,1);
      student c("khushbu",23,0);
      student d("Narender",25,1);
      //copy constructor making
      student e=c;
      a.getname();
      b.getname();
      c.getname();
      d.getname();
      e.getname();

      return 0;
}
//default copy constructor making

#include<iostream>
using namespace std;
//class making
class student{
    string name;
	
    int age;
    bool gender;
	public:
    //default constructor making
    student(){
        cout<<"Default constructor";
    }
	//there is no return type in constructor
    student(string n,int a,bool g){
        name = n;
        age =a;
        gender=g;
    }
    //default copy construtor making
    student(student &d){
        cout<<"copy constructor"<<endl;
        name=d.name;
        age=d.age;
        gender=d.gender;
    }
    void getname(){
		cout<<"Name="<<"";
        cout<<name<<endl;
		cout<<"age="<<"";
        cout<<age<<endl;
		cout<<"Gender"<<"";
        cout<<gender<<endl;
    }
};
int main()
{
      student a("Sachin",22,1);
      student b("ritk",21,1);
      student c("khushbu",23,0);
      student d("Narender",25,1);
      //copy constructor making
      student e=c;
      a.getname();
      b.getname();
      c.getname();
      d.getname();
      e.getname();

      return 0;
}
//difference between default copy constructor and copy constructor.
//shallow and deep copy 
/* shallow copy = pointer access but location not acces or copy in default constructor.

Deep copy = pointer access and location  acces or copy in copy constructor.
*/
//distructor = it will call automatically same as constructor when  any object will destroy.
/* symbol for distrutcor= 
 
        ~classname(){
            no parametrs can be passed
            nothing can be return in distructor
        }
*/

#include<iostream>
using namespace std;
//class making
class student{
    string name;
	
    int age;
    bool gender;
	public:
    //default constructor making
    student(){
        cout<<"Default constructor";
    }
	//there is no return type in constructor
    student(string n,int a,bool g){
        name = n;
        age =a;
        gender=g;
    }
    //default copy construtor making
    student(student &d){
        cout<<"copy constructor"<<endl;
        name=d.name;
        age=d.age;
        gender=d.gender;
    }
    //distructor making
    ~student(){
        cout<<"Distructor called"<<endl;
    }
    void getname(){
		cout<<"Name="<<"";
        cout<<name<<endl;
		cout<<"age="<<"";
        cout<<age<<endl;
		cout<<"Gender"<<"";
        cout<<gender<<endl;
    }
};
int main()
{
      student a("Sachin",22,1);
      student b("ritk",21,1);
      student c("khushbu",23,0);
      student d("Narender",25,1);
      //copy constructor making
      student e=c;
      a.getname();
      b.getname();
      c.getname();
      d.getname();
      e.getname();

      return 0;
}

/* Operator Overloading = to make or behave a operator in a particluar way which normally not do.
is calle operator overloading.
*/

#include<iostream>
using namespace std;
//class making
class student{
    string name;
	
    int age;
    bool gender;
	public:
    //default constructor making
    student(){
        cout<<"Default constructor";
    }
	//there is no return type in constructor
    student(string n,int a,bool g){
        name = n;
        age =a;
        gender=g;
    }
    //default copy construtor making
    student(student &d){
        cout<<"copy constructor"<<endl;
        name=d.name;
        age=d.age;
        gender=d.gender;
    }
    //distructor making
    ~student(){
        cout<<"Distructor called"<<endl;
    }
    void getname(){
		cout<<"Name="<<"";
        cout<<name<<endl;
		cout<<"age="<<"";
        cout<<age<<endl;
		cout<<"Gender"<<"";
        cout<<gender<<endl;
    }
    
    //operator overloading function make
    bool operator ==(student &a){
        if(name=a.name , age=a.age , gender=a.gender){
            return true;

		}
            return false;
        
    }
};
int main()
{
      student a("Sachin",22,1);
      student b("ritk",21,1);
      student c("khushbu",23,0);
      student d("Narender",25,1);
      //copy constructor making
      student e=c;
      a.getname();
      b.getname();
      c.getname();
      d.getname();
      e.getname();
	  
      
      //using operator overloading here
      if(e==a){
          cout<<"Same"<<endl;
      }
      else{
          cout<<"Not Same"<<endl;
      }

      return 0;
}

//IMPORTANT CONCEPTS OF OOPS = 
/* ENCAPSULATION = MEANS HINDING THE SENSTIVE DATA FROM USER.
ACCESS MODIFIERS = THERE ARE BASICALLY THREE TYPES OF ACCES MODIFIERS.


1.PRIVATE
2.PUBLIC.
3.PROTECTED.

PUBLIC:OBJECTS CAN ACCESS THE DATA MEMBERS AND MEMBERS FUNCTION inside and also FROM OUTSIDE OF THE CLASS

PRIVATE : OBJECTS CAN NOT ACCES DATA MEMBERS AND MEMBER FUNCTIONS FROM OUTSIDE OF THE CLASS.THEY
CAN ONLY ACCESS PRIVATE INSIDE THE CLASS.

PROTECTED:OBJECTS CAN NOT ACCES DATA MEMBERS AND MEMBER FUNCTIONS FROM OUTSIDE OF THE CLASS.THEY
CAN ONLY ACCESS PRIVATE INSIDE THE CLASS AND INSIDE INHERTIED CLASS.

ADVANTAGES OF ENCAPSULATIONS
.GOOD IN CODING PRATICE AND FOR INTERVIEW
.INCREASE SECURITY OF OUR DATA.
*/


/* INHERITANCE : ITS IS POSSIBLE TO INHERIT THE ATTRIBUTES AND THE METHODS FROM ONE CLASS TO ANOTHER.
THERE ARE TWO CLASSES.
BASE CLASS(PARENT CLASS)=THE CLASS BEING INHERITED IS CALLED BASE CLASS.
DERIVED CLAS(CHILD CLASS)= THE CLASS THAT INHERITES FROM ANOTHER CLASS IS CALLED DERIVED CLASS.

1.THERE ARE VARIOU TYPES OF INHERITANCE 
1.SINGLE INHERITANCE
2.MUTIPLE INHERITANCE
3.MULTILEVEL INHERITANCE
4.HYBRID INHERITANCE
5.HIERARICHAL INHERITANCE


*/
//SINGLE INHERTIANCE FROM CLASS A TO B.
#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"Iherited class";
    }
};   
 //iheritance now apply 
 class B:public A{

 
};

 int main()
 {

   B b;
   b.fun();
   return 0;
 }

 //Mutltiple inhertance 
 //A AND B FROM CLASS C
 #include<iostream>
using namespace std;
class C{
    public:
    void fun(){
        cout<<"Iherited class"<<endl;
    }
};   
 //iheritance now apply 
 class B:public C{

 
};
class A:public C{

};

 int main()
 {

   B b;
   b.fun();
   A a;

   a.fun();
   return 0;
 }
      
//multilevel inheritance = class c derived the attributes from B and class B derived the attributes from A
 //Mutltiple inhertance 
 //A AND B FROM CLASS C
 #include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"Iherited class"<<endl;
    }
};   
 //iheritance now apply 
 class B:public A{
     public:
     void func(){
         cout<<"B inhertied";
     }

 
};
class C:public B{

};

 int main()
 {

   C c;
   c.fun();
   c.func();
   return 0;
 }
 //HYbrid inheritance = mixture of one or two types of inheritance .


/*POLYMORPHSIM IN OOPS = POLY = MANY  AND MORPHISM = FORM.
 THERE ARE TWO TYPES OF POLYMORPHISM 
 1.COMPILE TIME  = IT HAS TWO TYPES
   FUNCTION OVERLOADING  & OPERATOR OVERLOADING 
 2.RUN TIME= IT HAS VIRTUAL FUNCTIONS OR OPERATOR OVERRODING

 .FUNCTION OVERLOADING = WHEN THERE DIFFERENET FUNCTIONS WITH SAME NAME BUT HAVE DIFFERENET NUMBER 
 OF ARGUMENTS.OR DIFFERENT TYPES OF ARGUMENTS.

 .VIRTUAL FUNCTION = WHEN BASE AND DERIVED CLASS HAVE SAME FUNCTION THEN COMPILER CONFUSE AND WE SPECIY
 VIRTUAL KEYWORD IN BASE CLASS MAINLY.
 */
 //function overloading
 #include<iostream>
 using namespace std;
 class funct{
     public:
     //function overloading applied
     void fun(){
         cout<<"function with no argument"<<endl;
     }
     void fun(int x){
         cout<<"function with int argument"<<endl;
     }
     void fun(double d){
         cout<<"function with double argument"<<endl;
     }
 };
 int main()
 {
     funct f;
     f.fun();
     f.fun(5);
     f.fun(9.2);
     return 0;

 }
 


      

      



