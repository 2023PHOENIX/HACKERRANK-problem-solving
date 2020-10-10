#define ll = long long ;
const int INF = 1000000007;
#include<bits/stdc++.h>

using namespace std;

int main()
{
	
		vector< pair<char, int> > A;

		string S = "abcdefghijklmnopqrstuvwxyz";

		for (int i = 0; i < S.size(); i++)
		{
			A.push_back(make_pair(S.at(i), 0));
		}

		string st;	cin >> st;
		int j{ 0 };


		for (int i = 0; i < st.size(); i++)
		{
			int index = (int)st.at(i) - 97;

			A.at(index).second = A.at(index).second + 1;
		}
		int count{ 0 };
	
		int X =  A.at(0).second;
		for (int i = 1; i < A.size()-1; i++)
		{
			if (X != A.at(i).second )
				if(A.at(i).second!=0)
					count++;
		}
		if (count == 1||count==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	

}

