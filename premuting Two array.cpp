#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int test;    cin >> test;

	while (test--)
	{
		int n;    cin >> n;    long long k; cin >> k;
		vector<long long> A, B;
		for (int i = 0; i < n; i++)
		{
			long long data; cin >> data;
			A.push_back(data);
		}
		for (int i = 0; i < n; i++)
		{
			long long data2;    cin >> data2;
			B.push_back(data2);
		}
		sort(A.begin(), A.end());
		sort(B.begin(), B.end(), greater<int>());

		int flag = 0;

		for (int i = 0; i < A.size(); i++)
		{
			if (A.at(i) + B.at(i) < k)
				flag = 1;

		}

		if (flag == 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}
