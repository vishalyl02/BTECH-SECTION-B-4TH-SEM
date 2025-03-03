#include<iostream>
#include<vector>

using namespace std;

int main()
{
// Task-1 -> Declare a vector of size 5
vector<int>v1(5);

// Task-2 -> Printing 3rd and 4th element
cout<<v1[2]<<endl;
cout<<v1[3]<<endl;

// Task 3-> Assign 2nd element=-10 and 5th element=100
v1[1]=-10;
v1[4]=100;

// Task 4-> Add element value 881
v1.push_back(881);

// Task 5-> Printing all elements value
cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<" "<<v1[3]<<" "<<v1[4]<<endl;

for(int i=0;i<v1.size();i++)
{
    cout<<v1[i]<<" ";
}

return 0;

}