#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, a, b;
    cin >> n;

    vector<int> aimer(n);
    for(int i=0; i<n; i++)
    {
        cin >> aimer[i];
    }

    cin >> x;

    aimer.erase(aimer.begin() + x - 1);
    cin >> a >> b;

    aimer.erase(aimer.begin() +( a-1 )  , aimer.begin() + b - 1 );
    cout << aimer.size() << "\n";
    for(int i=0; i<aimer.size(); i++)
    {
        cout << aimer[i] << " ";
    }
}

