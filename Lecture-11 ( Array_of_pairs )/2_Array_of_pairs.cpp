#include<iostream>
#include<utility>
#include<vector>
#include<limits.h>
using namespace std;

int main()
{

// Task -1 -> create a vector of pairs of user defined size
vector<pair<int,int>>v1;

int n;
cin>>n;
v1.resize(n);

// Task -2 -> Take the user input for the data of pairs
for(int i=0;i<n;i++)
{
    cin>>v1[i].first>>v1[i].second;
}

// Task -3 -> Print the data

int key_s=0,value_s=0;
for(auto it:v1)
{
    cout<<it.first<<" "<<it.second<<endl;
key_s+=it.first;
value_s+=it.second;
}

cout<<key_s<<" "<<value_s<<endl;

// Task -4 -> Printing the largest key key and smallest value of pairs

int large_key=INT_MIN;
int small_value=INT_MAX;

for(int i=0;i<n;i++)
{
    if(v1[i].first>large_key)
    large_key=v1[i].first;

    if(v1[i].second<small_value)
    small_value=v1[i].second;
}

cout<<"Largest key is "<<large_key<<endl;
cout<<"Smallest value is"<<small_value<<endl;

return 0;

}