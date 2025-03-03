#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // Task -1 -> Declare a 2d vector and take the size of row and col from user
    int row,col;
    cin>>row>>col;
    vector<vector<int>>v1(row,vector<int>(col));
    //Task -2 -> taking the input from user
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>v1[i][j];
      }
    }
    // Task -3 -> Print r2,c2 and r1,c3 and r4,c2
    cout<<v1[1][1]<<" "<<v1[0][2]<<" "<<v1[3][1]<<endl;

    //Task -4 -> Assign r2,c3 ->-3 , r1,c2-> -99 and r1,c3-> 100
    cout<<endl;
v1[1][2]=-3,v1[0][1]=-99,v1[0][2]=100;
// Task -5 -> Print the 2d vector elements
cout<<endl;
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout<<v1[i][j]<<" ";
    }
    cout<<endl;
}

return 0;

}
