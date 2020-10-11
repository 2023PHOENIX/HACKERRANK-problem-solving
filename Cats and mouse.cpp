#define ll long long 


const int INT_MAX = 2147483647;


#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int test;	cin >> test;

	while (test--)
	{
		int cat_a, cat_b, mouse_c;
		cin >> cat_a >> cat_b >> mouse_c;

		int A = abs(cat_a - mouse_c);
		int B = abs(cat_b - mouse_c);

		if (A == B)
			cout << "Mouse C\n"; 
		if (A > B)
			cout << "Cat B\n"; 
		if (A < B)
			cout << "cat A\n"; 

	}





}