#include<bits/stdc++.h>

using namespace std;

struct in4{
    int a,b;
    string fname, lname;
    in4(int _a, int _b, string _fname, string _lname)
    {
        a=_a;
        b=_b;
        fname=_fname;
        lname=_lname;
    }


};



int main()
{
    int a,b;
    string fn,ln;
    cin >> a >> fn >> ln >> b;
    in4 p(a,b,fn,ln);
    cout << p.a << " " << p.fname << " " << p.lname << " " << p.b;
}
