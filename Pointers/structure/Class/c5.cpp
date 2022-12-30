//Write a function convert_to_Celsius to convert the current fahrenheit into celsius state.
#include<iostream>
using namespace std;
float convert_to_celcius(float f);
class Temparature
{
    float f;
    float c; 
    public:
        friend float convert_to_celcius(float f);
        Temparature()
        {
            f = -1.0;
            c = -2.0;
        }
        float convert_to_celcius(float f)
        {
            float c;
            c = (5.0*f-160)/9.0;
            return c;
        }
};
int main()
{   
    float f;
    cout<<"Enter the value of the fahrenheit temparature ";
    cin>>f;
    cout<< "Temperature in celcius is =  "<<convert_to_celcius(f)<<endl;
}




