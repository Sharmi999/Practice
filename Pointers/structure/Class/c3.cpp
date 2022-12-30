//Create a class Temperature with variables Fahrenheit and Celsius. Construct a default constructer, parameterised constructer and copy constructer. Create another class Satellite with variables int id, Construct a default constructer, parameterised constructer and copy constructer.

#include<iostream>
using namespace std;
class Temparature
{
    int Fahrenheit;
    int Celcius;
        public:
        Temparature()
        {
            Fahrenheit = -1;
            Celcius = -1;
        }
        Temparature(int value1,int value2)
        {
            Fahrenheit = value1;
            Celcius = value2;
        }
        Temparature(Temparature &d)
        {
            Fahrenheit = d.Fahrenheit;
            Celcius = d.Celcius;
        }
};

class Satellite
{
    int id;
        public:
        Satellite()
        {
            id = -2;
        }
        Satellite(int value1)
        {
            id = value1;
        }
        Satellite(Satellite &a)
        {
            id = a.id;
        }
};