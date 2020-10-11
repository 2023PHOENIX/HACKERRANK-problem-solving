#define ll long long 


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin >> n;
    vector<int> A;
    while (n--)
    {
        int data;   cin >> data;
        A.push_back(data);
    }

    sort(A.begin(), A.end());

    vector<int> Z;
    int max{ 0 };
    for (int i = 0; i < A.size(); i++)
    {
        auto X = upper_bound(A.begin(), A.end(), A.at(i));

        Z.push_back(X - A.begin() - i);

    }

    sort(Z.begin(), Z.end(), greater<int>());
    cout << A.size() - Z.at(0) << endl;




}