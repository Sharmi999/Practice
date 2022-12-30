//Write a function convert_to_fahrenheit to convert the current celsius into fahrenheit state and vice versa.
#include<iostream>
using namespace std;
float convert_to_fahrenheit(float c);
class Temparature
{
    float f;
    float c; 
    public:
        friend float convert_to_fahrenheit(float c);
        Temparature()
        {
            f = -1.0;
            c = -2.0;
        }
        float convert_to_fahrenheit(float c)
        {
            float f;
            f = (9.0*c+160)/5.0;
            return f;
        }
};
class Temparature
{
    float c;
    float f;
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
    float c;
    float f;
    cout<<"Enter the value of the celcius temparature ";
    cin>>c;
    cout<< "Temperature in Fahrenheit is =  "<<convert_to_fahrenheit(c)<<endl;
    cout<<"Enter the value of the fahrenheit temparature ";
    cin>>f;
    cout<< "Temperature in celcius is =  "<<convert_to_celcius(f)<<endl;
}