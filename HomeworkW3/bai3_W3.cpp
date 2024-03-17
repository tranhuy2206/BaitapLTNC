#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    int a=s.size();
    if(s[a-2]==80)
    {
        if(s[0]==49 &&s[1]==50)
        {

        }
        else
        {
            int b=(s[0]-48)*10+(s[1]-48)+12;
            s[1]=b%10+48;
            s[0]=b/10+48;
        }
    }
    if(s[a-2]==65)
    {
        if(s[0]==49 && s[1]==50)
        {
            s[0]=48;
            s[1]=48;

        }
    }
    return s;
}



int main()
{
    string s,a;
    cin >> s;
    a=timeConversion(s);
    for(int i=0; i<int(s.size())-2; i++)
    {
        cout << a[i];
    }
}
