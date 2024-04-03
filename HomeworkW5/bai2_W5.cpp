#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> aimer(n);
    for(int i =0 ;i < n; i++)
    {
        cin >> aimer[i];
    }
    sort(aimer.begin(), aimer.end());
    for ( int i=0 ;i <n; i++)
    {
        cout << aimer[i] << " ";
    }
}
