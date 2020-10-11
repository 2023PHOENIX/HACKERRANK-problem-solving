#define ll long long 


const int INT_MAX = 2147483647;


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin >> n;
    vector<int> A;

    while (n--)
    {
        ll data;   cin >> data;
        A.push_back(data);
    }

    // while or for 
    sort(A.begin(), A.end());
    int min = INT_MAX;          //greedy approach sort first then find differnce 
    for (int i = 1; i < A.size(); i++)
    {
        int diff = abs(A.at(i) - A.at(i - 1));
        if (diff < min)
            min = diff;

        if (diff == 0)
        {min = diff; break;
        }
    }
    cout << min << endl;









}