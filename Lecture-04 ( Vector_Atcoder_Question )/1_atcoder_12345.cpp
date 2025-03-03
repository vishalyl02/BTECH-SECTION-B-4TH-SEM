#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector<int>v1(5);
    for(int i=0;i<5;i++)
    {
        cin>>v1[i];
    }
        bool flag=false;
    for(int i=1;i<5;i++)
    {
        if(v1[i-1]>v1[i])
        {
            swap(v1[i-1],v1[i]);
            flag=true;
            break;
        }
    }
    
    // Compare for sorting
    // 1 2 3 4 5
    for(int i=0;i<5;i++)
    {
        if(v1[i]!=i+1)
        {       cout<<"No"<<endl;
        return 0;
    }
    }
    
    if(flag==true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
    return 0;
}