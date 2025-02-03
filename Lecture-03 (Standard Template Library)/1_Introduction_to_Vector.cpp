#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v1(5);  // Declaring a vector
v1[0]=10;    // Assigning vector first element value to -10
v1[1]=-9;

cout<<v1[2]<<" "<<v1[3]<<endl;   // printing 3rd and 4th element
v1.push_back(-100);        // Adding an element to vector

cout<<v1.size()<<endl;
v1.resize(10,11);        // Resizing the vector size
for(int i=0;i<10;i++){
    cout<<v1[i]<<" ";
}
return 0;
}