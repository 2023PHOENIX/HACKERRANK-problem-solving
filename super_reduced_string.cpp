#include<bits/stdc++.h>

using namespace std;




int main() {

    string s; cin >> s;
    bool iszero{ false };
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i + s.begin());
            s.erase(i + s.begin());

            if (s.length() == 0)
            {
                iszero = true; break;
            }
            i = -1;
        }
    }
    (iszero) ? cout << "Empty String" : cout << s;
}