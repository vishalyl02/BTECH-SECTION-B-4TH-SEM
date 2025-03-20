#include<iostream>
#include<map>
#include<vector>
using namespace std;

vector<int> common_value(vector<int>& v1, vector<int>& v2)
{
    int n=v1.size();
    int m=v2.size();
    map<int,int>mp1,mp2;

    for(int i=0;i<n;i++)
    {
        mp1[v1[i]]++;
        // mp1[v1[i]]=mp1[v1[i]]+1;
    }
    for(int i=0;i<m;i++)
    {
        mp2[v2[i]]++;
    // mp2[v2[i]]=mp2[v2[i]]+1;
    }
    
    int count1=0,count2=0;
    
    for(int i=0;i<n;i++)
    {
        if(mp2[v1[i]]>0)
        count1++;
    }
    for(int i=0;i<m;i++)
    {
        if(mp1[v2[i]]>0)
        count2++;
    }
    vector<int>ans;
    ans.push_back(count1);
    ans.push_back(count2);
    return ans;
}





int main()
{

    int n,m;
    cin>>n>>m;
    vector<int>v1(n);
    vector<int>v2(m);

    for(int i=0;i<n;i++)
{
cin>>v1[i];
}

for(int i=0;i<m;i++)
{
    cin>>v2[i];
}


vector<int>res=common_value(v1,v2);
cout<<res[0]<<" "<<res[1]<<endl;
return 0; 

}

