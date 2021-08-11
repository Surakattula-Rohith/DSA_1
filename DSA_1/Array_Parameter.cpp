#include <bits/stdc++.h>
using namespace std;

void funct(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        arr[i] = 1 + arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
}

int *fun(int n)
{
    int *p;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = n - i;
    }
    return p;
}

int main()
{

    int arr[] = {20, 3, 5, 37, 68, 23, 11, 9};

    cout << 2[arr] <<endl ;

    funct(arr, 8);

    int *p;
    p = fun(5);

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}