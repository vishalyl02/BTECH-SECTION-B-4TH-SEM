#include<iostream>
#include<utility>
using namespace std;

int main()
{
    
// Task -1 -> Create a pair with data integer and integer with values 
//  { 30, 40 }
pair<int,int>p1={30,40};

// Task -2 -> Print the data of pair

cout<<p1.first<<" "<<p1.second<<endl;

// Task -3 -> Craete three pairs

pair<int,int>p2,p3,p4;

cin>>p2.first>>p2.second;
cin>>p3.first>>p3.second;
cin>>p4.first>>p4.second;


// Task -4 -> Print the data

cout<<p2.first<<" "<<p2.second<<endl;
cout<<p3.first<<" "<<p3.second<<endl;
cout<<p4.first<<" "<<p4.second<<endl;

return 0;

}