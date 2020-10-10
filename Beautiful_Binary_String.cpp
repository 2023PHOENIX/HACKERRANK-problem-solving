#include<iostream>
#include<string>

using namespace std;
void check(string S)
{
	
	int count{0};
	for (int i = 2; i < S.length(); i++)
	{
		if (S.at(i-2) == '0' && S.at(i -1) == '1' && S.at(i) == '0')
		{
			count++;	S.at(i) ='1';
		}
		
	}
	cout << count << endl;
	
}
int main()
{
	int n;	cin >> n;

	string S;	cin >> S;

	check(S);

	
}

/* 7
	0101010   2

	5
01100 0 */