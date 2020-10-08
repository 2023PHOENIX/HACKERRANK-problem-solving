#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> A;
	int n;	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		int data;	cin >> data;
		A.push_back(data);
	}
	int count = 0;

	for (int i = 0; i < A.size(); i++)
	{
		if (A.at(i) != 0)
		{
			for (int j = i + 1; j < A.size(); j++)
			{
				if (A.at(i) == A.at(j))
				{
					count++;
					A.at(j) = 0;
					break;

				}
			}
		}
	}
	cout << count << endl;
}