#define ll long long 


const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string S;	cin>>S;
	
	map<char,int> A;

	for(auto c : S)
	{
		A[c] = A[c]+1;
	}
	int count{0};

	for(auto i : A)
		{
			if(i.second%2!=0)
				count++;
		}
	(count>1)?cout<<"NO\n":cout<<"YES\n";
	

	
}	
