#include<iostream>
using namespace std;
int main()
{
    int x[4], y[4];
    for(int i=0;i<4;i++)
    {
        x[i]=i;
        y[i]=i*i;
        cout<<endl<<x[i]<<" "<<y[i];
    }
    cout<<endl;


    return 0;

}