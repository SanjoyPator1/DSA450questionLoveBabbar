#include<iostream>
#include<vector>

using namespace std;
void sort012(int a[], int n)
{
    // code here
    int z,o,t;
    z=o=t=0;
    for(int i =0; i<n; i++){
        if(a[i]==0){
            z++;
        }
        else if(a[i]==1){
            o++;
        }else if(a[i]==2){
            t++;
        }
    }

    cout<<" Numbers of Zeros, Ones & two s are : "<<z<<" , "<<o<<" & "<<t<<endl;
    cout<<" final ans : "<<endl;
    vector<int> res;
    while(z>0){
        res.push_back(0);
        z--;
    }
    while(o>0){
        res.push_back(1);
        o--;
    }
    while(t>0){
        res.push_back(2);
        t--;
    }

    for(auto i: res){
        cout<<i<<" , ";
    }
}

int main()
{
    int arr[] = {0, 2 ,1, 2, 0};
    int n = sizeof(arr)/sizeof(int);
    sort012(arr,n);
    return 0;
}
