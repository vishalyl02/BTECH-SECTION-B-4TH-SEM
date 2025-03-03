#include<iostream>
#include<string>
using namespace std;

int main()
{
// string creation
string s1;
cin>>s1;

// int res=stoi(s1);   // using string to integer function

long long val=stoll(s1);  // using string to long long function

// for(int i=0;i<s1.length();i++)
// {
//     char ch=s1[i];
//     int p=ch-'0';

//     res=res*10+p;
// }

// cout<<res<<endl;

cout<<val<<endl;

}