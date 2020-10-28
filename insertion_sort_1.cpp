#include<bits/stdc++.h>

using namespace std;

void insertion(vector<int> &A)
{   int j{0},key{0};
    for(int i=1;i<A.size();i++)
    {
        key = A.at(i);
        j = i-1;
        
        while(j>=0 && A.at(j)>key)
        {
            A.at(j+1) = A.at(j);
            j--;
        }
        A.at(j+1) = key;
        
        for(auto i : A)
            cout << i << " ";
        cout << endl;
    }
    
}
int main()
{
    vector<int> A{2,4,6,8,3};
    insertion(A);
    
}