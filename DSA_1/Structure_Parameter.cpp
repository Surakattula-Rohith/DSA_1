#include <bits/stdc++.h>
using namespace std;

struct Rect
{
    int l;
    int b;
};

int area(struct Rect R) //Pass by value
{
    return ((R.l) * (R.b));
}

int R_area(struct Rect &R) //Pass by reference
{
    R.b = 50 ;
    return ((R.l) * (R.b));
}

int main()
{

    struct Rect R = {10, 20};

    cout << R_area(R);

    return 0;
}