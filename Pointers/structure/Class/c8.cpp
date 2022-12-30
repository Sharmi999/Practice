//Create a class Numbers with two variables num1 and num2. Construct a default constructer to initialise the default as -1, parameterised constructer and copy constructer. Write a function Add to return the sum of two numbers, write a function substract to return num1 - num2. Write a function product to return the product of two numbers and write another function divide to return num1 / num2.
#include<iostream>
using namespace std;

class Numbers
{
    int num1;
    int num2;
    public:
		Numbers()
		{
			num1 = -1;
			num2 = -1;
		}
		Numbers(int value1,int value2)
		{
			num1=value1;
			num2=value2;
		}
		Numbers(const Numbers &s)
		{
			num1 = s.num1;
			num2 = s.num2;
		}

		int addition()
		{
			return num1 + num2;
		}

		int subtraction()
		{
			return num1 - num2; 
		}

		int multiplication()
		{
			return num1 * num2;
		}

		int division()
		{
			if(num2==0)
			return 0;
			else
			return num1/num2;
		}
};

int main()
{
	Numbers n1;
	cout<<n1.addition()<<endl;
	cout<<n1.subtraction()<<endl;
	cout<<n1.multiplication()<<endl;
	cout<<n1.division()<<endl;
	Numbers n2(3,4);
	cout<<n2.addition()<<endl;
	cout<<n2.subtraction()<<endl;
	cout<<n2.multiplication()<<endl;
	cout<<n2.division()<<endl;
	Numbers n3;
	n3 = n2;
	cout<<n3.addition()<<endl;
	cout<<n3.subtraction()<<endl;
	cout<<n3.multiplication()<<endl;
	cout<<n3.division()<<endl;
	
	
	
	
	return 0;
	
}