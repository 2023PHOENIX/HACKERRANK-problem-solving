#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n;    cin >> n;
	vector<int> cal;

	for (int i = 0; i < n; i++)
	{
		int data;    cin >> data;
		cal.push_back(data);
	}
	sort(cal.begin(), cal.end(), greater<int>());

	int sum{ 0 };
	for (int i = 0; i < cal.size(); i++)
	{
		sum += pow(2, i) * cal.at(i);
	}

	cout << sum << endl;
}
