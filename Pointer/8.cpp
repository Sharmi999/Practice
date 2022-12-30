//find the frequency of key from the array.
#include<iostream>
using namespace std;

int freq(int arr[],int key,int size)
{
    int count=0;
    int i;
    i=0;
    while(i<size)
    {
        i++;
        if(arr[i]==key)
        {
            count=count+1;
        }     
    }

    return count;
    
}

int main()
{
    int size,key,i;
    cout<<"enter the size"<<" ";
    cin>>size;
    int arr[size];
    cout<<"enter the key"<<" ";
    cin>>key;
    i=0;

    while(i<size)
    {
        cin>>arr[i];
        i++;
    }
    int res;
    res=freq(arr,key,size);
    cout<<" The frequency of the "<<key<<" is "<<res<<endl;
    return 0; 

}


