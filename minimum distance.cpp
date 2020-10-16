#define ll long long 


const int INT_MAX = 2147483647;


#include<bits/stdc++.h>

using namespace std;

void f()
{
	int n;	cin>>n;
	vector<int> A;

	for(int i=0;i<n;i++)
	{
		int data;	cin>>data;
		A.push_back(data);
	}
	int min{INT_MAX};
	for(int i=0;i<n-1;i++)
	{
		int key = A.at(i);


		for(int j = i+1;j<A.size();j++)
		{
			if(key == A.at(j))
			{
				if(min > (j-i))
					min = j-i;
			}	
		}

	}
	cout << min << endl;
	
}
int main()
{
	f();

}

