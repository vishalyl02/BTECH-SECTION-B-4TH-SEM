#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    int sz,x;
    cin>>sz;  // Input for the size
    vector<int>v1;
    // Taken the input from user of vector
    for(int i=0;i<sz;i++)
    {
        cin>>x;
        v1.push_back(x);
    }

    // sort the vector

        sort(v1.begin(),v1.end());

        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }

        cout<<endl;

            vector<int>res;
       
            for(int i=0,j=sz-1;i<j;i++,j--)   // loop to insert difference
            {
                res.push_back(v1[j]-v1[i]);
            }

            for(int i=0;i<res.size();i++)
            {
                cout<<res[i]<<" ";
            }

            return 0;


}