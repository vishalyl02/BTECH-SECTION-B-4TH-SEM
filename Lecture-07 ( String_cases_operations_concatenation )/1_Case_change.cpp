#include<iostream>
#include<string>
using namespace std;
int main()
{
//Task -1 -> Declare a empty string
string str="";
// Task -2 -> Take the user input
cin>>str;
// Task -3 -> Print the ASCII value for each characters
int n=str.length();
for(int i=0;i<n;i++)
{
    int val=str[i];
    cout<<val<<" ";
}
// Task -4 -> Convert all lower case to upper case and vice-versa
cout<<endl;
for(int i=0;i<n;i++)
{
    if(str[i]>='A' && str[i]<='Z')
    str[i]=str[i]+32;
    else if(str[i]>='a' && str[i]<='z')
    str[i]=str[i]-32;
    cout<<str[i]<<" ";
}


return 0;



}
