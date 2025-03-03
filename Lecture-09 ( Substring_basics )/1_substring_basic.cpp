#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{

string str;
cin>>str;

vector<string>res;

int n=str.length();
for(int i=0;i<n;i++)
{
    string p="";
    for(int j=i;j<n;j++)
    {
      p.push_back(str[j]);
        res.push_back(p);
    }
}

for(auto it:res)
cout<<it<<endl;

return 0;


}