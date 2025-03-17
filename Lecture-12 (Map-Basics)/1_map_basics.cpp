#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{

    // create a map
    map<int,string>mp;

    vector<int>v1={1,2,6,10,32};
    vector<string>v2={"hello","world","abc",
        "bcd","def"};

    mp[v1[0]]=v2[0];
    mp[v1[1]]=v2[1];
    mp[v1[2]]=v2[2];
    mp[v1[3]]=v2[3];
    mp[v1[4]]=v2[4];




    cout<<mp[v1[0]]<<" "<<mp[v1[1]]<<" "<<mp[v1[2]]
    <<" "<<mp[v1[3]]<<" "<<mp[v1[4]]<<endl;

    return 0;
}