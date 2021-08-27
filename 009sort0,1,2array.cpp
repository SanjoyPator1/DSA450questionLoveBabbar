#include<bits/stdc++.h>
using namespace std;

//

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

	cout << "please enter the nos in array - only 0's , 1's & 2's" << endl;
	for (int i = 0; i < n; i++)
	{

		cin >> arr[i];

		if ( arr[i] == 0)
		{
			zero++;
		}
		else if ( arr[i] == 1 )
		{
			one++;
		}
		else
		{
			two++;
		}
	}

	for ( int j = 0; j < zero ; j++)
	{
		cout << 0 << " ";
	}

	for ( int j = 0; j < one ; j++)
	{
		cout << 1 << " ";
	}

	for ( int j = 0; j < two ; j++)
	{
		cout << 2 << " ";
	}


}