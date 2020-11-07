//Write a program to reverse an array or string

//sol - gfg - space is saved here - lol

#include <iostream>

using namespace std;

void display(int arr[], int n){

    
    for(int i =0; i<n; i++){

        cout<<" "<<arr[i]<<" ";
    }
    cout<<endl;

}

void reverseArray(int arr[], int start ,int end){

    while(start<end){

        //cout<<"the start no is - "<<arr[start]<<endl;
        //cout<<"the end no is - "<<arr[end]<<endl;
        int temp = arr[start];
        arr[start] =  arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}


int main()
{
    int arr[]= {4,5,6,7,8,9};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the value of n is - "<<n<<endl;

    cout<<"the original array is - "<<endl;
    
    display(arr, n);

    reverseArray(arr, 0 , n-1);

    cout<<"the reversed array is - "<<endl;
    
    display(arr, n);


    
    return 0;
}