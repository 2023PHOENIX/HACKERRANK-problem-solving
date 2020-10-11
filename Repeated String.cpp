#define ll long long 


const int INT_MAX = 2147483647;


#include<bits/stdc++.h>

using namespace std;

int main()
{
	string S;	cin >> S;
	
	ll n;	cin >> n;

	ll print = n / S.size();
	ll K = n % S.size();

	int count{ 0 };
	for (int i = 0; i < S.size(); i++)
	{
		
		if (S.at(i) == 'a')
			count++; 

	}
	print *= count;
	
	ll count_left{ 0 };
	for (int i = 0; i < K; i++)
	{
		
		if (S.at(i) == 'a')
			count_left++;
	}
	print = print + count_left;

	cout << print << endl;
	


	




}