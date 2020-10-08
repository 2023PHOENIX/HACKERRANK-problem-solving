#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> A;
	int n;	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int data;	cin >> data;
		A.push_back(data);		
	}
	sort(A.begin(), A.end());

	int  count{ 1 }, sum{ A.at(0)+4};
	for(int i=1;i<A.size();i++)
	{
		
		if (sum < A.at(i))
		{
			sum = A.at(i) + 4;
			count++;
			
			
		}
		
	}
	cout << count << endl;
	
}