#include<iostream>
#include<vector>

using namespace std;

int main()
{
// Task-1  -> Declare a vector
vector<int>v1;    // vector<data type>varibale name  

// Task 2 -> Insert all even number between 1 and 50

for(int i=1;i<=50;i+=2)
{
    if(i%2==0)
v1.push_back(i);
}
// Task -3 -> Declare a vector and insert all odd 
vector<int>v2;

for(int i=50;i<=100;i++)
{
if(i%2==1)
v2.push_back(i);
}

// Task 4 -> Printing all elements divisible by 8 from vector 1

for(int i=0;i<v1.size();i++)
{
if(v1[i]%8==0)
cout<<v1[i]<<" ";
}
cout<<endl;

// Task 5 -> Print all elements from vector 2 that is divisble by 5

for(int i=0;i<v2.size();i++)
{
    if(v2[i]%5==0)
    cout<<v2[i]<<" ";
}

return 0;

}