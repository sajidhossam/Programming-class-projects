#include<iostream>
using namespace std;
int main()
{
    int array[15] = {34,23,43,64,86,65,47,463,43,2,5,345,76,67,6};
    int max = array[0];


    for(int i=1; i<15; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
          
        }
    }    
        cout<<"max: "<<max<<endl;
        

    return 0;

}