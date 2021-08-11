#include <bits/stdc++.h>
using namespace std;

void PVswap(int x, int y) //Pass By Value
{
    int t = x;
    x = y;
    y = t;
}

void PAswap(int *x, int *y) //Pass By Address
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void PRswap(int &x, int &y) //Pass By Reference
{
    int t ;
    t = x;
    x = y;
    y = t;
}


int main()
{

    int a = 10;
    int b = 20;

    cout << "The numbers are " << endl;
    cout << a << " " << b << " " << endl;

    PVswap(a, b);
    cout << "Swapping by Pass by Value " << endl;
    cout << a << " " << b << " " << endl;

    PAswap(&a, &b);
    cout << "Swapping by Pass by Address " << endl;
    cout << a << " " << b << " " << endl;

    a = 10 ;
    b = 20 ;

    PRswap(a, b);
    cout << "Swapping by Pass by Reference  " << endl;
    cout << a << " " << b << " " << endl;

    return 0;
}