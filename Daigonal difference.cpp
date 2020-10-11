#define ll long long 


const int INT_MAX = 2147483647;


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;	cin >> n;
	vector<vector<int>> A;
	for (int i = 0; i < n; i++)
	{
		vector<int> V;

		for (int j = 0; j < n; j++)
		{
			int data;	cin >> data;
			V.push_back(data);
		}
		A.push_back(V);
	}
	int sum1{ 0 }, sum2{ 0 };
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < A[i].size(); j++)
		{
			if (i == j)
			{
				sum1 = sum1 + A[i][j];
			}
			if (i + j == n)
			{
				sum2 = sum2 + A[i][j];
			}
		}
		
	}
	cout << abs(sum1 - sum2) << endl;
	


}