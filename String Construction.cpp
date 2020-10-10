#define ll long long 
const int INF = 1000000007;
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string S;	cin >> S;
	set<char> se;

	for (auto i : S)
		se.insert(i);

	cout << se.size() << endl;
}