//Write a program to reverse an array or string

//sol - mine A
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"please enter the size of array"<<endl;
    cin>>n;

    int arr[n];

    cout<<"please enter the nos in array"<<endl;
    for(int i =0; i<n; i++){

        cin>>arr[i];
    }

    int arr2[n];
    int k=0;
    for(int i =(n-1); i>=0; i--){

        arr2[k]=arr[i];
        k++;
    }

    cout<<"After copying the new array is"<<endl;
    for(int i =0; i<n; i++){

        cout<<arr2[i]<<endl;
    }

    return 0;
}