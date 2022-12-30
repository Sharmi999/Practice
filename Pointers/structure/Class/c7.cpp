//Write a function dispaly_id in Satellite class to print the id of the satellite.
#include<iostream>
using namespace std;
class Satellite
{
    int id;
    public:
    Satellite(int value1)
    {
        id = value1;
    }
    void display_id()
    {
        cout<<"id of the satellite is "<<endl;
    }
    /*void display_id(int id)
    {
        cout<<"Enter the value of the id of the satellite ";
        cin>>id;
    }*/
    
};
int main()
{   
    Satellite id(23);
    id.display_id();
}