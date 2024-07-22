#include<iostream>
using namespace std;
int main()
{
   int a[5]={1,2,3,4,5};
   int i;
   
   cout<<"\n--------------------------------\n";
   
   for(i=1; i<=5;i++)
    {
        if(i%2==0) cout<<'\t'<<a[i]<<" ";
    }
    cout<<"\n--------------------------------\n";
    return 0;
}