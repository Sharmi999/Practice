//find the frequency of key from the array.
#include<iostream>
using namespace std;
int freq(int *arr,int key,int size)
{
    int count=0;
    for(int i=0; i<size ; i++)
    {
        if(arr[i]==key)
        {
            count=count+1;
        }     
    }

    return count;
    
}

int main()
{
    int size,key;
    cout<<"enter the size"<<" ";
    cin>>size;
    cout<<"enter the key"<<" ";
    cin>>key;
    int *arr = new int[size];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int res;
    res=freq(arr,key,size);
    cout<<" The frequency of the "<<key<<" is "<<res<<endl;
    return 0; 

}


