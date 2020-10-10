#define ll long long 
const int INF = 1000000007;
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    while (n--)
    {
        string S;   cin >> S;

        vector<int> A;

        for (int i = 1; i < S.length(); i++)
        {
            A.push_back((int)abs(S.at(i) - S.at(i - 1)));
        }

        reverse(S.begin(), S.end());

     
        for (int i = 1; i < S.length(); i++)
        {
            A.push_back((int)abs(S.at(i) - S.at(i - 1)));
        }
      
        int j = (A.size() / 2) ;
        for (auto i : A)
        {
            cout << i << " ";
        }
        int flag{ 1 };
        for (int i = 0; i < A.size() / 2 && j < A.size(); i++, j++)
        {
            if (A.at(i) != A.at(j))
            {
                cout << A.at(i) << " :" << A.at(j) << endl;
                flag = 0;
                break;
            }
        }

        (flag == 0) ? cout << "Not funny" << endl : cout << "Funny" << endl;
    }
}