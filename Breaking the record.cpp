#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;	cin >> n;

	vector<long long> A;

	for (size_t i = 0; i < n; i++)
	{
		long long data; cin >> data;
		A.push_back(data);
	}
	long long min = A.at(0);
	long long max = A.at(0);

	int count_min{ 0 }, count_max{ 0 };
	for (int i = 1; i < A.size(); i++)
	{
		if (A.at(i) < min)
		{
			count_min++;
			min = A.at(i);
		}
		if (A.at(i) > max)
		{
			count_max++;
			max = A.at(i);
		}
	}
	cout << count_max << " " << count_min << endl;

}