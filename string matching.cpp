#define ll long long 


const int INT_MAX = 2147483647;


#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s1, s2;

	cin >> s1 >> s2;
	int flag{ 0 };
	for (auto i : s1)
	{
		if (s2.find(i) != string::npos)
			flag = 1;
	}
	(flag==1)?cout << "YES\n":cout<<"NO\n";
		
		
	
		

}