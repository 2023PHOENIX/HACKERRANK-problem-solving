#define ll long long 


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test;   cin >> test;


    while (test--)
    {
        int n;  cin >> n;
        int output{ 0 };
        for (int i = 0; i <= n; i++)
        {
            
            if (i % 2 != 0)
                output *= 2;
            if (i % 2 == 0)
                output += 1;

        }
        cout << output << endl;
    }

    
}