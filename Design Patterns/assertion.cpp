#include<iostream>
#include<assert.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    assert(n > 0);

    cout<<"True\n";

    int d;

    cin>>d;

    int outPut;
    try{
        if(d == 0)
            throw(d);
        else
        {
            outPut = (n/d);
            cout<<"\n Divison operation is : "<<outPut<<"\n";
        }
    }
    catch(int d)
    {
        cout<<"Error u r denominator is zero!!\n";
    }
}