#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << fixed << setprecision(3) << a << endl << b << endl << c << endl << d << endl;
    cout << fixed << setprecision(9) << e;
        return 0;
}
