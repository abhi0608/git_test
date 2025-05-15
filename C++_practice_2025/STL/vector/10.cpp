#include<iostream>
#include<vector>

using namespace std;

int main()
{
       vector<int> v{10,5,20,15};
        v.resize(3);

        for(int x:v)
            cout<<x<<" ";  //10,5,20
        cout<<endl;

}