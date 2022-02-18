//Write a program to find out the maximum number in a given array using UDF.

#include<iostream>

using namespace std;

void getmax (int arr[],int n);
int i;
int main()
{
    int n,arr[100];
    cout<<"Enter array size:"<<endl;
    cin>>n;
    cout<<"Enter elements:"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    getmax(arr,n);
    return 0;
}

void getmax (int arr[],int n)
{
    int max;
    max=arr[0];
    for(i=1;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
    cout<<"Max is "<<max<<endl;
}
