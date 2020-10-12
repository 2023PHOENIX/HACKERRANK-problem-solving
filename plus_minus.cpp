#define ll long long 


const int INT_MAX = 2147483647;


#include<bits/stdc++.h>

using namespace std;

int main()
{
	ll n;	cin >> n;
	
	ll count_p{ 0 }, count_n{ 0 }, count_z{ 0 };
	for (int i = 0; i < n; i++)
	{
		ll data;	cin >> data;
		
		if (data == 0)
			count_z++;
		if (data > 0)
			count_p++;
		else
			count_n++;
	}

	cout << fixed << setprecision(6) << count_p / (n * 1.0) << endl;
	cout << fixed << setprecision(6) << count_n / (n * 1.0) << endl;
	cout << fixed << setprecision(6) << count_z / (n * 1.0) << endl;



	
	
	
		

		


	

		

	


}