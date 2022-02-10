//strings
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string str;
    cin>>str;
    cout<<str;
    return 0;
}
//to take as sentence 
//strings
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}
//differenct types of functions in string
//apppend function
//to take as sentence 
//strings
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}
//append functions use
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    //append
    s1.append(s2);
    cout<<s1<<endl;//sachin will become ias
    cout<<s1+s2<<endl;//sachin will become ias
    s1=s1+s2;
    cout<<s1<<endl;//sachin will become ias 
    return 0;
}
//accesing or idexing in string
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    //append
    s1.append(s2);
    cout<<s1<<endl;//sachin will become ias
    cout<<s1+s2<<endl;//sachin will become ias
    s1=s1+s2;
    cout<<s1<<endl;//sachin will become ias 
    cout<<s1[3]<<endl;//h
    cout<<s2[0]<<endl;//w
    return 0;
}
//using clear function to clear the whole string

#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    s1.clear();//null value
    s2.clear();//null value
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}
//comparig the string
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    s1.clear();//null value
    s2.clear();//null value
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
    return 0;
}
//to check string is empty or not
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
	s1.clear();
	if(s1.empty()){
		cout<<"string is empty"<<endl;
	}

    return 0;
}
//to erase the value from string
//to check string is empty or not
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
	s1.clear();
	if(s1.empty()){
		cout<<"string is empty"<<endl;
	}
    s2.erase(4,6);//method to write erase function
    cout<<s2<<endl;//sachin will ias

    return 0;
}
//to find any value in string
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
	s1.clear();
	if(s1.empty()){
		cout<<"string is empty"<<endl;
	}
    s2.erase(4,6);//method to write erase function
    cout<<s2<<endl;//sachin will ias
    cout<<s2.find("ill")<<endl;

    return 0;
}
//to insert any stiring inside the string
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
	s1.clear();
	if(s1.empty()){
		cout<<"string is empty"<<endl;
	}
    s2.erase(4,6);//method to write erase function
    cout<<s2<<endl;//sachin will ias
    cout<<s2.find("ill")<<endl;
    //to insert
    s2.insert(4,"become");
    cout<<s2<<endl;//sachin will become ias


    return 0;
}
//to find the size of the string
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
	s1.clear();
	if(s1.empty()){
		cout<<"string is empty"<<endl;
	}
    s2.erase(4,6);//method to write erase function
    cout<<s2<<endl;//sachin will ias
    cout<<s2.find("ill")<<endl;
    //to insert
    s2.insert(4,"become");
    cout<<s2<<endl;//sachin will become ias
    cout<<s1.size()<<endl;
    cout<<s2.length()<<endl;
    

    return 0;
}
//the legth is useful in iterate over the every character
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
	s1.clear();
	if(s1.empty()){
		cout<<"string is empty"<<endl;
	}
    s2.erase(4,6);//method to write erase function
    cout<<s2<<endl;//sachin will ias
    cout<<s2.find("ill")<<endl;
    //to insert
    s2.insert(4,"become");
    cout<<s2<<endl;//sachin will become ias
    cout<<s1.size()<<endl;
    cout<<s2.length()<<endl;
    for(int i=0; i<s2.length(); i++){
        cout<<s2[i]<<endl;
    }
    

    return 0;
}
//to find substring of any string

//the legth is useful in iterate over the every character
#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
	s1.clear();
	if(s1.empty()){
		cout<<"string is empty"<<endl;
	}
    s2.erase(4,6);//method to write erase function
    cout<<s2<<endl;//sachin will ias
    cout<<s2.find("ill")<<endl;
    //to insert
    s2.insert(4,"become");
    cout<<s2<<endl;//sachin will become ias
    cout<<s1.size()<<endl;
    cout<<s2.length()<<endl;
    for(int i=0; i<s2.length(); i++){
        cout<<s2[i]<<endl;
    }
    string s3=s2.substr(4,6);
    cout<<s3<<endl;//bceome

    return 0;
}
//Very very important 
//to convert string to integer
//we use stoi() funtion to convert from srting to interger

