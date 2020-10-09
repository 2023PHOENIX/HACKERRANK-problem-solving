#include<iostream>
#include<string>

using namespace std;

void check(string s)
{
	string h = "hackerrank";
	int j = 0;
	for (int i = 0; i < s.length() && j < h.length(); i++)
	{
		if (s.at(i) == h.at(j))
			j++;
	}
	if (j == h.length())
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
int main()
{
	int test;	cin >> test;

	while (test--)
	{
		string s;	cin >> s;
		check(s);
	}
}