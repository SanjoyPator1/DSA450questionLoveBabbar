#include<bits/stdc++.h>
using namespace std;

//Move all negative numbers to beginning and positive to end with constant extra space

void sortNegative(int arr[], int n)
{
	int j = 0;

	for (int i = 0 ; i < n; i++)
	{
		if (arr[i] < 0)
		{

			if (i != j)
			{
				cout << endl;
				cout << "for i= " << i << " & j= " << j << endl;
				cout << "swaping " << arr[i] << " & " << arr[j];

				swap( arr[i], arr[j]);
			}

			j++;
		}
	}

}

void printArray(int arr[], int n)
{
	cout << endl;
	cout << "after sorting all the negative numbers on one side the array is : - " << endl;
	for (int i = 0; i < n; i++)
	{

		cout << arr[i] << " ";
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	static int zero, one, two;
	zero = one = two = 0;

	int n;
	cout << "please enter the size of array" << endl;
	cin >> n;

	int arr[n];

	cout << "please enter the nos in array " << endl;
	for (int i = 0; i < n; i++)
	{

		cin >> arr[i];
	}

	sortNegative(arr, n);

	printArray(arr, n);


}