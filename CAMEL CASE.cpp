#include<iostream>
#include<string>

using namespace std;

int main()
{
	string S;	getline(cin, S);
	int count{ 0 };
	for (int i = 0; i < S.size(); i++)
	{
		if (S.at(i) > 'A' && S.at(i) < 'Z')
			count++;
	}
	cout << count+1 << endl;

}