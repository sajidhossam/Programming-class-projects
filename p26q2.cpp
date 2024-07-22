#include<iostream>
using namespace std;
int main()
{
    int salaries[5] = {100,50,50,100,50};
    int total=0;
    double average=0.0;
      
    for(int i=0; i<5; i++)
    {
        total += salaries[i];
    }
    average = total/5;

    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<average<<endl;

    return 0;
}
