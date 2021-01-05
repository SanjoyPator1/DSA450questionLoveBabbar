#include<bits/stdc++.h>
using namespace std;

//Maximum and minimum of an array using minimum number of comparisons
//mine solution
//simple

struct Pair
{
	int min;
	int max;
};

//function
struct Pair getMinMax(int arr[], int n)
{
	struct Pair minMax;

	//for 1 element
	if (n == 1)
	{
		minMax.min = arr[0];
		minMax.max = arr[0];

		return minMax;
	}

	//if 2 element
	if (arr[0] > arr[1])
	{
		minMax.max = arr[0];
		minMax.min = arr[1];
	}
	else
	{
		minMax.min = arr[0];
		minMax.max = arr[1];
	}

	//if more than 2
	//coz of above code 0th & 1st element is already checked so check from 2
	for (int i = 2; i < n; i++)
	{
		if (arr[i] > minMax.max)
		{
			minMax.max = arr[i];

		}
		else if (arr[i] < minMax.min)
		{
			minMax.min = arr[i];
		}
	}
	return minMax;


}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	cout << "please enter the size of array" << endl;
	cin >> n;

	int arr[n];

	cout << "please enter the nos in array" << endl;
	for (int i = 0; i < n; i++) {

		cin >> arr[i];
	}


//call the function
	struct Pair ans = getMinMax(arr, n);

	cout << "The minimum element is : - " << ans.min << endl;
	cout << "The maximum element is : - " << ans.max << endl;


}