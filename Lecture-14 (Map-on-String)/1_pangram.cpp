//   https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

#include<iostream>
#include<map>
#include<string>
using namespace std;

bool check(string s)
{
    map<char,int>mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    for(char ch='a';ch<='z';ch++)
    {
        if(mp[ch]==0)
        {
          return false;
        }
    }
    return true;
}


int main()
{
    string s;
    cin>>s;

    if(check(s)==true)
    {
        cout<<"It is Pangram"<<endl;
    }
    else
    cout<<"Not a Pangram"<<endl;
    return 0;

}
