#include<iostream>
#include<vector>
using namespace std;

int main()
{

    // Size input from user
int n;
cin>>n;

// Vector Declaration and of user input size
vector<int>v1(n);

// Input from user
for(int i=0;i<n;i++)
{
    cin>>v1[i];
}

// Printing the data on the screen
for(int i=0;i<n;i++)
{
    cout<<v1[i]<<" ";
}
cout<<endl;

// Printing the individual elements on screen 
cout<<v1[0]<<" "<<v1[2]<<" "<<v1[3]<<endl;
return 0;

}