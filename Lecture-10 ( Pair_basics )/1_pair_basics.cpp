#include<iostream>
#include<utility>  // header file to use pair
#include<string>

using namespace std;

int main()
{
// Task -1 -> Create a pair with data type string and integer
pair<string,int>p1 ={"Ronny",101};

//Task -2 -> Print the data
cout<<p1.first<<" "<<p1.second<<endl;

// Task -3 -> create a pair and take the user input
pair<string,int>p2;

cin>>p2.first>>p2.second;


// Task -4  -> Printing the data
cout<<"Pair 2 data"<<p2.first<<" "<<p2.second<<endl;

// Task -5 -> If Ist pair key is greater than or equal to that of IInd pair 
// print Pair 1 else Pair 2
if(p1.first>p2.first)
cout<<"Pair 1"<<endl;
else
cout<<"Pair 2"<<endl;

// Task 6 -> Add the Ist pair key and IInd pair value and add 
//the first pair value and second pair key

// p1.first -> string , p1.second -> int
//p2.first -> string , p2.secobd -> int 

// p1.first+p2.second  -> string, int 


string s1=to_string(p2.second);

string res1=p1.first+s1;
cout<<res1<<endl;

string s2=to_string(p1.second);

string res2=p2.first+s2;

cout<<res2<<endl;

return 0;
    
}