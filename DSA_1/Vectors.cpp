#include <iostream>
#include <vector>

#include <bits/stdc++.h> 

using namespace std;

int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(9);
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);

    int a = v.size();

    for (int i = 0; i < a; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int>::iterator it;

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    v.pop_back();

    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;

    vector<int> v2(3, 50);
    for (auto element : v2)
    {
        cout << element << " ";
    }
    cout << endl;

    sort(v.begin(), v.end()); //Sorts the vector

    int ab = v.size();

    for (int i = 0; i < ab; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    swap(v, v2);

    int b = v2.size();

    for (int i = 0; i < a; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < b; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

     

    return 0;
}