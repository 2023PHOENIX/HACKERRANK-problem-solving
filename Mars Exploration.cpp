#include<iostream>

// sos sos sos sos 
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string S;	cin >> S;

	transform(S.begin(), S.end(), S.begin(), ::tolower);
	int count{ 0 };


	for (int i = 0; i < S.length() - 2; i = i + 3)
	{
		if (S.at(i) != 's')
			count++;
		if (S.at(i + 1) != 'o')
			count++;
		if (S.at(i + 2) != 's')
			count++;

	}
	cout << count << endl;
}


