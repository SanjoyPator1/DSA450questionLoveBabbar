#include <bits/stdc++.h>
using namespace std;

void sortNegativePositive(vector<int> arr, int n){
    vector<int> negArr;
    vector<int> posArr;
    for(int i =0;i<n;i++){
        if(arr[i]<0){
            negArr.push_back(arr[i]);
        }
        else{
            posArr.push_back(arr[i]);
        }
    }
    
    cout<<"negArr "<<endl;
    for(auto i: negArr){
        cout<<i<<" , ";
    }
    cout<<endl;
    
    cout<<"posArr "<<endl;
    for(auto i: posArr){
        cout<<i<<" , ";
    }
    cout<<endl;
    

    for(int i =0; i< negArr.size();i++){
        arr[i]=negArr[i];
    }
    int j=0;
    for(int i =negArr.size(); i< n;i++){
        arr[i]=posArr[j];
        j++;
    }
    
    for(int i=0; i<n; i++){
	    cout<<arr[i]<<" , ";
	}
}

int main() {
	//code
	vector<int> vect={ -12, 11, -13, -5, 6, -7, 5, -3, -6,7,-99};
	int n = vect.size();
	sortNegativePositive(vect,n);
	

	
	return 0;
}