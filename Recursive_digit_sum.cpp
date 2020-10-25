#define ll long long 
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;

#include<bits/stdc++.h>

using namespace std;

int super(long long x)
{
    if(x<10)    
        return x;
    else
    {
        int newx{0};
        while(x)
        {
            newx += x%10;
            x /= 10;
        }
        return super(newx);
    } 
}

int main()
{
    string S;   cin>>S;
    int n;  cin>>n;
    
    long long s{0};
    for(auto i: S)
        s+=i-'0';
    
    cout << super(s*n);

}
