#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin >> n;

    vector<int> A;
    for (size_t i = 0; i < n; i++)
    {
        int data;   cin >> data;
        A.push_back(data);
    }

    sort(A.begin(), A.end());

    for (auto i : A)
        cout << i << " ";
    cout << "\n";
    int max{ 0 };
    for (int i = 0; i < A.size(); i++)
    {
        auto it = upper_bound(A.begin(), A.end(), A.at(i)+1);

        if(max < it - A.begin() - i)
            max = it - A.begin() - i;

        
    }
    cout << max << endl;
}