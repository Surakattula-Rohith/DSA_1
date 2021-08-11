#include <bits/stdc++.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{

    // struct Rectangle r;

    // struct Rectangle *p = &r ;

    // cout << r.length << " ";
    // cout << r.breadth << endl;

    // cout << (*p).length << endl ;
    // cout << p->length << endl ;

    struct Rectangle *p = null  ;

    p = new struct Rectangle r;

    p->breadth = 10;
    p->length = 20;

    cout << r.length << " ";
    cout << r.breadth << endl;

    return 0;
}