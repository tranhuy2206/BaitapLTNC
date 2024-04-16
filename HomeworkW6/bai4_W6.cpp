#include <bits/stdc++.h>
using namespace std;

class Box
{
private:
    int l, b, h;
public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int lenght, int breadth, int height)
    {
        l = lenght;
        b = breadth;
        h = height;
    }
    Box(const Box& B)
    {
        l=B.l;
        b=B.b;
        h=B.h;
    }
    int getLenght()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return l*b*h;
    }
    friend bool operator < (Box& A, Box& B)
    {
        if((A.l < B.l) || (A.b < B.b && A.l == B.l) || (a.h < B.h && A.b == B.b && A.l == B.l) )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend ostream& operator << (ostream& out, Box& B)
    {
        out << B.l << " " << B.b << " " << B.h << "\n";
        return out;
    }
};

int main()
{

}



int main()
{

}
