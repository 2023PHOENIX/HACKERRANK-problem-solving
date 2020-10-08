#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;	cin >> n;
	long long m;	cin >> m;
	vector<long long> A;

	for (int i = 0; i < n; i++)
	{
		long long data;	cin >> data;
		A.push_back(data);
	}

	sort(A.begin(), A.end());
	long long sum = 0; int count{ 0 };
	for (int i = 0; i < A.size(); i++)
	{
		if (sum <= m)
		{
			count++;
			sum += A.at(i);
		}
		if (sum + A.at(i + 1) > m)
			break;
	}
	cout << count << endl;
}