#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
// Task -1 -> To declare a 2D vector of user input row and col
int row,col;
cin>>row>>col;
vector<vector<int>>v1(row,vector<int>(col));

// Task-2 -> Take the user input for 2D vector
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
    cin>>v1[i][j];
}
}
//Task- 3-> Store the max val of each row in a vector
vector<int>row_max;
for(int i=0;i<row;i++)
{
    int mx=INT_MIN;
    for(int j=0;j<col;j++)
    {
        mx=max(mx,v1[i][j]);
    }
    row_max.push_back(mx);
}

// Task-4 -> To print the row_max vector

for(auto p:row_max)
{
cout<<p<<" ";
}
cout<<endl;



//Task -5 -> Storing the column max value in a vector

vector<int>col_max;
for(int j=0;j<col;j++)
{
    int mx=INT_MIN;
    for(int i=0;i<row;i++)
    {
        mx=max(mx,v1[i][j]);
    }
    col_max.push_back(mx);
}

// Task -6 -> To print the col_max vector

for(auto cd:col_max)
{
cout<<cd<<" ";
}
return 0;
}