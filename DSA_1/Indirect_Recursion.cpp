#include <bits/stdc++.h>
using namespace std;

void funcA(int n);
void funB(int n);

void funcA(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 1)
    {
        cout << n << " ";
        funcA(n / 2);
    }
}

int main()
{
    funcA(50);
    cout << endl;
    return 0;
}