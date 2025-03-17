#include<iostream>
#include<map>
using namespace std;

int main()
{


    // TASK A -> CREATE A MAP

    map<string,int>mp;

    // TASK B -> TAKE HARD CODED DATA FOR MOBILE 
    // NAME AND PRICE

    mp["Iphone"]=70000;
    mp["Samsung"]=20000;
    mp["vivo"]=30000;
    mp["Oppo"]=15000;
    mp["Redmi"]=20000;
    mp["Nokia"]=18000;
    mp["One-plus"]=40000;

    //TASK C -> PRINTING ALL THE DATA USING LOOP

    for(auto p:mp)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    // TASK -D -> CREATION OF NEW MAP FOR LAPTOP
    // NAME AND PRICE
    cout<<endl;
    cout<<endl;
     map<string,int>mpp;
        string nm;
        int prc;
     for(int i=0;i<7;i++)
     {
        cin>>nm>>prc;
        mpp[nm]=prc;
     }
     for(auto cd:mpp)
     {
        cout<<cd.first<<" "<<cd.second<<endl;
     }
return 0;

}


