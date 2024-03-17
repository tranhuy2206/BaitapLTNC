#include <bits/stdc++.h>

using namespace std;

void PrintAns(bool flag)
{
    if(flag)
    {
        cout << "Your number is too big!\n";
    }
    else
    {
        cout << "Your number is too small!\n";
    }
}

void Gameplay()
{
    int key, r=100, l=0, guessnum;
    cin >> key;
    bool flag;

    while(l<=r)
    {
        guessnum=(l+r)/2;
        if(guessnum > key)
        {
            r=guessnum -1;
            flag=true;
            PrintAns(flag);
        }
        else if(guessnum < key)
        {
            l=guessnum + 1;
            flag=false;
            PrintAns(flag);
        }
        else { break; }
    }
    cout << guessnum << " Congratulate!!";
}

int main()
{

    Gameplay();
}
