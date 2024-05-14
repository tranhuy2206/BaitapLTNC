#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a = {1, 5, 9, 3, 4};
    int b = {6, 8, 2, 7, 10};
    vector<int> c;
    for(int i=0,j=0; i<5 && j<5; )
    {
        if(a[i] > b[j])
        {
            c.push_back(b[j]);
            j++;
        }
        else if(a[i] < b[j])
        {
            c.push_back(a[i]);
            i++;
        }
    }
    for(int i=0; i<10; i++)
    {
        cout << c[i] << " ";
    }
}
