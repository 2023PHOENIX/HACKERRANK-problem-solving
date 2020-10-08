#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int KAG1, KAG2;
	int V1, V2;
	cin >> KAG1 >> V1 >> KAG2 >> V2;
	int flag = 0; int count = 0;
	while (KAG1 != KAG2)
	{
		KAG1 += V1;
		KAG2 += V2;

		if (KAG1 == KAG2)
			flag = 1;
		else
		{
			if (count > 10000)
				break;
		}
		count++;
	}
	if (flag == 1)
		cout << "YES" << endl;
	else
	{
		cout << "NO" << endl;
	}
	
}