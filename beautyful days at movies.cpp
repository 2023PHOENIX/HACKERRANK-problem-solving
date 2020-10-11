#define ll long long 


const int INT_MAX = 2147483647;


#include<bits/stdc++.h>

using namespace std;
ll rev(ll n)
{
	ll newn{ 0 };
	while (n > 0)
	{
		ll rem = n % 10;
		newn = newn*10 + rem;

		n = n / 10;

	}
	return newn;
}
int main()
{
	
	ll  i, j;
	cin >> i >> j;
	ll k; cin >> k;
	int count{ 0 };
	while (i <= j)
	{
		if (abs(i - rev(i)) % k == 0)
			count++;
		i++;
	}

	cout << count << endl;






}