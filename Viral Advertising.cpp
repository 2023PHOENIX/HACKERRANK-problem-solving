#define ll long long 


const int INT_MAX = 2147483647;


#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	
	int n;	cin >> n;

	int i{ 0 }; int forward{ 5 },sum{ 0 };
	while (i < n)
	{
	
		forward = (forward / 2);
		i++;
		sum += forward;

		forward *= 3;
		
	}

	cout << sum << endl;





}