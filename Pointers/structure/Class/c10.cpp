#include<iostream>
using namespace std;
class Array
{
    int size,i;
    int *ptr;
    public:
        Array()
        {
            size = 0;
            ptr = NULL;
        }
        Array(int size)
        {
            this->size = size;
            ptr = new int[size];
        }
        Array(Array &obj)
        {
            size = obj.size;
            ptr = obj.ptr;
        }
        void take_input()
        {
            cout<<"Enter the size of array: ";
            cin>>size;
            ptr = new int[size];
            i=0;
            while(i<size)
            {
                cin>>ptr[i];
                i++;
            }
        }
        void display()
        {
            i=0;
            while(i<size)
            {
                cout<<ptr[i]<<" ";
                i++;
            }
        }
        void swap(int index1,int index2)
        {
            int temp;
            if(index1>=size)
            {
                return;
            }
            if(index2>=size)
            {
                return;
            }
            temp = ptr[index1];
            ptr[index1] = ptr[index2];
            ptr[index2] = temp;     
        }
};

int main()
{
    Array a1,a2,a3,a4,a5;
    a1.take_input();
    cout<<"The values of a1 are: ";
    a1.display();
    cout<<endl;
    a2 = a1;
    cout<<"The values of a2 are: ";
    a2.display();
    cout<<endl;
    a2.swap(0,1);
    cout<<"The values of a2 after swapping are: ";
    a2.display();
    cout<<"The values of a1 are: ";
    a1.display();


    return 0;
}