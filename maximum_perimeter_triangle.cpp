#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool check(long long a, long long b, long long c)
{
	return a + b > c;
}
int main()
{
	vector<long long> A;
	vector<long long> B(3,0);

	int n;	cin >> n;

	for (int i = 0; i < n; i++)
	{
		long long data;	cin >> data;
		A.push_back(data);
	}
	sort(A.begin(), A.end());

	int flag = 1;
	for (int i = 0; i <= A.size()-3; i++)
	{
		long long sum = 0;

		long long sum2 = 0;
		for (auto K : B)
			sum += K;
		if (check(A.at(i),A.at(i+1),A.at(i+2)))
		{
			flag = 0;
			sum = A.at(i) + A.at(i + 1) + A.at(i + 2);
			if (sum > sum2)
			{
				B.at(0) = A.at(i);
				B.at(1) = A.at(i + 1);
				B.at(2) = A.at(i + 2);
			}

			
		}
	}
	if (flag == 0)
	{
		cout << B.at(0) << " " << B.at(1) << " " << B.at(2) << endl;
	}
	else
	{
		cout << -1 << endl;
	}
}