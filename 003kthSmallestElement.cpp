#include<bits/stdc++.h>

using namespace std;
int kthSmallest(int arr[], int l, int r, int k)
{
    //code here
    int p=0;
        priority_queue<int>pq;
        for(int i=0;i<r;i++){
            pq.push(arr[i]);
            cout<<"pushing "<<arr[i]<<endl;
        
            if(pq.size()>k){
                p = pq.top();
                cout<<"poped "<<p<<endl;
                pq.pop();
            }
            
        }
        return pq.top();
    
}

int main()
{
    int arr[] = {9, 7, 10, 4, 3};
    int n = sizeof(arr)/sizeof(int);
    int k = 3; 
    int ans = kthSmallest(arr,0,n,k);
    cout<<"ans is "<<ans;
    return 0;
}
