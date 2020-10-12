#define ll long long 


const int INT_MAX = 2147483647;


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;	cin >> n;

	string S = "#";
	string s = " ";
	
	int z{ 0 };

	
	for (int i = 0; i < n; i++)
	{
		int space = n - 1 - i;
		int hash = i + 1;

		while (space != 0)
		{
			cout << s;
			space--;
		}
		while (hash != 0)
		{
			cout << S;
			hash--;
		}
		cout << endl;
	}
}