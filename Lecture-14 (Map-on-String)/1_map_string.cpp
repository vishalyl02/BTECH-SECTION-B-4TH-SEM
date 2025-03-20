#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main()
{
map<char,int>mp;
int n;
cin>>n;
vector<string>v1(n);
string s;
for(int i=0;i<n;i++)
{
cin>>s;
v1[i]=s;
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<v1[i].length();j++)
    {
        mp[v1[i][j]]=mp[v1[i][j]]+1;
    }
}
int vowel_count=0;
vowel_count+=mp['a'];
vowel_count+=mp['e'];
vowel_count+=mp['i'];
vowel_count+=mp['o'];
vowel_count+=mp['u'];

cout<<vowel_count<<endl;

return 0;
}