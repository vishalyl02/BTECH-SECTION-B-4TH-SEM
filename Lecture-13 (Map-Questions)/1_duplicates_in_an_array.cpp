#include<iostream>
#include<map>
#include<vector>
#include<utility>
using namespace std;

int main()
{

map<int,int>mp;

vector<int>v1;

int n,x;
cin>>n;

for(int i=0;i<n;i++)
{
    cin>>x;
    v1.push_back(x);
}

for(int i=0;i<n;i++)
{
    mp[v1[i]]=mp[v1[i]]+1;
}
int count=0;
for(pair<int,int> p:mp)
{
    cout<<p.first<<" "<<p.second<<endl;
if(p.second>1)
count++;
}
cout<<count<<endl;
return 0;
}