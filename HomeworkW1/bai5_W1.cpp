#include<bits/stdc++.h>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    vector<int> aimer;
    aimer.push_back(a);
    aimer.push_back(b);
    aimer.push_back(c);
    aimer.push_back(d);
    sort(aimer.begin(), aimer.end());
    return aimer[3];
}