#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
	s1.clear();
	if(s1.empty()){
		cout<<"string is empty"<<endl;
	}
    s2.erase(4,6);//method to write erase function
    cout<<s2<<endl;//sachin will ias
    cout<<s2.find("ill")<<endl;
    //to insert
    s2.insert(4,"become");
    cout<<s2<<endl;//sachin will become ias
    cout<<s1.size()<<endl;
    cout<<s2.length()<<endl;
    for(int i=0; i<s2.length(); i++){
        cout<<s2[i]<<endl;
    }
    string s3=s2.substr(4,6);
    cout<<s3<<endl;//bceome
 string s4 = "786";
 int x=stoi(s4);
 cout<<x+2<<endl;//788
 cout<<x+100<<endl;//886
    return 0;
}
//to convert from integer to string
//we use to_string function;

#include<iostream>
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
	s1.clear();
	if(s1.empty()){
		cout<<"string is empty"<<endl;
	}
    s2.erase(4,6);//method to write erase function
    cout<<s2<<endl;//sachin will ias
    cout<<s2.find("ill")<<endl;
    //to insert
    s2.insert(4,"become");
    cout<<s2<<endl;//sachin will become ias
    cout<<s1.size()<<endl;
    cout<<s2.length()<<endl;
    for(int i=0; i<s2.length(); i++){
        cout<<s2[i]<<endl;
    }
    string s3=s2.substr(4,6);
    cout<<s3<<endl;//bceome
 string s4 = "786";
 int x=stoi(s4);
 cout<<x+2<<endl;//788
 //convert from integer to string
 cout<<x+100<<endl;//886
  int y=9000000;
  cout<<to_string(y)<<endl;90000000
  
    return 0;
}
//to sorting of out string
//to sort any algorthim we will use 

#include<iostream>
#include<algorithm>//use for sorting the string the sort fucntion is avaliable here
#include<string>//library to include strings
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s2.compare(s1)<<endl;
	s1.clear();
	if(s1.empty()){
		cout<<"string is empty"<<endl;
	}
    s2.erase(4,6);//method to write erase function
    cout<<s2<<endl;//sachin will ias
    cout<<s2.find("ill")<<endl;
    //to insert
    s2.insert(4,"become");
    cout<<s2<<endl;//sachin will become ias
    cout<<s1.size()<<endl;
    cout<<s2.length()<<endl;
    for(int i=0; i<s2.length(); i++){
        cout<<s2[i]<<endl;
    }
    string s3=s2.substr(4,6);
    cout<<s3<<endl;//bceome
 string s4 = "786";
 int x=stoi(s4);
 cout<<x+2<<endl;//788
 cout<<x+100<<endl;//886
  int y=9000000;
  string s5;
  cout<<s5.to_string(y)<<endl;//90000000
  //program to sort s2
  sort(s2.begin(),s2.end());
  cout<<s2<<endl;
    return 0;
}
//String Challenges
//Program to convert the srting into upper and lower case both
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="sachinloveskhushbubhartitoomuch";
	//convert into uppper case
	for(int i=0; i<str.size(); i++)
	{
   	  if(str[i]>='a' && str[i]<='z')
		 {
			 str[i]-=32;
		 } 
	}
	cout<<str<<endl;
	//convert into lower case
	for(int i=0; i<str.size(); i++)
	{
   	  if(str[i]>='A' && str[i]<='Z')
		 {
			 str[i]+=32;
		 } 
	}
	cout<<str<<endl;
	return 0;
}

//program to make upper and lower using functions.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="sachinloveskhushbubhartitoomuch";
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    // same will be use for lower case
     transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;

    return 0;
}
//find the biggest number from the numeric string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="001241043784873619732652952";
    //its a very useful technique used for sorting
    //use sort function to sort a string
    //to find the maximum number similary use the minimum number for lower
    sort(str.begin(),str.end(),greater<int>());
        cout<<str<<endl;
        // for lower number we use sorting as smaller
        sort(str.begin(),str.end(),smaller<int>());
        cout<<str<<endl;
        return 0;
}
//program for find the maximum occurance character
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string st="sachinwilllovekhushbutoomuch";
    int freq[26];
    for(int i=0; i<26; i++)
    {
        freq[i]=0;
    }
    for(int i=0; i<st.size(); i++)
    {
        freq[st[i]-'a']++;
    }
    char ans='a';
    int maxF=0;
    for(int i=0; i<26; i++) {
        if(freq[i]>maxF){
            maxF=freq[i] ; 
            ans=i+'a';            
    }
          cout<<maxF<<endl;
          cout<<ans;   
   } 
}  
  
