//  https://leetcode.com/problems/jewels-and-stones/description/


#include<iostream>
#include<map>
#include<string>
using namespace std;

int find_values(string st,string jw)
{
    map<char,int>mp;
    for(int i=0;i<st.length();i++)
    {
        mp[st[i]]=mp[st[i]]+1;
    }
    int count=0;
    for(int i=0;i<jw.length();i++)
    {
        count+=mp[jw[i]];
    }
    return count;
}




int main()
{
    string jw,st;
    cin>>jw>>st;

   
    cout<<find_values(st,jw)<<endl;
    return 0;
}
