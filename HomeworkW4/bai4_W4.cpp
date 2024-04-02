#include<bits/stdc++.h>

using namespace std;



int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> aimer(n);
    for(int i=0; i<n; i++)
    {
        int length;
        cin >> length;
        aimer[i].resize(length);
        for(int j=0; j<length; j++)
        {
            cin >> aimer[i][j];
        }
    }
    for(int k=0; k<q; k++)
    {
        int i,j;
        cin >> i >> j;
        cout << aimer[i][j] << endl;
    }
}
