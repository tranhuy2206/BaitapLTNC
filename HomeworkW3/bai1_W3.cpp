#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    cout << int(a.size()) << " " << int(b.size()) << endl;
    cout << a << b << endl;
    char c=b[0];
    b[0]=a[0];
    a[0]=c;
    cout << a << " " << b;
    return 0;
}
