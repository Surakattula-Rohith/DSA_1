#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l;
    int b;

public:
    Rectangle(int l, int b) //Constructor
    {

        this->l = l;
        this->b = b;
    }
    void initialize(int a, int bs)
    {
        l = a;
        b = bs;
    }
    int area()
    {
        return (l * b);
    }
    int perimeter();
    
    void changeLength(int a)
    {
        l = a;
    }
};

int Rectangle::perimeter()
    {
        return (2 * (l + b));
    }

int main()
{
    Rectangle r(300, 50);

    r.initialize(10, 20);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;

    r.changeLength(40);
    cout << r.area() << endl;

    return 0;
}