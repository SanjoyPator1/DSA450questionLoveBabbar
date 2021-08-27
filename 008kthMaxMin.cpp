#include<bits/stdc++.h>
using namespace std;

//Kth smallest element
//mine method
//array to store the ans





int findKth(int arr[], int n, int k)
{
	int min = arr[0];

	//for 1 element
	if (n == 1)
	{
		return min;
	}

	//sort them - STL c++
	sort(arr, arr + n);

	//show
	cout << "the sorted array is - ";
	for (int i = 0; i < n; i++) {

		cout << arr[i] << "  ";
	}

	cout << endl;
	cout << "The kth smallest element is : - " << endl;
	cout << arr[k - 1] << endl;
	return arr[k - 1 ];



}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int testCases;
	cout << "please enter the no of test testCases" << endl;
	cin >> testCases;

	int ans[testCases];
	int count = 0;

	for (int i = 0; i < testCases; i++)
	{

		int n;
		cout << "please enter the size of array" << endl;
		cin >> n;

		int arr[n];

		cout << "please enter the nos in array" << endl;
		for (int i = 0; i < n; i++) {

			cin >> arr[i];
		}

		int k;
		cout << "please enter the k th number" << endl;
		cin >> k;

		int a = findKth(arr, n, k);

		ans[count++] = a;
	}

	cout << "The ans are : - ";

	for ( int i = 0; i < testCases; i++)
	{
		cout << ans[i] << endl;
	}



}